/*************************************************************************/
/*  display_server_wayland.cpp                                           */
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

#include "display_server_wayland.h"

#ifdef WAYLAND_ENABLED

#ifdef VULKAN_ENABLED
#include "servers/rendering/renderer_rd/renderer_compositor_rd.h"
#endif

// Implementation specific methods.

void DisplayServerWayland::_poll_events_thread(void *p_wls) {
	WaylandState *wls = (WaylandState *)p_wls;

	struct pollfd poll_fd;
	poll_fd.fd = wl_display_get_fd(wls->display);
	poll_fd.events = POLLIN | POLLHUP;

	while (true) {
		// Empty the event queue while it's full.
		while (wl_display_prepare_read(wls->display) != 0) {
			MutexLock mutex_lock(wls->mutex);
			wl_display_dispatch_pending(wls->display);
		}

		errno = 0;
		if (wl_display_flush(wls->display) == -1) {
			if (errno != EAGAIN) {
				print_error(vformat("Error %d while flushing the Wayland display.", errno));
				wls->events_thread_done.set();
			}
		}

		// Wait for the event file descriptor to have new data.
		poll(&poll_fd, 1, -1);

		if (wls->events_thread_done.is_set()) {
			wl_display_cancel_read(wls->display);
			break;
		}

		if (poll_fd.revents | POLLIN) {
			wl_display_read_events(wls->display);
		} else {
			wl_display_cancel_read(wls->display);
		}
	}
}


void DisplayServerWayland::dispatch_input_events(const Ref<InputEvent> &p_event) {
	((DisplayServerWayland *)(get_singleton()))->_dispatch_input_event(p_event);
}

void DisplayServerWayland::_dispatch_input_event(const Ref<InputEvent> &p_event) {
	Variant ev = p_event;
	Variant *evp = &ev;
	Variant ret;
	Callable::CallError ce;

	// Close the topmost popup menu if the user clicks outside of it or its safe
	// rect.
	Ref<InputEventMouseButton> mb = p_event;
	if (mb.is_valid() && mb->is_pressed() && wls.popup_menu_stack.size() > 0) {
		WindowID &front_id = wls.popup_menu_stack.front()->get();

		ERR_FAIL_COND(!wls.windows.has(front_id));
		WindowData &wd = wls.windows[front_id];

		if (!wd.rect.has_point(mb->get_global_position()) && !wd.safe_rect.has_point(mb->get_global_position())) {
			_send_window_event(front_id, WINDOW_EVENT_CLOSE_REQUEST);
			return;
		}
	}

	Ref<InputEventFromWindow> event_from_window = p_event;
	if (event_from_window.is_valid() && event_from_window->get_window_id() != INVALID_WINDOW_ID) {
		// Send to a single window.
		if (wls.windows.has(event_from_window->get_window_id())) {
			Callable callable = wls.windows[event_from_window->get_window_id()].input_event_callback;
			if (callable.is_valid()) {
				callable.call((const Variant **)&evp, 1, ret, ce);
			}
		}
	} else {
		// Send to all windows.
		for (KeyValue<WindowID, WindowData> &E : wls.windows) {
			Callable callable = E.value.input_event_callback;
			if (callable.is_valid()) {
				callable.call((const Variant **)&evp, 1, ret, ce);
			}
		}
	}
}

DisplayServer::WindowID DisplayServerWayland::_create_window(WindowMode p_mode, VSyncMode p_vsync_mode, uint32_t p_flags, const Rect2i &p_rect) {
	MutexLock mutex_lock(wls.mutex);

	WindowID id = wls.window_id_counter++;

	WindowData &wd = wls.windows[id];

	wd.id = id;
	wd.wls = &wls;

	wd.flags = p_flags;
	wd.vsync_mode = p_vsync_mode;
	wd.rect = p_rect;

	wd.title = "Godot";

	return id;
}

void DisplayServerWayland::_send_window_event(WindowID p_window, WindowEvent p_event) {
	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	if (window_get_flag(WINDOW_FLAG_BORDERLESS, p_window) && p_event == WINDOW_EVENT_CLOSE_REQUEST) {
		for (WindowID &child : wd.children) {
			// If the window is a borderless window (Wayland popup) and it's getting
			// asked to close, make absolutely sure to request it first to all of its
			// children recursively and from top to bottom. The Wayland spec mandates
			// this and otherwise the compositor might complain.
			_send_window_event(child, WINDOW_EVENT_CLOSE_REQUEST);
		}
	}

	if (wd.window_event_callback.is_valid()) {
		Variant var_event = Variant(p_event);
		Variant *arg = &var_event;

		Variant ret;
		Callable::CallError ce;

		wd.window_event_callback.call((const Variant **)&arg, 1, ret, ce);
	}
}

