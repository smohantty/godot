/*************************************************************************/
/*  display_server_wayland.h                                             */
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

#ifndef DISPLAY_SERVER_WAYLAND_H
#define DISPLAY_SERVER_WAYLAND_H

#ifdef WAYLAND_ENABLED

// FIXME: Linux only?
#include <fcntl.h>
#include <limits.h>
#include <poll.h>
#include <stdio.h>
#include <sys/mman.h>
#include <unistd.h>

#include "key_mapping_xkb.h"
#include "servers/display_server.h"

#include "wayland-cursor.h"


#include "xdg_shell_unstable_v6.gen.h"

// FIXME: Since this platform is called linuxbsd, can we avoid this include?
//#include "linux/input-event-codes.h"

#ifdef VULKAN_ENABLED
#include "drivers/vulkan/rendering_device_vulkan.h"
#include "vulkan_context_wayland.h"
#endif

#include "core/input/input.h"
#include "core/os/thread.h"

#undef CursorShape

class DisplayServerWayland : public DisplayServer {
	// Wayland stuff.

	// Messages used for sending stuff to the main thread to be dispatched there.
	class WaylandMessage : public RefCounted {
	public:
		WaylandMessage() {}
		virtual ~WaylandMessage() = default;
	};

	// WaylandMessage data for window rect changes.
	class WaylandWindowRectMessage : public WaylandMessage {
	public:
		WindowID id;
		Rect2i rect;
	};

	class WaylandWindowEventMessage : public WaylandMessage {
	public:
		WindowID id;
		WindowEvent event;
	};

	class WaylandInputEventMessage : public WaylandMessage {
	public:
		Ref<InputEvent> event;
	};

	struct WaylandGlobals {
		struct wl_shm *wl_shm = nullptr;
		uint32_t wl_shm_name = 0;

		struct wl_compositor *wl_compositor = nullptr;
		uint32_t wl_compositor_name = 0;

		struct zxdg_shell_v6 *zxdg_shell = nullptr;
		uint32_t zxdg_shell_name = 0;
	};

	struct WaylandState;

	struct WindowData {
		// For use in event sending and whatnot.
		WindowID id;
		WaylandState *wls;

		struct wl_surface *wl_surface = nullptr;
		struct zxdg_surface_v6 *zxdg_surface = nullptr;
		struct zxdg_toplevel_v6 *zxdg_toplevel = nullptr;

		struct zxdg_popup_v6 *zxdg_popup = nullptr;

		RBSet<WindowID> children;
		WindowID parent = INVALID_WINDOW_ID;

		bool visible = false;

		uint32_t flags;
		VSyncMode vsync_mode;
		Rect2i rect;
		Rect2i safe_rect;

		Callable rect_changed_callback;
		Callable window_event_callback;
		Callable input_event_callback;

		// Metadata.
		String title;
	};

	struct ScreenData {
		struct wl_output *wl_output = nullptr;
		uint32_t wl_output_name = 0;

		// Geometry data.
		Point2i position;

		String make;
		String model;

		Size2i size;
		Size2i physical_size;

		float refresh_rate = 0;
		int scale = 0;
	};

	struct WaylandState {
		Mutex mutex;

		struct wl_display *display = nullptr;
		struct wl_registry *registry = nullptr;

		WaylandGlobals globals;

		WindowID window_id_counter = MAIN_WINDOW_ID;
		HashMap<WindowID, WindowData> windows;

