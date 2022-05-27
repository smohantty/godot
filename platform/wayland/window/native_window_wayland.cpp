#include "native_window_wayland.h"
#include "core/print_string.h"

NativeWindowWayland::NativeWindowWayland(wl_compositor* p_compositor, size_t p_width, size_t p_height) {
  surface_ = wl_compositor_create_surface(p_compositor);
  if (!surface_) {
    print_line("Failed to create the compositor surface.");
    return;
  }

  window_ = wl_egl_window_create(surface_, p_width, p_height);
  if (!window_) {
    print_line("Failed to create the EGL window.");
    return;
  }

  width_ = p_width;
  height_ = p_height;
  valid_ = true;
}

NativeWindowWayland::~NativeWindowWayland() {
  if (window_) {
    wl_egl_window_destroy(window_);
    window_ = nullptr;
  }

  if (surface_) {
    wl_surface_destroy(surface_);
    surface_ = nullptr;
  }
}

bool NativeWindowWayland::resize(const size_t p_width, const size_t p_height) {
  if (!valid_) {
    print_line("Failed to resize the window.");
    return false;
  }
  wl_egl_window_resize(window_, width_, height_, 0, 0);

  width_ = p_width;
  height_ = p_height;
  return true;
}