void DisplayServerWayland::_delete_window(WindowID p_window) {
	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	if (window_get_flag(WINDOW_FLAG_BORDERLESS, p_window)) {
		print_verbose(vformat("Deleting popup %d.", p_window));
	} else {
		print_verbose(vformat("Deleting window %d.", p_window));
	}

	if (window_get_flag(WINDOW_FLAG_POPUP, p_window) && wls.popup_menu_stack.size() > 0) {
		WindowID &top_id = wls.popup_menu_stack.front()->get();
		if (top_id != p_window) {
			print_error(vformat("Deleting popup menu %d which is not the topmost in the stack.", top_id));
		}

		wls.popup_menu_stack.pop_front();
	}

	while (wd.children.size()) {
		// Unparent all children of the window.
		window_set_transient(wd.children.front()->get(), INVALID_WINDOW_ID);
	}

	if (wd.parent != INVALID_WINDOW_ID) {
		window_set_transient(p_window, INVALID_WINDOW_ID);
	}

#ifdef VULKAN_ENABLED
	if (wls.context_vulkan && wd.visible) {
		wls.context_vulkan->window_destroy(p_window);
		wd.visible = false;
	}
#endif

	if (wd.zxdg_popup) {
		zxdg_popup_v6_destroy(wd.zxdg_popup);
		wd.zxdg_popup = nullptr;
	}

	if (wd.zxdg_toplevel) {
		zxdg_toplevel_v6_destroy(wd.zxdg_toplevel);
		wd.zxdg_toplevel = nullptr;
	}

	if (wd.zxdg_surface) {
		zxdg_surface_v6_destroy(wd.zxdg_surface);
		wd.zxdg_surface = nullptr;
	}

	if (wd.wl_surface) {
		wl_surface_destroy(wd.wl_surface);
		wd.wl_surface = nullptr;
	}

	wls.windows.erase(p_window);
}

void DisplayServerWayland::_wl_registry_on_global(void *data, struct wl_registry *wl_registry, uint32_t name, const char *interface, uint32_t version) {
	WaylandState *wls = (WaylandState *)data;

	WaylandGlobals &globals = wls->globals;

	if (strcmp(interface, wl_shm_interface.name) == 0) {
		globals.wl_shm = (struct wl_shm *)wl_registry_bind(wl_registry, name, &wl_shm_interface, 1);
		globals.wl_shm_name = name;
		return;
	}

	if (strcmp(interface, wl_compositor_interface.name) == 0) {
		globals.wl_compositor = (struct wl_compositor *)wl_registry_bind(wl_registry, name, &wl_compositor_interface, 1);
		globals.wl_compositor_name = name;
		return;
	}

	if (strcmp(interface, wl_output_interface.name) == 0) {
		ScreenData *sd = memnew(ScreenData);
		sd->wl_output = (struct wl_output *)wl_registry_bind(wl_registry, name, &wl_output_interface, 1);
		sd->wl_output_name = name;

		wls->screens.push_back(sd);

		wl_output_add_listener(sd->wl_output, &wl_output_listener, sd);
		return;
	}

	if (strcmp(interface, zxdg_shell_v6_interface.name) == 0) {
		globals.zxdg_shell = (struct zxdg_shell_v6 *)wl_registry_bind(wl_registry, name, &zxdg_shell_v6_interface, 1);
		globals.zxdg_shell_name = name;		
		return;
	}
}

void DisplayServerWayland::_wl_registry_on_global_remove(void *data, struct wl_registry *wl_registry, uint32_t name) {
	WaylandState *wls = (WaylandState *)data;

	WaylandGlobals &globals = wls->globals;

	if (name == globals.wl_shm_name) {
		wl_shm_destroy(globals.wl_shm);
		globals.wl_shm = nullptr;
		return;
	}

	if (name == globals.wl_compositor_name) {
		wl_compositor_destroy(globals.wl_compositor);
		globals.wl_compositor = nullptr;
		return;
	}

	if (name == globals.zxdg_shell_name) {
		zxdg_shell_v6_destroy(globals.zxdg_shell);
		globals.zxdg_shell = nullptr;
		return;
	}


	// FIXME: This is a very bruteforce approach.
	for (int i = 0; i < (int)wls->screens.size(); i++) {
		// Iterate through all of the screens to find if any got removed.
		ScreenData *sd = wls->screens[i];

		if (sd->wl_output_name == name) {
			wl_output_destroy(sd->wl_output);
			memfree(wls->screens[i]);
			wls->screens.remove_at(i);
			return;
		}
	}
}

void DisplayServerWayland::_wl_surface_on_enter(void *data, struct wl_surface *wl_surface, struct wl_output *wl_output) {
}

void DisplayServerWayland::_wl_surface_on_leave(void *data, struct wl_surface *wl_surface, struct wl_output *wl_output) {
}

void DisplayServerWayland::_wl_output_on_geometry(void *data, struct wl_output *wl_output, int32_t x, int32_t y, int32_t physical_width, int32_t physical_height, int32_t subpixel, const char *make, const char *model, int32_t transform) {
	ScreenData *sd = (ScreenData *)data;

	sd->position.x = x;
	sd->position.y = y;

	sd->physical_size.width = physical_width;
	sd->physical_size.height = physical_height;

	sd->make.parse_utf8(make);
	sd->model.parse_utf8(model);
}

void DisplayServerWayland::_wl_output_on_mode(void *data, struct wl_output *wl_output, uint32_t flags, int32_t width, int32_t height, int32_t refresh) {
	ScreenData *sd = (ScreenData *)data;

	sd->size.width = width;
	sd->size.height = height;

	sd->refresh_rate = refresh ? refresh / 1000.0f : -1;
}