		// NOTE: This variable is a `LocalVector` of `ScreenData` pointers because
		// this list will:
		//
		// - Be Updated very rarely (only by screen hotplugs), so we can allow
		//   ourselves for it to be more expensive to rebuild.
		//
		// - Be potentially read a lot and almost always in an indexed fashion (for
		//   example any of the `screen_*` methods each frame from GDScript), so
		//   having a quick read is relatively important.
		//
		// - Have to keep its pointers valid as the Wayland listeners require a
		//   constant pointer for their data. That's why we need to manually manage
		//   the data's memory and make this whole variable a `LocalVector` of
		//   pointers.
		//
		// While this whole approach is probably the result of a bit too much
		// premature optimization for an issue that I thought could be trivially
		// solved, it's already there and it works, so I'm keeping it. Also, in the
		// worst case, if this were to give problems or result in an uselessly
		// convoluted approach, it should be relatively easy to switch back to a
		// simpler (albeit, I think techcnically more wasteful but only in extreme
		// circumstances) plain `List`.
		LocalVector<ScreenData *> screens;

		List<WindowID> popup_menu_stack;

		SafeFlag events_thread_done;

		List<Ref<WaylandMessage>> message_queue;

#ifdef VULKAN_ENABLED
		VulkanContextWayland *context_vulkan = nullptr;
		RenderingDeviceVulkan *rendering_device_vulkan = nullptr;
#endif
	};

	WaylandState wls;

	Thread events_thread;


	WindowID _create_window(WindowMode p_mode, VSyncMode p_vsync_mode, uint32_t p_flags, const Rect2i &p_rect);
	void _send_window_event(WindowID p_window, WindowEvent p_event);
	void _delete_window(WindowID p_window);

	static void _poll_events_thread(void *p_wls);

	static void dispatch_input_events(const Ref<InputEvent> &p_event);
	void _dispatch_input_event(const Ref<InputEvent> &p_event);

	// Wayland event handlers.
	static void _wl_registry_on_global(void *data, struct wl_registry *wl_registry, uint32_t name, const char *interface, uint32_t version);
	static void _wl_registry_on_global_remove(void *data, struct wl_registry *wl_registry, uint32_t name);

	static void _wl_surface_on_enter(void *data, struct wl_surface *wl_surface, struct wl_output *wl_output);
	static void _wl_surface_on_leave(void *data, struct wl_surface *wl_surface, struct wl_output *wl_output);

	static void _wl_output_on_geometry(void *data, struct wl_output *wl_output, int32_t x, int32_t y, int32_t physical_width, int32_t physical_height, int32_t subpixel, const char *make, const char *model, int32_t transform);
	static void _wl_output_on_mode(void *data, struct wl_output *wl_output, uint32_t flags, int32_t width, int32_t height, int32_t refresh);
	static void _wl_output_on_done(void *data, struct wl_output *wl_output);
	static void _wl_output_on_scale(void *data, struct wl_output *wl_output, int32_t factor);

	//zxdg_shell_v6 event handlers.
	static void _zxdg_shell_v6_on_ping(void *data, struct zxdg_shell_v6 *zxdg_shell, uint32_t serial);
	static void _zxdg_surface_v6_on_configure(void *data, struct zxdg_surface_v6 *zxdg_surface, uint32_t serial);

	static void _zxdg_toplevel_v6_on_configure(void *data, struct zxdg_toplevel_v6 *zxdg_toplevel, int32_t width, int32_t height, struct wl_array *states);
	static void _zxdg_toplevel_v6_on_close(void *data, struct zxdg_toplevel_v6 *zxdg_toplevel);

	static void _zxdg_popup_v6_on_configure(void *data, struct zxdg_popup_v6 *zxdg_popup, int32_t x, int32_t y, int32_t width, int32_t height);
	static void _zxdg_popup_v6_on_popup_done(void *data, struct zxdg_popup_v6 *zxdg_popup);

	static constexpr struct wl_registry_listener wl_registry_listener = {
		.global = _wl_registry_on_global,
		.global_remove = _wl_registry_on_global_remove,
	};

	static constexpr struct wl_surface_listener wl_surface_listener = {
		.enter = _wl_surface_on_enter,
		.leave = _wl_surface_on_leave,
	};

	static constexpr struct wl_output_listener wl_output_listener = {
		.geometry = _wl_output_on_geometry,
		.mode = _wl_output_on_mode,
		.done = _wl_output_on_done,
		.scale = _wl_output_on_scale,
	};

