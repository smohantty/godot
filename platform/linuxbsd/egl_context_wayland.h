/*************************************************************************/
/*  egl_context_wayland.h                                                 */
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

#ifndef EGL_CONTEXT_WAYLAND_H
#define EGL_CONTEXT_WAYLAND_H

#include <EGL/egl.h>
#include <wayland-egl.h>

#include "core/error/error_list.h"
#include "core/os/os.h"
#include "servers/display_server.h"
#include "core/templates/local_vector.h"

struct EglContextWaylandPrivate;

class EglContextWayland {
public:
	enum class Api {
		GLES_2_0,
		GLES_3_0
	};
public:
	EglContextWayland(struct wl_display *display, EglContextWayland::Api api);
	~EglContextWayland();
	Error initialize();
	void window_resize(DisplayServer::WindowID p_window_id, int p_width, int p_height);
	Error window_create(DisplayServer::WindowID p_window_id, DisplayServer::VSyncMode p_vsync_mode, struct wl_display *p_display, struct wl_surface *p_surface, int p_width, int p_height);
	void window_destroy(DisplayServer::WindowID p_window_id);

	void swap_buffers();
	void make_current();
	void release_current();
	void window_make_current(DisplayServer::WindowID p_window_id);

private:
	// any data specific to the window
	struct WaylandWindow {
		bool in_use = false;

		// the external ID .. should match the wayland window number .. unused I think
		DisplayServer::WindowID window_id = DisplayServer::INVALID_WINDOW_ID;
		int width = 0;
		int height = 0;
		wl_egl_window *wayland_window;
		EGLSurface     egl_surface;
	};

	LocalVector<WaylandWindow> _windows;

	WaylandWindow *_current_window = nullptr;

	struct wl_display *mDisplay;

    EGLint mMajorVersion{0};
    EGLint mMinorVersion{0};

	EGLDisplay mEglDisplay;
	EGLContext mEglContext;
	EGLConfig  mEglConfig;

	EGLint mWidth;
	EGLint mHeight;

	EglContextWayland::Api mApi;
};

#endif // EGL_CONTEXT_WAYLAND_H