void DisplayServerWayland::_wl_output_on_done(void *data, struct wl_output *wl_output) {
}

void DisplayServerWayland::_wl_output_on_scale(void *data, struct wl_output *wl_output, int32_t factor) {
	ScreenData *sd = (ScreenData *)data;

	sd->scale = factor;
}

void DisplayServerWayland::_zxdg_shell_v6_on_ping(void *data, struct zxdg_shell_v6 *shell, uint32_t serial) {
	zxdg_shell_v6_pong(shell, serial);
}

void DisplayServerWayland::_zxdg_surface_v6_on_configure(void *data, struct zxdg_surface_v6 *zxdg_surface, uint32_t serial) {
	zxdg_surface_v6_ack_configure(zxdg_surface, serial);

	WindowData *wd = (WindowData *)data;
	ERR_FAIL_NULL(wd);

	WaylandState *wls = (WaylandState *)wd->wls;
	ERR_FAIL_NULL(wls);

	zxdg_surface_v6_set_window_geometry(wd->zxdg_surface, 0, 0, wd->rect.size.width, wd->rect.size.height);

	Ref<WaylandWindowRectMessage> msg;
	msg.instantiate();
	msg->id = wd->id;
	msg->rect = wd->rect;
	wls->message_queue.push_back(msg);
}

void DisplayServerWayland::_zxdg_toplevel_v6_on_configure(void *data, struct zxdg_toplevel_v6 *zxdg_toplevel, int32_t width, int32_t height, struct wl_array *states) {
	WindowData *wd = (WindowData *)data;
	ERR_FAIL_NULL(wd);

	if (width != 0 && height != 0) {
		wd->rect.size.width = width;
		wd->rect.size.height = height;
	}
}

void DisplayServerWayland::_zxdg_toplevel_v6_on_close(void *data, struct zxdg_toplevel_v6 *zxdg_toplevel) {
	WindowData *wd = (WindowData *)data;
	ERR_FAIL_NULL(wd);

	WaylandState *wls = (WaylandState *)wd->wls;
	ERR_FAIL_NULL(wls);

	Ref<WaylandWindowEventMessage> msg;
	msg.instantiate();
	msg->id = wd->id;
	msg->event = WINDOW_EVENT_CLOSE_REQUEST;
	wls->message_queue.push_back(msg);
}

void DisplayServerWayland::_zxdg_popup_v6_on_configure(void *data, struct zxdg_popup_v6 *zxdg_popup, int32_t x, int32_t y, int32_t width, int32_t height) {
	WindowData *wd = (WindowData *)data;
	ERR_FAIL_NULL(wd);

	wd->rect.position.x = x;
	wd->rect.position.y = y;
	wd->rect.size.width = width;
	wd->rect.size.height = height;

	// DEBUG
	print_verbose("xdg popup on configure");
}

void DisplayServerWayland::_zxdg_popup_v6_on_popup_done(void *data, struct zxdg_popup_v6 *zxdg_popup) {
	WindowData *wd = (WindowData *)data;
	ERR_FAIL_NULL(wd);

	WaylandState *wls = (WaylandState *)wd->wls;
	ERR_FAIL_NULL(wls);

	Ref<WaylandWindowEventMessage> msg;
	msg.instantiate();
	msg->id = wd->id;
	msg->event = WINDOW_EVENT_CLOSE_REQUEST;
	wls->message_queue.push_back(msg);

	// DEBUG
	print_verbose(vformat("Window %d xdg popup on popup done", wd->id));
}

// Interface mthods

bool DisplayServerWayland::has_feature(Feature p_feature) const {
	switch (p_feature) {
		case FEATURE_MOUSE:
		case FEATURE_SUBWINDOWS:
			return true;
		default: {
		}
	}

	return false;
}

String DisplayServerWayland::get_name() const {
	return "Wayland";
}

void DisplayServerWayland::mouse_set_mode(MouseMode p_mode) {

}

DisplayServerWayland::MouseMode DisplayServerWayland::mouse_get_mode() const {
	return {};
}

void DisplayServerWayland::warp_mouse(const Point2i &p_to) {
	// TODO
	print_verbose("wayland stub warp_mouse");
}

Point2i DisplayServerWayland::mouse_get_position() const {
	MutexLock mutex_lock(wls.mutex);

	Point2i position;

	// if (wls.current_seat) {
	// 	position = wls.current_seat->pointer_data.position;

	// 	WindowID window_id = wls.current_seat->pointer_data.pointed_window_id;

	// 	while (window_id != INVALID_WINDOW_ID) {
	// 		ERR_FAIL_COND_V(!wls.windows.has(window_id), Point2i());
	// 		position += wls.windows[window_id].rect.position;
	// 		window_id = wls.windows[window_id].parent;
	// 	}
	// }

	return position;
}

MouseButton DisplayServerWayland::mouse_get_button_state() const {
	return MouseButton::NONE;

}

void DisplayServerWayland::clipboard_set(const String &p_text) {

}

String DisplayServerWayland::clipboard_get() const {
	return {};
}

void DisplayServerWayland::clipboard_set_primary(const String &p_text) {
}

