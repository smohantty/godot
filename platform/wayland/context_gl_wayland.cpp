/*************************************************************************/
/*  context_gl_wayland.cpp                                                   */
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

#include "context_gl_wayland.h"

#ifdef WAYLAND_ENABLED
#if defined(OPENGL_ENABLED)
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include <wayland-egl.h>
#include <EGL/egl.h>

struct Wayland_Egl_Data {
	wl_egl_window  *egl_window{nullptr};
	EGLDisplay      egl_display{EGL_NO_DISPLAY};
	EGLSurface      egl_surface{EGL_NO_SURFACE};
	EGLContext      egl_context{EGL_NO_CONTEXT};
	EGLConfig       egl_config;

	Error init(wl_display* display) {
		EGLint config_attribs[] = {
			EGL_SURFACE_TYPE, EGL_WINDOW_BIT,
			EGL_RED_SIZE, 8,
			EGL_GREEN_SIZE, 8,
			EGL_BLUE_SIZE, 8,
			EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
			EGL_NONE
		};

		static const EGLint context_attribs[] = {
			EGL_CONTEXT_CLIENT_VERSION, 2,
			EGL_NONE
		};


		egl_display = eglGetDisplay((EGLNativeDisplayType) display);

		if (egl_display == EGL_NO_DISPLAY) {
			print_line("eglGetDisplay Failed!!");
			return FAILED;
		}
		int major , minor;
		if (eglInitialize(egl_display, &major, &minor) != EGL_TRUE) {
			print_line("eglGetDisplay Failed!!");
			return FAILED;
		}

		EGLint config_count = 0;
		eglGetConfigs(egl_display, NULL, 0, &config_count);
		if (config_count == 0) {
			print_line("eglGetConfigs Failed!!");
			return FAILED;
		}

		eglChooseConfig(egl_display, config_attribs, &egl_config, 1, &config_count);

		egl_context =  eglCreateContext(egl_display, egl_config, EGL_NO_CONTEXT, context_attribs);

		if (egl_context == EGL_NO_CONTEXT) {
			print_line("eglCreateContext Failed!!");
			return FAILED;
		}	
		return OK;
	}

	void create_surface() {
		egl_surface = eglCreateWindowSurface(egl_display, egl_config, (EGLNativeWindowType)egl_window, nullptr);

		if (!eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context)) {
			print_line("eglMakeCurrent Failed!! ");
		}
	}

	void swap_buffers() {
		if (!eglSwapBuffers(egl_display, egl_surface)) {
			print_line("eglSwapBuffers Failed!! ");
		}
	}

	void make_current() {
		eglMakeCurrent(egl_display, egl_surface, egl_surface, egl_context);
	}

	void release_current() {
		eglMakeCurrent(egl_display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
	}

	void cleanup() {
		eglMakeCurrent(egl_display, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT);
		eglDestroyContext(egl_display, egl_context);
		eglTerminate(egl_display);
		//TODO destroy the egl_window
	}
};

struct ContextGL_Wayland_Private {
	OS::VideoMode default_video_mode;
	//::Colormap x11_colormap;
	//::Display *x11_display;
	//::Window &x11_window;
	bool double_buffer;
	bool direct_render;
	bool use_vsync;
	ContextGL_Wayland::ContextType context_type;
	int window_width{0};
	int window_height{0};
	Wayland_Egl_Data  wayland_egl;
};

void ContextGL_Wayland::release_current() {
	pd->wayland_egl.release_current();
}

void ContextGL_Wayland::make_current() {
	pd->wayland_egl.make_current();
}

void ContextGL_Wayland::swap_buffers() {
	pd->wayland_egl.swap_buffers();
	//glXSwapBuffers(x11_display, x11_window);
}


