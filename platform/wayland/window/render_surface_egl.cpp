#include "render_surface_egl.h"
#include "core/print_string.h"

#include <EGL/egl.h>

class EnvironmentEgl {
public:
    EnvironmentEgl(EGLNativeDisplayType native_display)
    : display_(EGL_NO_DISPLAY) {
        display_ = eglGetDisplay(native_display);
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
            return;
        }
        valid_ = true;
  }

    ~EnvironmentEgl() {
        if (display_ != EGL_NO_DISPLAY) {
            if (eglTerminate(display_) != EGL_TRUE) {
                print_line("Failed to terminate the EGL display:");
            }
            display_ = EGL_NO_DISPLAY;
        }
    }

  bool valid() const { return valid_; }

  EGLDisplay display() const { return display_; }

 protected:
  EGLDisplay display_;
  bool       valid_{false};
};


class SurfaceEgl {
 public:
    SurfaceEgl(EGLSurface surface, EGLDisplay display, EGLContext context)
    : display_(display),
      surface_(surface),
      context_(context) {

    }

    ~SurfaceEgl() {
        if (surface_ != EGL_NO_SURFACE) {
            if (eglDestroySurface(display_, surface_) != EGL_TRUE) {
                print_line("Failed to destory surface: ");
            }
            surface_ = EGL_NO_SURFACE;
        }
    }

    bool valid() const {
        return surface_ != EGL_NO_SURFACE;
    }

    void make_current() const {
        if (eglMakeCurrent(display_, surface_, surface_, context_) != EGL_TRUE) {
            print_line("Failed to make the EGL context current: ");
        }
    }

    void swap_buffers() const {
        if (eglSwapBuffers(display_, surface_) != EGL_TRUE) {
            print_line("Failed to swap the EGL buffer: ");
        }    
    }

 private:
    EGLDisplay display_;
    EGLSurface surface_;
    EGLContext context_;
};

class ContextEgl {
 public:
    ContextEgl(EGLDisplay p_display, EGLint egl_surface_type = EGL_WINDOW_BIT) {
        display_ = p_display;

        EGLint config_count = 0;
        const EGLint config_attribs[] = {
            EGL_SURFACE_TYPE,    egl_surface_type,
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
    }
    std::unique_ptr<SurfaceEgl> create_onscreen_surface(NativeWindow* native_window) {
        const EGLint surface_attribs[] = {EGL_NONE};
        EGLSurface surface = eglCreateWindowSurface(display_, config_, native_window->window(), surface_attribs);

        if (eglMakeCurrent(display_, surface, surface, context_) != EGL_TRUE) {
            print_line("Failed to make the EGL context current: ");
        }

        return std::make_unique<SurfaceEgl>(surface, display_, context_);
    }

    void* gl_proc_resolver(const char* name) const {
        auto address = eglGetProcAddress(name);
        if (!address) {
            print_line("Failed eglGetProcAddress: ");
            return nullptr;
        }
        return reinterpret_cast<void*>(address);
    }

    void release_current() const {
        if (eglGetCurrentContext() != context_) {
            return;
        }
        if (eglMakeCurrent(display_, EGL_NO_SURFACE, EGL_NO_SURFACE, EGL_NO_CONTEXT) != EGL_TRUE) {
            print_line("Failed to release the current EGL context: ");
        }
    }
    ~ContextEgl() = default;
 private:
    EGLDisplay display_;
    EGLConfig  config_;
    EGLContext context_;
};

class RenderSurfaceEgl::Impl {
public:
    std::unique_ptr<EnvironmentEgl> env_egl_;
    std::unique_ptr<SurfaceEgl>     onscreen_surface_;
    std::unique_ptr<ContextEgl>     context_;
};

RenderSurfaceEgl::RenderSurfaceEgl()
:pd(std::make_unique<RenderSurfaceEgl::Impl>()) {

}

RenderSurfaceEgl::~RenderSurfaceEgl() {
    // destroy onscreen surface
    pd->onscreen_surface_ = nullptr;
    // destroy context
    pd->context_ = nullptr;
    // terminate egl.
    pd->env_egl_ = nullptr;
}

void RenderSurfaceEgl::set_native_window(NativeWindow *native_window) {
    pd->env_egl_ = std::make_unique<EnvironmentEgl>(native_window->display());
    pd->context_ = std::make_unique<ContextEgl>(pd->env_egl_->display());
    pd->onscreen_surface_ = pd->context_->create_onscreen_surface(native_window);
}

void RenderSurfaceEgl::make_current() {
    pd->onscreen_surface_->make_current();
}

void RenderSurfaceEgl::release_current() {
    pd->context_->release_current();
}

void RenderSurfaceEgl::swap_buffers() {
    pd->onscreen_surface_->swap_buffers();
}

static void* _proc_resolver(const char* name) {
    auto address = eglGetProcAddress(name);
    if (!address) {
        return nullptr;
    }
    return reinterpret_cast<void*>(address);
}

glProcResolver RenderSurfaceEgl::gl_proc_resolver() {
    return _proc_resolver;
}