String DisplayServerWayland::clipboard_get_primary() const {
	return {};
}

int DisplayServerWayland::get_screen_count() const {
	MutexLock mutex_lock(wls.mutex);
	return wls.screens.size();
}

Point2i DisplayServerWayland::screen_get_position(int p_screen) const {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_INDEX_V(p_screen, (int)wls.screens.size(), Point2i());

	return wls.screens[p_screen]->position;
}

Size2i DisplayServerWayland::screen_get_size(int p_screen) const {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_INDEX_V(p_screen, (int)wls.screens.size(), Size2i());

	return wls.screens[p_screen]->size;
}

Rect2i DisplayServerWayland::screen_get_usable_rect(int p_screen) const {
	// TODO
	print_verbose("wayland stub screen_get_usable_rect");
	return Rect2i(0, 0, 1920, 1080);
}

int DisplayServerWayland::screen_get_dpi(int p_screen) const {
	MutexLock mutex_lock(wls.mutex);

	if (p_screen == SCREEN_OF_MAIN_WINDOW) {
		p_screen = window_get_current_screen();
	}

	// Invalid screen?
	ERR_FAIL_INDEX_V(p_screen, get_screen_count(), 0);

	ScreenData &sd = *wls.screens[p_screen];

	int width_mm = sd.physical_size.width;
	int height_mm = sd.physical_size.height;

	double xdpi = (width_mm ? sd.size.width / (double)width_mm * 25.4 : 0);
	double ydpi = (height_mm ? sd.size.height / (double)height_mm * 25.4 : 0);

	if (xdpi || ydpi) {
		return (xdpi + ydpi) / (xdpi && ydpi ? 2 : 1);
	}

	// Could not get DPI.
	return 96;
}

float DisplayServerWayland::screen_get_refresh_rate(int p_screen) const {
	MutexLock mutex_lock(wls.mutex);

	if (p_screen == SCREEN_OF_MAIN_WINDOW) {
		p_screen = window_get_current_screen();
	}

	ERR_FAIL_INDEX_V(p_screen, (int)wls.screens.size(), -1);

	return wls.screens[p_screen]->refresh_rate;
}

bool DisplayServerWayland::screen_is_touchscreen(int p_screen) const {
	// TODO
	print_verbose("wayland stub screen_is_touchscreen");
	return false;
}

#if defined(DBUS_ENABLED)

void DisplayServerWayland::screen_set_keep_on(bool p_enable) {
	// TODO
	print_verbose("wayland stub screen_set_keep_on");
}

bool DisplayServerWayland::screen_is_kept_on() const {
	// TODO
	print_verbose("wayland stub screen_is_kept_on");
	return false;
}

#endif

Vector<DisplayServer::WindowID> DisplayServerWayland::get_window_list() const {
	// TODO
	print_verbose("wayland stub get_window_list");

	return Vector<DisplayServer::WindowID>();
}

DisplayServer::WindowID DisplayServerWayland::create_sub_window(WindowMode p_mode, VSyncMode p_vsync_mode, uint32_t p_flags, const Rect2i &p_rect) {
	return _create_window(p_mode, p_vsync_mode, p_flags, p_rect);
}

