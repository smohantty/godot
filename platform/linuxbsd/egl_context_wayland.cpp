/*************************************************************************/
/*  egl_context_wayland.cpp                                           */
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

#include "egl_context_wayland.h"

#include "EGL/eglext.h"
#include "thirdparty/glad/glad/glad.h"


Error EglContextWayland::initialize() {
	mEglDisplay = eglGetDisplay((EGLNativeDisplayType) mDisplay);

	if (mEglDisplay == EGL_NO_DISPLAY) {
		print_error("Could not get Egl Display from native wayland Display");
		return FAILED;
	}

    if (eglInitialize(mEglDisplay, &mMajorVersion, &mMinorVersion) != EGL_TRUE) {
		print_error("Could not initialize Egl Display!! ");

		//try again with display from eglGetPlatformDisplayEXT

    	PFNEGLGETPLATFORMDISPLAYEXTPROC eglGetPlatformDisplayEXT = reinterpret_cast<PFNEGLGETPLATFORMDISPLAYEXTPROC>(eglGetProcAddress("eglGetPlatformDisplayEXT"));
    	if (!eglGetPlatformDisplayEXT) {
    		print_error("Could not get eglGetPlatformDisplayEXT!! ");
    		return FAILED;
		}

		mEglDisplay = eglGetPlatformDisplayEXT(EGL_PLATFORM_SURFACELESS_MESA, NULL, NULL);

		if (mEglDisplay == EGL_NO_DISPLAY) {
			print_error("Could not get Egl Display with eglGetPlatformDisplayEXT !! ");
		}

		if (eglInitialize(mEglDisplay, &mMajorVersion, &mMinorVersion) != EGL_TRUE) {
			print_error("Could not initialize Egl Display!! ");
			return FAILED;
		}
    }

    EGLint config_attribs[] = {
            EGL_SURFACE_TYPE, EGL_PBUFFER_BIT,
            EGL_RED_SIZE, 8,
            EGL_GREEN_SIZE, 8,
            EGL_BLUE_SIZE, 8,
            EGL_ALPHA_SIZE, 8,
            EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
            EGL_NONE,
    };

    EGLint context_attribs[] = {
            EGL_CONTEXT_CLIENT_VERSION, 2,
            EGL_CONTEXT_FLAGS_KHR, EGL_CONTEXT_OPENGL_DEBUG_BIT_KHR,
            EGL_NONE,
    };
    
    // EGLint config_attribs[] = {
    //     EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
    //     EGL_RED_SIZE, 8,
    //     EGL_GREEN_SIZE, 8,
    //     EGL_BLUE_SIZE, 8,
    //     EGL_RENDERABLE_TYPE, EGL_OPENGL_BIT,
    //     EGL_NONE
    // };

    // static const EGLint context_attribs[] = {
    //     EGL_CONTEXT_CLIENT_VERSION, 2,
    //     EGL_NONE
    // };



    EGLint numConfigs = 0;
	if (eglGetConfigs(mEglDisplay, nullptr, 0, &numConfigs) == EGL_FALSE) {
		print_error("Failed to get EGLConfig count");
		return FAILED;
	}

	if (eglChooseConfig(mEglDisplay, config_attribs, &mEglConfig, 1, &numConfigs) == EGL_FALSE) {
		print_error("Failed to get a valid EGLConfig ");
		return FAILED;
	}

	mEglContext =  eglCreateContext(mEglDisplay, mEglConfig, EGL_NO_CONTEXT, context_attribs);

	if (mEglContext == EGL_NO_CONTEXT) {
		print_error("Failed to get a valid EGLContext ");
		return FAILED;
	}

	return OK;
}

void EglContextWayland::window_resize(DisplayServer::WindowID p_window_id, int p_width, int p_height) {
	print_line("EglContextWayland::window_resize");
	_windows[p_window_id].width = p_width;
	_windows[p_window_id].height = p_height;
}


Error EglContextWayland::window_create(DisplayServer::WindowID p_window_id, DisplayServer::VSyncMode p_vsync_mode, 
	                                   struct wl_display *p_display, struct wl_surface *p_surface, int p_width, int p_height) {


	wl_egl_window  *window = wl_egl_window_create(p_surface, p_width, p_height);
	if (window == EGL_NO_SURFACE) {
		print_error("Failed to create a valid wayland egl window");
		return FAILED;
	}

	// make sure vector is big enough...
	// we can mirror the external vector, it is simpler
	// to keep the IDs identical for fast lookup
	if (p_window_id >= (int)_windows.size()) {
		_windows.resize(p_window_id + 1);
	}

	WaylandWindow &win = _windows[p_window_id];
	win.in_use = true;
	win.window_id = p_window_id;
	win.width = p_width;
	win.height = p_height;
	win.wayland_window = window;

	win.egl_surface = eglCreateWindowSurface(mEglDisplay,
											mEglConfig,
											(EGLNativeWindowType)window, NULL);

	if (!eglMakeCurrent(mEglDisplay, win.egl_surface, win.egl_surface, mEglContext)) {
		print_error("Failed to make current context");
		return FAILED;
	}

	_current_window = &win;

	print_line(vformat("EglContextWayland::window_create window_id : %d  , width %d , height %d", p_window_id, p_width, p_height));
	return OK;
}

void EglContextWayland::window_destroy(DisplayServer::WindowID p_window_id) {
	WaylandWindow &win = _windows[p_window_id];
	win.in_use = false;

	if (_current_window == &win) {
		_current_window = nullptr;
	}
}

void EglContextWayland::swap_buffers() {

	if (!_current_window) {
		return;
	}
	if (!_current_window->in_use) {
		print_line("current window not in use!");
		return;
	}

	// only for debugging without drawing anythin
	glClearColor(Math::randf(), 0, 1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();

	print_line("EglContextWayland::swap_buffers");

	eglSwapBuffers(mEglDisplay, _current_window->egl_surface);
}

void EglContextWayland::make_current() {
	print_line("EglContextWayland::make_current");
	if (!_current_window) {
		return;
	}
	if (!_current_window->in_use) {
		print_line("current window not in use!");
		return;
	}
	eglMakeCurrent(mEglDisplay, _current_window->egl_surface, _current_window->egl_surface, mEglContext);
}

void EglContextWayland::release_current() {
	print_line("EglContextWayland::release_current");
	if (!_current_window) {
		return;
	}
	eglMakeCurrent(mEglDisplay, EGL_NO_SURFACE, EGL_NO_SURFACE, mEglContext);
}

void EglContextWayland::window_make_current(DisplayServer::WindowID p_window_id) {
	print_line("EglContextWayland::window_make_current");
	if (p_window_id == -1) {
		return;
	}

	WaylandWindow &win = _windows[p_window_id];
	if (!win.in_use) {
		return;
	}

	// noop
	if (&win == _current_window) {
		return;
	}

	eglMakeCurrent(mEglDisplay, win.egl_surface, win.egl_surface, mEglContext);

	_current_window = &win;
}

EglContextWayland::EglContextWayland(struct wl_display *display, EglContextWayland::Api api)
: mDisplay(display), mApi(api) 
{

}

EglContextWayland::~EglContextWayland() {
	print_line("EglContextWayland::~EglContextWayland");
}