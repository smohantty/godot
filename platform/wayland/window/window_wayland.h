#ifndef WINDOW_WAYLAND_H_
#define WINDOW_WAYLAND_H_

#include <poll.h>
#include <wayland-client.h>
#include <wayland-cursor.h>

#include "window_bindings.h"
#include "xdg_shell.gen.h"
#include "native_window_wayland.h"
#include "context_egl.h"
#include "core/os/thread.h"

struct WindowProperties {
    int  width;
    int  height;
    bool fullscreen{false};
    bool use_window_decoration{false};
    bool use_mouse_cursor{true};
};

class WindowWayland : public WindowBindingHandler {
public:
    WindowWayland(WindowProperties p_properties);
    ~WindowWayland();
    virtual bool create_render_surface(int width, int height);
    virtual void destroy_render_surface();
    RenderSurfaceTarget* get_render_surface_target() const;

private:
    struct CursorInfo {
        String cursor_name;
        uint32_t serial;
        wl_pointer* pointer;
    };
    
    struct WaylandEventPoll {
		Mutex mutex;
		wl_display *display{nullptr};
        SafeFlag events_thread_done;
    };

    WindowBindingHandlerDelegate* binding_handler_delegate_{nullptr};

    void wl_registry_add(wl_registry* wl_registry, uint32_t name,
                         const char* interface, uint32_t version);
    void wl_registry_remove(wl_registry* wl_registry, uint32_t name);

    static void _poll_events_thread(void *p_data);

    NativeWindowWayland  *native_window_;
    RenderSurfaceTarget  *render_surface_;
    ContextEgl           *context_egl;

    Thread                events_thread_;
    WaylandEventPoll      wayland_event_poll_;        

    //decoration
    bool    restore_window_required_{false};
    int32_t restore_window_width_;
    int32_t restore_window_height_;

    static const wl_registry_listener  kWlRegistryListener;
    static const xdg_wm_base_listener  kXdgWmBaseListener;
    static const xdg_surface_listener  kXdgSurfaceListener;
    static const xdg_toplevel_listener kXdgToplevelListener;
    static const wl_seat_listener      kWlSeatListener;
    static const wl_pointer_listener   kWlPointerListener;
    static const wl_touch_listener     kWlTouchListener;
    static const wl_keyboard_listener  kWlKeyboardListener;
    static const wl_output_listener    kWlOutputListener;

    wl_display*    wl_display_{nullptr};
    wl_registry*   wl_registry_{nullptr};
    wl_compositor* wl_compositor_{nullptr};
    wl_output*     wl_output_{nullptr};
    wl_shm*        wl_shm_{nullptr};
    wl_seat*       wl_seat_{nullptr};
    wl_pointer*    wl_pointer_{nullptr};
    wl_touch*      wl_touch_{nullptr};
    wl_keyboard*   wl_keyboard_{nullptr};

    xdg_wm_base*   xdg_wm_base_;
    xdg_surface*   xdg_surface_;
    xdg_toplevel*  xdg_toplevel_;

    wl_surface*      wl_cursor_surface_{nullptr};
    wl_cursor_theme* wl_cursor_theme_{nullptr};

    wl_surface* wl_current_surface_;
    uint32_t    serial_;

    CursorInfo cursor_info_;

    WindowProperties  window_properties_;
    double   pointer_x_ {0};
    double   pointer_y_{0};
    uint16_t current_rotation_{0};
    double current_scale_{1};
    int32_t frame_rate_{60000};
    bool display_valid_{false};
    bool running_{false};
    bool maximised_{false};
};

#endif //WINDOW_WAYLAND_H_