void DisplayServerWayland::show_window(DisplayServer::WindowID p_id) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_id));
	WindowData &wd = wls.windows[p_id];

	if (!wd.visible) {
		print_verbose(vformat("Showing window %d", p_id));

		wd.wl_surface = wl_compositor_create_surface(wls.globals.wl_compositor);
		wl_surface_add_listener(wd.wl_surface, &wl_surface_listener, &wd);

		wd.zxdg_surface = zxdg_shell_v6_get_xdg_surface(wls.globals.zxdg_shell, wd.wl_surface);
		zxdg_surface_v6_add_listener(wd.zxdg_surface, &zxdg_surface_listener, &wd);

		if (window_get_flag(WINDOW_FLAG_BORDERLESS, p_id)) {
			ERR_FAIL_COND_MSG(wd.parent == INVALID_WINDOW_ID, "Popups must have a parent.");

			// WindowData &parent_wd = wls.windows[wd.parent];

			// struct xdg_positioner *xdg_positioner = xdg_wm_base_create_positioner(wls.globals.xdg_wm_base);
			// xdg_positioner_set_size(xdg_positioner, wd.rect.size.x, wd.rect.size.y);
			// xdg_positioner_set_anchor(xdg_positioner, XDG_POSITIONER_ANCHOR_TOP_LEFT);
			// xdg_positioner_set_gravity(xdg_positioner, XDG_POSITIONER_GRAVITY_BOTTOM_RIGHT);
			// xdg_positioner_set_anchor_rect(xdg_positioner, 0, 0, parent_wd.rect.size.width, parent_wd.rect.size.height);
			// xdg_positioner_set_offset(xdg_positioner, wd.rect.position.x - parent_wd.rect.position.x, wd.rect.position.y - parent_wd.rect.position.y);

			// print_verbose(vformat("Created popup at %s", wd.rect.position));

			// wd.xdg_popup = xdg_surface_get_popup(wd.xdg_surface, parent_wd.xdg_surface, xdg_positioner);
			// xdg_popup_add_listener(wd.xdg_popup, &xdg_popup_listener, &wd);

			// xdg_positioner_destroy(xdg_positioner);
		} else {
			wd.zxdg_toplevel = zxdg_surface_v6_get_toplevel(wd.zxdg_surface);
			zxdg_toplevel_v6_add_listener(wd.zxdg_toplevel, &zxdg_toplevel_listener, &wd);

			if (wd.parent != INVALID_WINDOW_ID) {
				ERR_FAIL_COND(!wls.windows.has(wd.parent));

				WindowData &parent_wd = wls.windows[wd.parent];

				if (parent_wd.zxdg_toplevel) {
					zxdg_toplevel_v6_set_parent(wd.zxdg_toplevel, parent_wd.zxdg_toplevel);
				}
			}

			if (wd.title.utf8().ptr()) {
				zxdg_toplevel_v6_set_title(wd.zxdg_toplevel, wd.title.utf8().ptr());
			}
		}

		if (window_get_flag(WINDOW_FLAG_POPUP, p_id)) {
			if (wls.popup_menu_stack.size() > 0 && wls.popup_menu_stack.front()->get() != wd.parent) {
				// Delete the whole stack, we're creating a new one with a different root.
				_send_window_event(wls.popup_menu_stack.back()->get(), WINDOW_EVENT_CLOSE_REQUEST);
				wls.popup_menu_stack.clear();
			}

			// if (wls.current_seat) {
			// 	// TODO: Investigate serial handling. Right now it only uses the last
			// 	// button serial, but on sway it doesn't really matter.

			// 	// Grab the popup. This blocks all new keyboard focus events.
			// 	xdg_popup_grab(wd.xdg_popup, wls.current_seat->wl_seat, wls.current_seat->pointer_data.button_serial);

			// 	// We must still focus the keyboard on the popup menu manually though.
			// 	wls.current_seat->keyboard_focused_window_id = p_id;
			// }

			wls.popup_menu_stack.push_front(p_id);
		}

		wl_surface_commit(wd.wl_surface);

#ifdef VULKAN_ENABLED
		// Since `VulkanContextWayland::window_create` automatically assigns a buffer
		// to the `wl_surface` and doing so instantly maps it, moving this method here
		// is the only solution I can think of to implement this method properly.
		if (wls.context_vulkan) {
			Error err = wls.context_vulkan->window_create(p_id, wd.vsync_mode, wls.display, wd.wl_surface, wd.rect.size.width, wd.rect.size.height);
			ERR_FAIL_COND_MSG(err == ERR_CANT_CREATE, "Can't show a Vulkan window.");
		}
#endif
		wd.visible = true;
	}
}

void DisplayServerWayland::delete_sub_window(DisplayServer::WindowID p_id) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND_MSG(p_id == MAIN_WINDOW_ID, "Main window can't be deleted.");

	_delete_window(p_id);
}

DisplayServer::WindowID DisplayServerWayland::window_get_active_popup() const {
	MutexLock mutex_lock(wls.mutex);

	if (wls.popup_menu_stack.size() > 0) {
		return wls.popup_menu_stack.front()->get();
	}

	return INVALID_WINDOW_ID;
}

void DisplayServerWayland::window_set_popup_safe_rect(WindowID p_window, const Rect2i &p_rect) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_window));
	wls.windows[p_window].safe_rect = p_rect;
}

Rect2i DisplayServerWayland::window_get_popup_safe_rect(WindowID p_window) const {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND_V(!wls.windows.has(p_window), Rect2i());
	return wls.windows[p_window].safe_rect;
}

DisplayServer::WindowID DisplayServerWayland::get_window_at_screen_position(const Point2i &p_position) const {
	// TODO
	print_verbose("wayland stub get_window_at_screen_position");
	return WindowID(0);
}

void DisplayServerWayland::window_attach_instance_id(ObjectID p_instance, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_attach_instance_id");
}

ObjectID DisplayServerWayland::window_get_attached_instance_id(DisplayServer::WindowID p_window) const {
	// TODO
	print_verbose("wayland stub window_get_attached_instance_id");
	return ObjectID();
}

void DisplayServerWayland::window_set_title(const String &p_title, DisplayServer::WindowID p_window) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_window));

	WindowData &wd = wls.windows[p_window];

	wd.title = p_title;

	if (wd.zxdg_toplevel) {
		zxdg_toplevel_v6_set_title(wd.zxdg_toplevel, p_title.utf8().get_data());
	}
}

void DisplayServerWayland::window_set_mouse_passthrough(const Vector<Vector2> &p_region, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_mouse_passthrough");
}

void DisplayServerWayland::window_set_rect_changed_callback(const Callable &p_callable, DisplayServer::WindowID p_window) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	wd.rect_changed_callback = p_callable;
}

void DisplayServerWayland::window_set_window_event_callback(const Callable &p_callable, DisplayServer::WindowID p_window) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	wd.window_event_callback = p_callable;
}

void DisplayServerWayland::window_set_input_event_callback(const Callable &p_callable, DisplayServer::WindowID p_window) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	wd.input_event_callback = p_callable;
}

void DisplayServerWayland::window_set_input_text_callback(const Callable &p_callable, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_input_text_callback");
}