	// zxdg_shell_v6 event listeners.
	static constexpr struct zxdg_shell_v6_listener zxdg_shell_listener = {
	    .ping = _zxdg_shell_v6_on_ping,
	};

	static constexpr struct zxdg_surface_v6_listener zxdg_surface_listener = {
		.configure = _zxdg_surface_v6_on_configure,
	};

	static constexpr struct zxdg_toplevel_v6_listener zxdg_toplevel_listener = {
		.configure = _zxdg_toplevel_v6_on_configure,
		.close = _zxdg_toplevel_v6_on_close,
	};

	static constexpr struct zxdg_popup_v6_listener zxdg_popup_listener = {
		.configure = _zxdg_popup_v6_on_configure,
		.popup_done = _zxdg_popup_v6_on_popup_done,
	};

public:
	virtual bool has_feature(Feature p_feature) const override;

	virtual String get_name() const override;

	virtual void mouse_set_mode(MouseMode p_mode) override;
	virtual MouseMode mouse_get_mode() const override;

	virtual void warp_mouse(const Point2i &p_to) override;
	virtual Point2i mouse_get_position() const override;
	virtual MouseButton mouse_get_button_state() const override;

	virtual void clipboard_set(const String &p_text) override;
	virtual String clipboard_get() const override;
	virtual void clipboard_set_primary(const String &p_text) override;
	virtual String clipboard_get_primary() const override;

	virtual int get_screen_count() const override;
	virtual Point2i screen_get_position(int p_screen = SCREEN_OF_MAIN_WINDOW) const override;
	virtual Size2i screen_get_size(int p_screen = SCREEN_OF_MAIN_WINDOW) const override;
	virtual Rect2i screen_get_usable_rect(int p_screen = SCREEN_OF_MAIN_WINDOW) const override;
	virtual int screen_get_dpi(int p_screen = SCREEN_OF_MAIN_WINDOW) const override;
	virtual float screen_get_refresh_rate(int p_screen = SCREEN_OF_MAIN_WINDOW) const override;
	virtual bool screen_is_touchscreen(int p_screen = SCREEN_OF_MAIN_WINDOW) const override;

#if defined(DBUS_ENABLED)
	virtual void screen_set_keep_on(bool p_enable) override;
	virtual bool screen_is_kept_on() const override;
#endif

	virtual Vector<DisplayServer::WindowID> get_window_list() const override;

	virtual WindowID create_sub_window(WindowMode p_mode, VSyncMode p_vsync_mode, uint32_t p_flags, const Rect2i &p_rect = Rect2i()) override;
	virtual void show_window(WindowID p_id) override;
	virtual void delete_sub_window(WindowID p_id) override;

	virtual WindowID window_get_active_popup() const override;
	virtual void window_set_popup_safe_rect(WindowID p_window, const Rect2i &p_rect) override;
	virtual Rect2i window_get_popup_safe_rect(WindowID p_window) const override;

	virtual WindowID get_window_at_screen_position(const Point2i &p_position) const override;

