/*************************************************************************/
/*  os_wayland.cpp                                                           */
/*************************************************************************/
/*                       This file is part of:                           */
/*                           GODOT ENGINE                                */
/*                      https://godotengine.org                          */
/*************************************************************************/
/* Copyright (c) 2007-2022 Juan Linietsky, Ariel Manzur.                 */
/* Copyright (c) 2014-2022 Godot Engine contributors (cf. AUTHORS.md).   */
/*                                                                       */
/* Permission is hereby granted, free of charge, to any person obtaining */
/* a copy of this software and associated documentation files (the       */
/* "Software"), to deal in the Software without restriction, including   */
/* without limitation the rights to use, copy, modify, merge, publish,   */
/* distribute, sublicense, and/or sell copies of the Software, and to    */
/* permit persons to whom the Software is furnished to do so, subject to */
/* the following conditions:                                             */
/*                                                                       */
/* The above copyright notice and this permission notice shall be        */
/* included in all copies or substantial portions of the Software.       */
/*                                                                       */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,       */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF    */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.*/
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY  */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,  */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE     */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                */
/*************************************************************************/

#include "os_wayland.h"

#include "core/os/dir_access.h"
#include "core/print_string.h"
//#include "detect_prime.h"

#include "drivers/gles3/rasterizer_gles3.h"
#define FRT_DL_SKIP
#include "drivers/gles2/rasterizer_gles2.h"
//#include "key_mapping_x11.h"
#include "main/main.h"
#include "servers/visual/visual_server_raster.h"
#include "servers/visual/visual_server_wrap_mt.h"

#define VIDEO_DRIVER_GLES2 0
#define VIDEO_DRIVER_GLES3 1

#define VIDEO_DRIVER_COUNT 2

int OS_Wayland::get_current_video_driver() const {
	return current_video_driver;
}

int OS_Wayland::get_video_driver_count() const {
	return VIDEO_DRIVER_COUNT;
}

const char *OS_Wayland::get_video_driver_name(int p_driver) const {
	switch (p_driver) {
		case VIDEO_DRIVER_GLES3:
			return "GLES3";
		case VIDEO_DRIVER_GLES2:
			return "GLES2";
	}
	print_line(vformat("Invalid video driver index: %d ", p_driver));
	return "GLES2";
}

void OS_Wayland::set_main_loop(MainLoop *p_main_loop) {
	main_loop = p_main_loop;
	input->set_main_loop(p_main_loop);
}

MainLoop *OS_Wayland::get_main_loop() const {
	return main_loop;
}

void OS_Wayland::delete_main_loop() {
	if (main_loop) {
		memdelete(main_loop);
	}
	main_loop = nullptr;
}

void OS_Wayland::initialize_core() {
	crash_handler.initialize();

	OS_Unix::initialize_core();
}


Error OS_Wayland::initialize(const VideoMode &p_desired, int p_video_driver, int p_audio_driver) {
    args = OS::get_singleton()->get_cmdline_args();
    current_videomode = p_desired;
	main_loop = nullptr;
    //TODO
	WindowProperties props;
	props.width = current_videomode.width;
	props.height = current_videomode.height;
	props.fullscreen = current_videomode.fullscreen;

	wayland_window = memnew(WindowWayland(props));

	wayland_window->create_render_surface(current_videomode.width, current_videomode.height);
	auto get_proc_address = [](const char* name ) -> void* {
		auto address = eglGetProcAddress(name);
		if (!address) {
			print_line("Failed eglGetProcAddress: ");
			return nullptr;
		}
		return reinterpret_cast<void*>(address);
	};

	if (p_video_driver == VIDEO_DRIVER_GLES3) {
		frt_resolve_symbols_gles3(get_proc_address);
		RasterizerGLES3::register_config();
		RasterizerGLES3::make_current();
		current_video_driver = VIDEO_DRIVER_GLES3;
	} else {
		frt_resolve_symbols_gles2(get_proc_address);
		RasterizerGLES2::register_config();
		RasterizerGLES2::make_current();
		current_video_driver = VIDEO_DRIVER_GLES2;
	}

	visual_server = memnew(VisualServerRaster);
	if (get_render_thread_mode() != RENDER_THREAD_UNSAFE) {
		visual_server = memnew(VisualServerWrapMT(visual_server, get_render_thread_mode() == RENDER_SEPARATE_THREAD));
	}

	visual_server->init();

	AudioDriverManager::initialize(p_audio_driver);

	input = memnew(InputDefault);

    return OK;
}

void OS_Wayland::finalize() {
	events_thread_done = true;
	events_thread.wait_to_finish();

	if (main_loop) {
		memdelete(main_loop);
	}
	main_loop = nullptr;

    //TODO
}

void OS_Wayland::set_video_mode(const VideoMode &p_video_mode, int p_screen) {

}

OS::VideoMode OS_Wayland::get_video_mode(int p_screen) const {
    return current_videomode;
}

void OS_Wayland::get_fullscreen_mode_list(List<VideoMode> *p_list, int p_screen) const {

}

bool OS_Wayland::_check_internal_feature_support(const String &p_feature) {
	print_line("Features : " + p_feature);
    return p_feature == "mobile";
}

Point2 OS_Wayland::get_mouse_position() const {
    return last_mouse_pos;
}

int OS_Wayland::get_mouse_button_state() const {
    return last_button_state;
}

void OS_Wayland::set_window_title(const String &p_title) {
    //TODO
}

Size2 OS_Wayland::get_window_size() const {
	// Use current_videomode width and height instead of XGetWindowAttributes
	// since right after a XResizeWindow the attributes may not be updated yet
	return Size2i(current_videomode.width, current_videomode.height);
}

bool OS_Wayland::can_draw() const {
    return !minimized;
}

void OS_Wayland::release_rendering_thread() {
	wayland_window->release_current();
}

void OS_Wayland::make_rendering_thread() {
	wayland_window->make_current();
}

void OS_Wayland::swap_buffers() {
	wayland_window->swap_buffers();
}

OS_Wayland::OS_Wayland() {
	current_video_driver = VIDEO_DRIVER_GLES3;
#ifdef PULSEAUDIO_ENABLED
	AudioDriverManager::add_driver(&driver_pulseaudio);
#endif

#ifdef ALSA_ENABLED
	AudioDriverManager::add_driver(&driver_alsa);
#endif

}

void OS_Wayland::run() {
	force_quit = false;

	if (!main_loop) {
		return;
	}

 	main_loop->init();

	while (!force_quit) {
		wayland_window->process_events();
// #ifdef JOYDEV_ENABLED
// 		joypad->process_joypads();
// #endif
		if (Main::iteration()) {
			break;
		}
	};

	main_loop->finish();
}