void DisplayServerWayland::window_set_drop_files_callback(const Callable &p_callable, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_drop_files_callback");
}

int DisplayServerWayland::window_get_current_screen(DisplayServer::WindowID p_window) const {
	// TODO: Implement this somehow.
	// I've tried to do it before, but since we can only register window
	// entering/leaving from a screen, it would be too complex for the little
	// accuracy and usefulness we would get from it, as such, I've purposely left
	// this method as a stub, for now.
	return 0;
}

void DisplayServerWayland::window_set_current_screen(int p_screen, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_current_screen");
}

Point2i DisplayServerWayland::window_get_position(DisplayServer::WindowID p_window) const {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND_V(!wls.windows.has(p_window), Point2i());

	if (wls.windows[p_window].zxdg_toplevel) {
		return Point2i();
	} else {
		return wls.windows[p_window].rect.position;
	}
}

void DisplayServerWayland::window_set_position(const Point2i &p_position, DisplayServer::WindowID p_window) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	wd.rect.position = p_position;
}

void DisplayServerWayland::window_set_max_size(const Size2i p_size, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_max_size");
}

Size2i DisplayServerWayland::window_get_max_size(DisplayServer::WindowID p_window) const {
	// TODO
	print_verbose("wayland stub window_get_max_size");
	return Size2i(1920, 1080);
}

void DisplayServerWayland::gl_window_make_current(DisplayServer::WindowID p_window_id) {
	// TODO
	print_verbose("wayland stub gl_window_make_current");
}

// TODO: Make accurate with the X11 implementation.
void DisplayServerWayland::window_set_transient(DisplayServer::WindowID p_window, DisplayServer::WindowID p_parent) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(p_window == p_parent);

	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	ERR_FAIL_COND(wd.parent == p_parent);

	struct zxdg_toplevel_v6 *parent_toplevel = nullptr;

	// Unset the window's parent if there's already one.
	if (wd.parent != INVALID_WINDOW_ID) {
		ERR_FAIL_COND(!wls.windows.has(wd.parent));
		WindowData &old_parent_wd = wls.windows[wd.parent];

		ERR_FAIL_COND(!old_parent_wd.children.has(p_window));
		old_parent_wd.children.erase(p_window);

		wd.parent = INVALID_WINDOW_ID;
	}

	if (p_parent != INVALID_WINDOW_ID) {
		ERR_FAIL_COND(!wls.windows.has(p_parent));
		WindowData &parent_wd = wls.windows[p_parent];

		parent_wd.children.insert(p_window);
		wd.parent = p_parent;

		ERR_FAIL_COND_MSG(!window_get_flag(WINDOW_FLAG_BORDERLESS, p_window) && window_get_flag(WINDOW_FLAG_BORDERLESS, p_parent), "Toplevels can't be parented to a popup.");
	}

	if (wd.zxdg_toplevel) {
		zxdg_toplevel_v6_set_parent(wd.zxdg_toplevel, parent_toplevel);
	}
}

void DisplayServerWayland::window_set_min_size(const Size2i p_size, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_min_size");
}

Size2i DisplayServerWayland::window_get_min_size(DisplayServer::WindowID p_window) const {
	// TODO
	print_verbose("wayland stub window_get_min_size");
	return Size2i(0, 0);
}

void DisplayServerWayland::window_set_size(const Size2i p_size, DisplayServer::WindowID p_window) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	wd.rect.size = p_size;

	if (wd.zxdg_surface) {
		zxdg_surface_v6_set_window_geometry(wd.zxdg_surface, 0, 0, wd.rect.size.width, wd.rect.size.height);
	}

#ifdef VULKAN_ENABLED
	if (wd.visible && wls.context_vulkan) {
		wls.context_vulkan->window_resize(p_window, wd.rect.size.width, wd.rect.size.height);
	}
#endif
}

Size2i DisplayServerWayland::window_get_size(DisplayServer::WindowID p_window) const {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND_V(!wls.windows.has(p_window), Size2i());

	return wls.windows[p_window].rect.size;
}

Size2i DisplayServerWayland::window_get_real_size(DisplayServer::WindowID p_window) const {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND_V(!wls.windows.has(p_window), Size2i());

	// I don't think there's a way of actually knowing the window size in wayland,
	// other than the one requested by the compositor, which happens to be
	// the one the windows always uses anyway.
	return wls.windows[p_window].rect.size;
}

void DisplayServerWayland::window_set_mode(WindowMode p_mode, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_mode");
}

DisplayServer::WindowMode DisplayServerWayland::window_get_mode(DisplayServer::WindowID p_window) const {
	// TODO
	print_verbose("wayland stub window_get_mode");
	return WINDOW_MODE_WINDOWED;
}

bool DisplayServerWayland::window_is_maximize_allowed(DisplayServer::WindowID p_window) const {
	// TODO
	print_verbose("wayland stub window_is_maximize_allowed");
	return false;
}

