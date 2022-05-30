#ifndef NATIVE_WINDOW_WAYLAND_H_
#define NATIVE_WINDOW_WAYLAND_H_

#include <wayland-egl.h>
#include "native_window.h"

class NativeWindowWayland : public NativeWindow {
 public:
  NativeWindowWayland(wl_display* display, wl_compositor* compositor, size_t width, size_t height);
  ~NativeWindowWayland();

  bool resize(size_t p_width, size_t p_height) override;

  wl_surface* surface() const { return surface_; }

 private:
  wl_surface* surface_{nullptr};
};

#endif //NATIVE_WINDOW_WAYLAND_H_