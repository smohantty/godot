#ifndef RENDER_SURFACE_EGL_H_
#define RENDER_SURFACE_EGL_H_

#include <memory>

#include "window_bindings.h"
#include "native_window.h"

class RenderSurfaceEgl: public RenderSurface {
public:
    RenderSurfaceEgl();
    ~RenderSurfaceEgl();
    void  set_native_window(NativeWindow* window);
    virtual void  make_current();
    virtual void  release_current();
    virtual void  swap_buffers();
    virtual void* gl_proc_resolver(const char* name);
private:
    class Impl;
    std::unique_ptr<RenderSurfaceEgl::Impl> pd;
};

#endif //RENDER_SURFACE_EGL_H_