void DisplayServerWayland::window_set_flag(WindowFlags p_flag, bool p_enabled, DisplayServer::WindowID p_window) {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND(!wls.windows.has(p_window));
	WindowData &wd = wls.windows[p_window];

	print_verbose(vformat("Window %d set flag %d", p_window, p_flag));

	switch (p_flag) {
		case WINDOW_FLAG_BORDERLESS: {
			ERR_FAIL_COND_MSG(wd.visible, "Popup flag can't changed while window is opened.");
		} break;

		default: {
		}
	}

	if (p_enabled) {
		wd.flags |= 1 << p_flag;
	} else {
		wd.flags &= ~(1 << p_flag);
	}
}

bool DisplayServerWayland::window_get_flag(WindowFlags p_flag, DisplayServer::WindowID p_window) const {
	MutexLock mutex_lock(wls.mutex);

	ERR_FAIL_COND_V(!wls.windows.has(p_window), false);

	return wls.windows[p_window].flags & (1 << p_flag);
}

void DisplayServerWayland::window_request_attention(DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_request_attention");
}

void DisplayServerWayland::window_move_to_foreground(DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_move_to_foreground");
}

bool DisplayServerWayland::window_can_draw(DisplayServer::WindowID p_window) const {
	// TODO: Implement this. For now a simple return true will work tough
	return true;
}

bool DisplayServerWayland::can_any_window_draw() const {
	// TODO: Implement this. For now a simple return true will work tough
	return true;
}

void DisplayServerWayland::window_set_ime_active(const bool p_active, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_ime_active");
}

void DisplayServerWayland::window_set_ime_position(const Point2i &p_pos, DisplayServer::WindowID p_window) {
	// TODO
	print_verbose("wayland stub window_set_ime_position");
}

void DisplayServerWayland::window_set_vsync_mode(DisplayServer::VSyncMode p_vsync_mode, DisplayServer::WindowID p_window) {
	// TODO: Figure out whether it is possible to disable VSync with Wayland
	// (doubt it) or handle any other mode.
	print_verbose("wayland stub window_set_vsync_mode");
}

DisplayServer::VSyncMode DisplayServerWayland::window_get_vsync_mode(DisplayServer::WindowID p_vsync_mode) const {
	// TODO: Figure out whether it is possible to disable VSync with Wayland
	// (doubt it) or handle any other mode.
	return VSYNC_ENABLED;
}

void DisplayServerWayland::cursor_set_shape(CursorShape p_shape) {

}

DisplayServerWayland::CursorShape DisplayServerWayland::cursor_get_shape() const {
	return {};
}

void DisplayServerWayland::cursor_set_custom_image(const Ref<Resource> &p_cursor, CursorShape p_shape, const Vector2 &p_hotspot) {
	// TODO
	print_verbose("wayland stub cursor_set_custom_image");
}

int DisplayServerWayland::keyboard_get_layout_count() const {
	return 0;
}

int DisplayServerWayland::keyboard_get_current_layout() const {
	return 0;
}

void DisplayServerWayland::keyboard_set_current_layout(int p_index) {
}

String DisplayServerWayland::keyboard_get_layout_language(int p_index) const {
	// xkbcommon exposes only the layout's name, which looks like it overlaps with
	// its language.
	return keyboard_get_layout_name(p_index);
}

String DisplayServerWayland::keyboard_get_layout_name(int p_index) const {
	return {};
}

Key DisplayServerWayland::keyboard_get_keycode_from_physical(Key p_keycode) const {
	return  Key::NONE;
}

void DisplayServerWayland::process_events() {
	MutexLock mutex_lock(wls.mutex);

	int werror = wl_display_get_error(wls.display);

	if (werror) {
		if (werror == EPROTO) {
			struct wl_interface *wl_interface = nullptr;
			uint32_t id = 0;

			int error_code = wl_display_get_protocol_error(wls.display, (const struct wl_interface **)&wl_interface, &id);
			print_error(vformat("Wayland protocol error %d on interface %s@%d", error_code, wl_interface ? wl_interface->name : "unknown", id));
		} else {
			print_error(vformat("Wayland client error code %d", werror));
		}
	}

	while (wls.message_queue.front()) {
		Ref<WaylandMessage> msg = wls.message_queue.front()->get();

		Ref<WaylandWindowRectMessage> winrect_msg = msg;

		if (winrect_msg.is_valid() && wls.windows.has(winrect_msg->id)) {
			WindowID id = winrect_msg->id;
			Rect2i rect = winrect_msg->rect;
			WindowData &wd = wls.windows[id];

#ifdef VULKAN_ENABLED
			if (wd.visible && wls.context_vulkan) {
				wls.context_vulkan->window_resize(id, rect.size.width, rect.size.height);
			}
#endif

			if (wd.rect_changed_callback.is_valid()) {
				Variant var_rect = Variant(rect);
				Variant *arg = &var_rect;

				Variant ret;
				Callable::CallError ce;

				wd.rect_changed_callback.call((const Variant **)&arg, 1, ret, ce);
			}
		}

		Ref<WaylandWindowEventMessage> winev_msg = msg;

		if (winev_msg.is_valid() && wls.windows.has(winev_msg->id)) {
			_send_window_event(winev_msg->id, winev_msg->event);
		}

		Ref<WaylandInputEventMessage> inputev_msg = msg;

		if (inputev_msg.is_valid()) {
			Ref<InputEvent> ev = inputev_msg->event;

			Input::get_singleton()->parse_input_event(inputev_msg->event);
		}

		wls.message_queue.pop_front();
	}

	Input::get_singleton()->flush_buffered_events();
}