Error ContextGL_Wayland::initialize() {
	//const char *extensions = glXQueryExtensionsString(x11_display, DefaultScreen(x11_display));

	// GLXCREATECONTEXTATTRIBSARBPROC glXCreateContextAttribsARB = (GLXCREATECONTEXTATTRIBSARBPROC)glXGetProcAddress((const GLubyte *)"glXCreateContextAttribsARB");

	// ERR_FAIL_COND_V(!glXCreateContextAttribsARB, ERR_UNCONFIGURED);

	// static int visual_attribs[] = {
	// 	GLX_RENDER_TYPE, GLX_RGBA_BIT,
	// 	GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
	// 	GLX_DOUBLEBUFFER, true,
	// 	GLX_RED_SIZE, 1,
	// 	GLX_GREEN_SIZE, 1,
	// 	GLX_BLUE_SIZE, 1,
	// 	GLX_DEPTH_SIZE, 24,
	// 	None
	// };

	// static int visual_attribs_layered[] = {
	// 	GLX_RENDER_TYPE, GLX_RGBA_BIT,
	// 	GLX_DRAWABLE_TYPE, GLX_WINDOW_BIT,
	// 	GLX_DOUBLEBUFFER, true,
	// 	GLX_RED_SIZE, 8,
	// 	GLX_GREEN_SIZE, 8,
	// 	GLX_BLUE_SIZE, 8,
	// 	GLX_ALPHA_SIZE, 8,
	// 	GLX_DEPTH_SIZE, 24,
	// 	None
	// };

	// int fbcount;
	// GLXFBConfig fbconfig = nullptr;
	// XVisualInfo *vi = nullptr;

	// XSetWindowAttributes swa;
	// swa.event_mask = StructureNotifyMask;
	// swa.border_pixel = 0;
	// unsigned long valuemask = CWBorderPixel | CWColormap | CWEventMask;

	// if (OS::get_singleton()->is_layered_allowed()) {
	// 	GLXFBConfig *fbc = glXChooseFBConfig(x11_display, DefaultScreen(x11_display), visual_attribs_layered, &fbcount);
	// 	ERR_FAIL_COND_V(!fbc, ERR_UNCONFIGURED);

	// 	for (int i = 0; i < fbcount; i++) {
	// 		vi = (XVisualInfo *)glXGetVisualFromFBConfig(x11_display, fbc[i]);
	// 		if (!vi) {
	// 			continue;
	// 		}

	// 		XRenderPictFormat *pict_format = XRenderFindVisualFormat(x11_display, vi->visual);
	// 		if (!pict_format) {
	// 			XFree(vi);
	// 			vi = nullptr;
	// 			continue;
	// 		}

	// 		fbconfig = fbc[i];
	// 		if (pict_format->direct.alphaMask > 0) {
	// 			break;
	// 		}
	// 	}
	// 	XFree(fbc);
	// 	ERR_FAIL_COND_V(!fbconfig, ERR_UNCONFIGURED);

	// 	swa.background_pixmap = None;
	// 	swa.background_pixel = 0;
	// 	swa.border_pixmap = None;
	// 	valuemask |= CWBackPixel;

	// } else {
	// 	GLXFBConfig *fbc = glXChooseFBConfig(x11_display, DefaultScreen(x11_display), visual_attribs, &fbcount);
	// 	ERR_FAIL_COND_V(!fbc, ERR_UNCONFIGURED);

	// 	vi = glXGetVisualFromFBConfig(x11_display, fbc[0]);

	// 	fbconfig = fbc[0];
	// 	XFree(fbc);
	// }

	// int (*oldHandler)(Display *, XErrorEvent *) = XSetErrorHandler(&ctxErrorHandler);

	// switch (context_type) {
	// 	case OLDSTYLE: {
	// 		p->glx_context = glXCreateContext(x11_display, vi, nullptr, GL_TRUE);
	// 		ERR_FAIL_COND_V(!p->glx_context, ERR_UNCONFIGURED);
	// 	} break;
	// 	case GLES_2_0_COMPATIBLE: {
	// 		p->glx_context = glXCreateNewContext(x11_display, fbconfig, GLX_RGBA_TYPE, nullptr, true);
	// 		ERR_FAIL_COND_V(!p->glx_context, ERR_UNCONFIGURED);
	// 	} break;
	// 	case GLES_3_0_COMPATIBLE: {
	// 		static int context_attribs[] = {
	// 			GLX_CONTEXT_MAJOR_VERSION_ARB, 3,
	// 			GLX_CONTEXT_MINOR_VERSION_ARB, 3,
	// 			GLX_CONTEXT_PROFILE_MASK_ARB, GLX_CONTEXT_CORE_PROFILE_BIT_ARB,
	// 			GLX_CONTEXT_FLAGS_ARB, GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB /*|GLX_CONTEXT_DEBUG_BIT_ARB*/,
	// 			None
	// 		};

	// 		p->glx_context = glXCreateContextAttribsARB(x11_display, fbconfig, nullptr, true, context_attribs);
	// 		ERR_FAIL_COND_V(ctxErrorOccurred || !p->glx_context, ERR_UNCONFIGURED);
	// 	} break;
	// }

	// swa.colormap = XCreateColormap(x11_display, RootWindow(x11_display, vi->screen), vi->visual, AllocNone);
	// x11_window = XCreateWindow(x11_display, RootWindow(x11_display, vi->screen), 0, 0, OS::get_singleton()->get_video_mode().width, OS::get_singleton()->get_video_mode().height, 0, vi->depth, InputOutput, vi->visual, valuemask, &swa);
	// XStoreName(x11_display, x11_window, "Godot Engine");

	// ERR_FAIL_COND_V(!x11_window, ERR_UNCONFIGURED);
	// set_class_hint(x11_display, x11_window);

	// if (!OS::get_singleton()->is_no_window_mode_enabled()) {
	// 	XMapWindow(x11_display, x11_window);
	// }

	// XSync(x11_display, False);
	// XSetErrorHandler(oldHandler);

	// glXMakeCurrent(x11_display, x11_window, p->glx_context);

	// XFree(vi);
	//TODO
	return OK;
}

int ContextGL_Wayland::get_window_width() {
	return pd->window_width;
}

int ContextGL_Wayland::get_window_height() {
	return  pd->window_height;
}

void *ContextGL_Wayland::get_gl_context() {
	//return pd->gl_context;
	//TODO
	return nullptr;

}

void ContextGL_Wayland::set_use_vsync(bool p_use) {
	//int val = p_use ? 1 : 0;
	//TODO
	pd->use_vsync = p_use;
}
bool ContextGL_Wayland::is_using_vsync() const {
	return pd->use_vsync;
}

ContextGL_Wayland::ContextGL_Wayland(const OS::VideoMode &p_default_video_mode, ContextType p_context_type) {
	pd =  memnew(ContextGL_Wayland_Private);
	pd->default_video_mode = p_default_video_mode;
	pd->context_type = p_context_type;

	pd->double_buffer = false;
	pd->direct_render = false;
	pd->use_vsync = false;
}

ContextGL_Wayland::~ContextGL_Wayland() {
	release_current();
	//glXDestroyContext(x11_display, p->glx_context);
	memdelete(pd);
}

#endif
#endif
