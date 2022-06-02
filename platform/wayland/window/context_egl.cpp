#include "context_egl.h"
#include "core/print_string.h"

ContextEgl::ContextEgl(NativeWindow* native_window) {
    display_ = eglGetDisplay(native_window->display());
    if (display_ == EGL_NO_DISPLAY) {
      print_line("Failed to get the EGL display: ");
      return;
    }
    if (eglInitialize(display_, nullptr, nullptr) != EGL_TRUE) {
      print_line("Failed to initialize the EGL display: ");
      return;
    }
    if (eglBindAPI(EGL_OPENGL_ES_API) != EGL_TRUE) {
      print_line("Failed to bind EGL API: ");
    }

    EGLint config_count = 0;
    const EGLint config_attribs[] = {
        EGL_SURFACE_TYPE,    EGL_WINDOW_BIT,
        EGL_RENDERABLE_TYPE, EGL_OPENGL_ES2_BIT,
        EGL_RED_SIZE,        8,
        EGL_GREEN_SIZE,      8,
        EGL_BLUE_SIZE,       8,
        EGL_ALPHA_SIZE,      8,
        EGL_DEPTH_SIZE,      0,
        EGL_STENCIL_SIZE,    0,
        EGL_NONE
    };

    if (eglChooseConfig(display_, config_attribs, &config_, 1, &config_count) != EGL_TRUE) {
        print_line("Failed to choose EGL surface config: ");
        return;
    }

    if (config_count == 0 || config_ == nullptr) {
        print_line("No matching configs: ");
        return;
    }

    const EGLint context_attribs[] = {EGL_CONTEXT_CLIENT_VERSION, 2, EGL_NONE};
    
    context_ = eglCreateContext(display_, config_, EGL_NO_CONTEXT, context_attribs);

    if (context_ == EGL_NO_CONTEXT) {
        print_line("Failed to create an onscreen context: ");
        return;
    }

    const EGLint surface_attribs[] = {EGL_NONE};
    surface_ = eglCreateWindowSurface(display_, config_, native_window->window(), surface_attribs);

    if (eglMakeCurrent(display_, surface_, surface_, context_) != EGL_TRUE) {
        print_line("Failed to make the EGL context current: ");
    }
}

void ContextEgl::make_current() {
    if (eglMakeCurrent(display_, surface_, surface_, context_) != EGL_TRUE) {
        print_line("Failed to make the EGL context current: ");
    }
}

void ContextEgl::release_current() {
    if (eglMakeCurrent(display_, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT) != EGL_TRUE) {
        print_line("Failed to release the current EGL context: ");
    }
}

void ContextEgl::swap_buffers() {
  if (eglSwapBuffers(display_, surface_) != EGL_TRUE) {
    print_line("Failed to swap the EGL buffer: ");
  }
}