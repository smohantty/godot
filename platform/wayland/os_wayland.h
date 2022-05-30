/*************************************************************************/
/*  os_x11.h                                                             */
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

#ifndef OS_WAYLAND_H
#define OS_WAYLAND_H

//#include "context_gl_x11.h"
#include "core/os/os.h"
#include "core/local_vector.h"
#include "core/os/input.h"
#include "crash_handler_wayland.h"
#include "drivers/alsa/audio_driver_alsa.h"
#include "drivers/alsamidi/midi_driver_alsamidi.h"
#include "drivers/pulseaudio/audio_driver_pulseaudio.h"
#include "drivers/unix/os_unix.h"
//#include "joypad_linux.h"
#include "main/input_default.h"
#include "power_wayland.h"
#include "servers/audio_server.h"
#include "servers/visual/rasterizer.h"
#include "servers/visual_server.h"

#include "window/window_wayland.h"

class OS_Wayland : public OS_Unix {
    CrashHandler crash_handler;

	WindowWayland *wayland_window;
    VisualServer *visual_server;
	VideoMode current_videomode;
	int current_video_driver;
    List<String> args;
    MainLoop *main_loop;

	mutable Mutex events_mutex;
	Thread events_thread;
	bool events_thread_done = false;

    InputDefault *input;

	// IME
	bool im_active;
	Vector2 im_position;
	Vector2 last_position_before_fs;

	Size2 min_size;
	Size2 max_size;

	Point2 last_mouse_pos;
	bool last_mouse_pos_valid;
	Point2i last_click_pos;
	uint64_t last_click_ms;
	int last_click_button_index;
	uint32_t last_button_state;

	bool force_quit;
	bool minimized;
	bool window_has_focus;
	bool do_mouse_warp;

#ifdef ALSA_ENABLED
	AudioDriverALSA driver_alsa;
#endif

#ifdef ALSAMIDI_ENABLED
	MIDIDriverALSAMidi driver_alsamidi;
#endif

#ifdef PULSEAUDIO_ENABLED
	AudioDriverPulseAudio driver_pulseaudio;
#endif

protected:
	virtual int get_current_video_driver() const;
	virtual int get_video_driver_count() const;
	virtual const char *get_video_driver_name(int p_driver) const;

	virtual void initialize_core();
	virtual Error initialize(const VideoMode &p_desired, int p_video_driver, int p_audio_driver);
	virtual void finalize();

	virtual void set_main_loop(MainLoop *p_main_loop);
    virtual MainLoop *get_main_loop() const;
    virtual void delete_main_loop();

    virtual void set_video_mode(const VideoMode &p_video_mode, int p_screen = 0);
    virtual VideoMode get_video_mode(int p_screen = 0) const;
    virtual void get_fullscreen_mode_list(List<VideoMode> *p_list, int p_screen = 0) const;

	bool window_maximize_check(const char *p_atom_name) const;
	bool is_window_maximize_allowed() const;

    virtual bool _check_internal_feature_support(const String &p_feature);

    virtual Point2 get_mouse_position() const;
    virtual int get_mouse_button_state() const;

    virtual void set_window_title(const String &p_title);
    virtual Size2 get_window_size() const;
    
    virtual bool can_draw() const;

public:
    void run();
    OS_Wayland();
};

#endif