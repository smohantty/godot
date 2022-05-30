#ifndef NATIVE_WINDOW_H_
#define NATIVE_WINDOW_H_

#include <EGL/egl.h>
class NativeWindow {
 public:
  NativeWindow() = default;
  virtual ~NativeWindow() = default;

  bool valid() const { return valid_; };

  EGLNativeWindowType window() const { return window_; }

  EGLNativeDisplayType display() const {return display_;}


  int32_t width() const {
    if (!valid_) {
      return -1;
    }
    return width_;
  }

  int32_t height() const {
    if (!valid_) {
      return -1;
    }
    return height_;
  }

  virtual bool resize(size_t p_width, size_t p_height) = 0;

 protected:
  EGLNativeWindowType window_;
  EGLNativeDisplayType display_;
  int32_t width_;
  int32_t height_;
  bool valid_{false};
};

#endif //NATIVE_WINDOW_H_