void DisplayServerWayland::release_rendering_thread() {
	// TODO
	print_verbose("wayland stub release_rendering_thread");
}

void DisplayServerWayland::make_rendering_thread() {
	// TODO
	print_verbose("wayland stub make_rendering_thread");
}

void DisplayServerWayland::swap_buffers() {
	// TODO
	print_verbose("wayland stub swap_buffers");
}

void DisplayServerWayland::set_context(Context p_context) {
	// TODO
	print_verbose("wayland stub set_context");
}

void DisplayServerWayland::set_native_icon(const String &p_filename) {
	// TODO
	print_verbose("wayland stub set_native_icon");
}

void DisplayServerWayland::set_icon(const Ref<Image> &p_icon) {
	// TODO
	print_verbose("wayland stub set_icon");
}

Vector<String> DisplayServerWayland::get_rendering_drivers_func() {
	Vector<String> drivers;

#ifdef VULKAN_ENABLED
	drivers.push_back("vulkan");
#endif

	// TODO
	/*
	 * #ifdef GLES3_ENABLED
	 * 	drivers.push_back("opengl3");
	 * #endif
	 */

	return drivers;
}

DisplayServer *DisplayServerWayland::create_func(const String &p_rendering_driver, WindowMode p_mode, VSyncMode p_vsync_mode, uint32_t p_flags, const Vector2i &p_resolution, Error &r_error) {
	DisplayServer *ds = memnew(DisplayServerWayland(p_rendering_driver, p_mode, p_vsync_mode, p_flags, p_resolution, r_error));
	if (r_error != OK) {
		OS::get_singleton()->alert("Your video card driver does not support any of the supported Vulkan or OpenGL versions.\n"
								   "Please update your drivers or if you have a very old or integrated GPU, upgrade it.\n"
								   "If you have updated your graphics drivers recently, try rebooting.",
				"Unable to initialize Video driver");
	}
	return ds;
}

DisplayServerWayland::DisplayServerWayland(const String &p_rendering_driver, WindowMode p_mode, VSyncMode p_vsync_mode, uint32_t p_flags, const Vector2i &p_resolution, Error &r_error) {
	wls.display = wl_display_connect(nullptr);

	// TODO: Better error handling.
	ERR_FAIL_NULL(wls.display);

	wls.registry = wl_display_get_registry(wls.display);

	// TODO: Better error handling.
	ERR_FAIL_NULL(wls.display);

	wl_registry_add_listener(wls.registry, &wl_registry_listener, &wls);

	// Wait for globals to get notified from the compositor.
	wl_display_roundtrip(wls.display);

	// Input.
	Input::get_singleton()->set_event_dispatch_function(dispatch_input_events);

	// Wait for seat capabilities.
	wl_display_roundtrip(wls.display);

	zxdg_shell_v6_add_listener(wls.globals.zxdg_shell, &zxdg_shell_listener, nullptr);

#if defined(VULKAN_ENABLED)
	if (p_rendering_driver == "vulkan") {
		wls.context_vulkan = memnew(VulkanContextWayland);

		if (wls.context_vulkan->initialize() != OK) {
			memdelete(wls.context_vulkan);
			wls.context_vulkan = nullptr;
			r_error = ERR_CANT_CREATE;
			ERR_FAIL_MSG("Could not initialize Vulkan");
		}
	}
#endif


	WindowID main_window_id = _create_window(p_mode, p_vsync_mode, p_flags, screen_get_usable_rect());
	show_window(main_window_id);

#ifdef VULKAN_ENABLED
	if (p_rendering_driver == "vulkan") {
		wls.rendering_device_vulkan = memnew(RenderingDeviceVulkan);
		wls.rendering_device_vulkan->initialize(wls.context_vulkan);

		RendererCompositorRD::make_current();
	}

	r_error = OK;
#endif

	events_thread.start(_poll_events_thread, &wls);
}

DisplayServerWayland::~DisplayServerWayland() {
	wls.events_thread_done.set();

	// Wait for any Wayland events to be handled and unblock the polling thread.
	wl_display_roundtrip(wls.display);

	events_thread.wait_to_finish();

	// Destroy all windows.
	for (KeyValue<WindowID, WindowData> &E : wls.windows) {
		WindowID id = E.key;
		_delete_window(id);
	}

	// Free all screens.
	for (int i = 0; i < (int)wls.screens.size(); i++) {
		memfree(wls.screens[i]);
		wls.screens[i] = nullptr;
	}

	wl_display_disconnect(wls.display);

	// Destroy all drivers.
#ifdef VULKAN_ENABLED
	if (wls.rendering_device_vulkan) {
		wls.rendering_device_vulkan->finalize();
		memdelete(wls.rendering_device_vulkan);
		wls.rendering_device_vulkan = nullptr;
	}

	if (wls.context_vulkan) {
		memdelete(wls.context_vulkan);
		wls.context_vulkan = nullptr;
	}
#endif
}

void DisplayServerWayland::register_wayland_driver() {
	register_create_function("wayland", create_func, get_rendering_drivers_func);
}

#endif //WAYLAND_ENABLED
