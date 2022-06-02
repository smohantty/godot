#ifndef CONTEXT_EGL_H_
#define CONTEXT_EGL_H_

#include <EGL/egl.h>
#include "native_window.h"

class ContextEgl {
 public:
    ContextEgl(NativeWindow* window);
    ~ContextEgl();
    void make_current();
    void release_current();
    void swap_buffers();
 private:
    EGLDisplay display_;
    EGLConfig  config_;
    EGLContext context_;
    EGLSurface surface_;
};

#endif //CONTEXT_EGL_H_