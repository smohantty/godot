#ifndef WINDOW_BINDINGS_H_
#define WINDOW_BINDINGS_H_

#include <cstdint>
#include "core/os/input_event.h"

using glProcResolver = void* (*)(const char* name);
class RenderSurface {
public:
    virtual void  make_current() = 0;
    virtual void  release_current() = 0;
    virtual void  swap_buffers() = 0;
    virtual glProcResolver gl_proc_resolver() = 0;
};

class WindowBindingHandlerDelegate {
 public:
    virtual void on_window_size_changed(int width, int height) const = 0;
    virtual void on_pointer_move(double x, double y) = 0;
    virtual void on_pointer_down(double x, double y, ButtonList button) = 0;
    virtual void on_pointer_up(double x, double y, ButtonList button) = 0;
    virtual void on_pointer_leave() = 0;
    virtual void on_key(uint32_t key, bool pressed) = 0;
    virtual void on_key_map(uint32_t format, int fd, uint32_t size) = 0;
    virtual void on_key_modifiers(uint32_t mods_depressed, uint32_t mods_latched,
                                  uint32_t mods_locked, uint32_t group) = 0;

    virtual void on_touch_down(uint32_t time, int32_t id, double x, double y) = 0;
    virtual void on_touch_up(uint32_t time, int32_t id) = 0;
    virtual void on_touch_motion(uint32_t time, int32_t id, double x, double y) = 0;
    virtual void on_touch_cancel() = 0;

};

#endif //WINDOW_BINDINGS_H_