	virtual void window_attach_instance_id(ObjectID p_instance, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual ObjectID window_get_attached_instance_id(WindowID p_window = MAIN_WINDOW_ID) const override;

	virtual void window_set_title(const String &p_title, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual void window_set_mouse_passthrough(const Vector<Vector2> &p_region, WindowID p_window = MAIN_WINDOW_ID) override;

	virtual void window_set_rect_changed_callback(const Callable &p_callable, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual void window_set_window_event_callback(const Callable &p_callable, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual void window_set_input_event_callback(const Callable &p_callable, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual void window_set_input_text_callback(const Callable &p_callable, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual void window_set_drop_files_callback(const Callable &p_callable, WindowID p_window = MAIN_WINDOW_ID) override;

	virtual int window_get_current_screen(WindowID p_window = MAIN_WINDOW_ID) const override;
	virtual void window_set_current_screen(int p_screen, WindowID p_window = MAIN_WINDOW_ID) override;

	virtual Point2i window_get_position(WindowID p_window = MAIN_WINDOW_ID) const override;
	virtual void window_set_position(const Point2i &p_position, WindowID p_window = MAIN_WINDOW_ID) override;

	virtual void window_set_max_size(const Size2i p_size, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual Size2i window_get_max_size(WindowID p_window = MAIN_WINDOW_ID) const override;
	virtual void gl_window_make_current(DisplayServer::WindowID p_window_id) override;

	virtual void window_set_transient(WindowID p_window, WindowID p_parent) override;

	virtual void window_set_min_size(const Size2i p_size, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual Size2i window_get_min_size(WindowID p_window = MAIN_WINDOW_ID) const override;

	virtual void window_set_size(const Size2i p_size, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual Size2i window_get_size(WindowID p_window = MAIN_WINDOW_ID) const override;
	virtual Size2i window_get_real_size(WindowID p_window = MAIN_WINDOW_ID) const override;

	virtual void window_set_mode(WindowMode p_mode, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual WindowMode window_get_mode(WindowID p_window = MAIN_WINDOW_ID) const override;

	virtual bool window_is_maximize_allowed(WindowID p_window = MAIN_WINDOW_ID) const override;

	virtual void window_set_flag(WindowFlags p_flag, bool p_enabled, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual bool window_get_flag(WindowFlags p_flag, WindowID p_window = MAIN_WINDOW_ID) const override;

	virtual void window_request_attention(WindowID p_window = MAIN_WINDOW_ID) override;

	virtual void window_move_to_foreground(WindowID p_window = MAIN_WINDOW_ID) override;

	virtual bool window_can_draw(WindowID p_window = MAIN_WINDOW_ID) const override;

	virtual bool can_any_window_draw() const override;

	virtual void window_set_ime_active(const bool p_active, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual void window_set_ime_position(const Point2i &p_pos, WindowID p_window = MAIN_WINDOW_ID) override;

	virtual void window_set_vsync_mode(DisplayServer::VSyncMode p_vsync_mode, WindowID p_window = MAIN_WINDOW_ID) override;
	virtual DisplayServer::VSyncMode window_get_vsync_mode(WindowID p_vsync_mode) const override;

	virtual void cursor_set_shape(CursorShape p_shape) override;
	virtual CursorShape cursor_get_shape() const override;
	virtual void cursor_set_custom_image(const Ref<Resource> &p_cursor, CursorShape p_shape, const Vector2 &p_hotspot) override;

	virtual int keyboard_get_layout_count() const override;
	virtual int keyboard_get_current_layout() const override;
	virtual void keyboard_set_current_layout(int p_index) override;
	virtual String keyboard_get_layout_language(int p_index) const override;
	virtual String keyboard_get_layout_name(int p_index) const override;
	virtual Key keyboard_get_keycode_from_physical(Key p_keycode) const override;

	virtual void process_events() override;

	virtual void release_rendering_thread() override;
	virtual void make_rendering_thread() override;
	virtual void swap_buffers() override;

	virtual void set_context(Context p_context) override;

	virtual void set_native_icon(const String &p_filename) override;
	virtual void set_icon(const Ref<Image> &p_icon) override;

	static DisplayServer *create_func(const String &p_rendering_driver, WindowMode p_mode, VSyncMode p_vsync_mode, uint32_t p_flags, const Vector2i &p_resolution, Error &r_error);
	static Vector<String> get_rendering_drivers_func();

	static void register_wayland_driver();

	DisplayServerWayland(const String &p_rendering_driver, WindowMode p_mode, VSyncMode p_vsync_mode, uint32_t p_flags, const Vector2i &p_resolution, Error &r_error);
	~DisplayServerWayland();
};

#endif // WAYLAND_ENABLED

#endif // DISPLAY_SERVER_WAYLAND_H
