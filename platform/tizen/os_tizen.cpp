/**************************************************************************/
/*  OS_Tizen.cpp                                                       */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

#include "os_tizen.h"

#include "core/io/dir_access.h"
#include "main/main.h"
#include "servers/display_server.h"

void OS_Tizen::alert(const String &p_alert, const String &p_title) {
}

void OS_Tizen::initialize() {
	OS_Unix::initialize_core();
}

void OS_Tizen::initialize_joypads() {
}

String OS_Tizen::get_unique_id() const {
	return "";
}

String OS_Tizen::get_processor_name() const {
	return "";
}

void OS_Tizen::finalize() {
	if (main_loop) {
		memdelete(main_loop);
	}
	main_loop = nullptr;
}

MainLoop *OS_Tizen::get_main_loop() const {
	return main_loop;
}

void OS_Tizen::delete_main_loop() {
	if (main_loop) {
		memdelete(main_loop);
	}
	main_loop = nullptr;
}

void OS_Tizen::set_main_loop(MainLoop *p_main_loop) {
	main_loop = p_main_loop;
}

String OS_Tizen::get_name() const {
	return "Tizen";
}

String OS_Tizen::get_systemd_os_release_info_value(const String &key) const {
	return {};
}

String OS_Tizen::get_distribution_name() const {
	return {};
}

String OS_Tizen::get_version() const {
	return {};
}

Vector<String> OS_Tizen::get_video_adapter_driver_info() const {
	if (RenderingServer::get_singleton()->get_rendering_device() == nullptr) {
		return Vector<String>();
	}
	return {};
}

Error OS_Tizen::shell_open(String p_uri) {
	return FAILED;
}

bool OS_Tizen::_check_internal_feature_support(const String &p_feature) {
	return false;
}

uint64_t OS_Tizen::get_embedded_pck_offset() const {
	return 0;
}

Vector<String> OS_Tizen::get_system_fonts() const {
	return {};
}

Vector<String> OS_Tizen::get_system_font_path_for_text(const String &p_font_name, const String &p_text, const String &p_locale, const String &p_script, int p_weight, int p_stretch, bool p_italic) const {
	Vector<String> ret;
	return ret;
}

String OS_Tizen::get_system_font_path(const String &p_font_name, int p_weight, int p_stretch, bool p_italic) const {
	return "";
}

String OS_Tizen::get_config_path() const {
	return "";
}

String OS_Tizen::get_data_path() const {
	return "";
}

String OS_Tizen::get_cache_path() const {
	return "";
}

String OS_Tizen::get_system_dir(SystemDir p_dir, bool p_shared_storage) const {
	return "";
}

void OS_Tizen::run() {
	if (!main_loop) {
		return;
	}

	main_loop->initialize();

	//uint64_t last_ticks=get_ticks_usec();

	//int frames=0;
	//uint64_t frame=0;

	while (true) {
		DisplayServer::get_singleton()->process_events(); // get rid of pending events
		if (Main::iteration()) {
			break;
		}
	}

	main_loop->finalize();
}

void OS_Tizen::disable_crash_handler() {
}

bool OS_Tizen::is_disable_crash_handler() const {
	return true;
}

Error OS_Tizen::move_to_trash(const String &p_path) {
	return OK;
}

OS_Tizen::OS_Tizen() {
	main_loop = nullptr;
}

OS_Tizen::~OS_Tizen() {

}
