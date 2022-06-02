#include "window_wayland.h"
#include "core/print_string.h"

const wl_registry_listener WindowWayland::kWlRegistryListener = {
    .global =
        [](void* data,
           wl_registry* wl_registry,
           uint32_t name,
           const char* interface,
           uint32_t version) {
          auto self = reinterpret_cast<WindowWayland*>(data);
          self->wl_registry_add(wl_registry, name, interface, version);
        },
    .global_remove =
        [](void* data, wl_registry* wl_registry, uint32_t name) {
          auto self = reinterpret_cast<WindowWayland*>(data);
          self->wl_registry_remove(wl_registry, name);
        },
};

const xdg_wm_base_listener WindowWayland::kXdgWmBaseListener = {
    .ping = [](void* data,
               xdg_wm_base* xdg_wm_base,
               uint32_t serial) { xdg_wm_base_pong(xdg_wm_base, serial); },
};

const xdg_surface_listener WindowWayland::kXdgSurfaceListener = {
    .configure =
        [](void* data, xdg_surface* xdg_surface, uint32_t serial) {
          auto self = reinterpret_cast<WindowWayland*>(data);
          constexpr int32_t x = 0;
          int32_t y = 0;
          if (self->window_properties_.use_window_decoration) {
            // TODO: Moves the window to the bottom to show the window
            // decorations, but the bottom area of the window will be hidden
            // because of this shifting.
            //y = -self->window_decorations_->Height();
          }
          xdg_surface_set_window_geometry(xdg_surface, x, y,
                                          self->window_properties_.width,
                                          self->window_properties_.height);
          xdg_surface_ack_configure(xdg_surface, serial);
        },
};

const xdg_toplevel_listener WindowWayland::kXdgToplevelListener = {
    .configure =
        [](void* data,
           xdg_toplevel* xdg_toplevel,
           int32_t width,
           int32_t height,
           wl_array* states) {
          auto is_maximized = false;
          auto is_resizing = false;
          uint32_t* state = static_cast<uint32_t*>(states->data);
          for (size_t i = 0; i < states->size; i++) {
            switch (*state) {
              case XDG_TOPLEVEL_STATE_MAXIMIZED:
                is_maximized = true;
                break;
              case XDG_TOPLEVEL_STATE_RESIZING:
                is_resizing = true;
                break;
              case XDG_TOPLEVEL_STATE_ACTIVATED:
              case XDG_TOPLEVEL_STATE_FULLSCREEN:
              default:
                break;
            }
            state++;
          }

          auto self = reinterpret_cast<WindowWayland*>(data);
          if (self->current_rotation_ == 90 || self->current_rotation_ == 270) {
            std::swap(width, height);
          }

          int32_t next_width = 0;
          int32_t next_height = 0;
          if (is_maximized || is_resizing) {
            next_width = width;
            next_height = height;
          } else if (self->restore_window_required_) {
            self->restore_window_required_ = false;
            next_width = self->restore_window_width_;
            next_height = self->restore_window_height_;
          }

          if (!next_width || !next_height ||
              (self->window_properties_.width == next_width &&
               self->window_properties_.height == next_height)) {
            return;
          }

          self->window_properties_.width = next_width;
          self->window_properties_.height = next_height;
        //   if (self->window_decorations_) {
        //     self->window_decorations_->resize(next_width, next_height);
        //   }
          if (self->binding_handler_delegate_) {
            self->binding_handler_delegate_->on_window_size_changed(next_width,
                                                                    next_height);
          }
        },
    .close =
        [](void* data, xdg_toplevel* xdg_toplevel) {
          auto self = reinterpret_cast<WindowWayland*>(data);
          self->running_ = false;
        }
};

const wl_output_listener WindowWayland::kWlOutputListener = {
    .geometry = [](void* data,
                   wl_output* wl_output,
                   int32_t x,
                   int32_t y,
                   int32_t physical_width,
                   int32_t physical_height,
                   int32_t subpixel,
                   const char* make,
                   const char* model,
                   int32_t output_transform) -> void {},
    .mode = [](void* data,
               wl_output* wl_output,
               uint32_t flags,
               int32_t width,
               int32_t height,
               int32_t refresh) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      if (flags & WL_OUTPUT_MODE_CURRENT) {
        if (self->current_rotation_ == 90 || self->current_rotation_ == 270) {
          std::swap(width, height);
        }

        print_line(vformat("Display output info: width = %d , height = %d , refresh = %d ", width, height, refresh));
        // Some composers send 0 for the refresh value.
        if (refresh != 0) {
          self->frame_rate_ = refresh;
        }

        if (self->window_properties_.fullscreen) {
          self->window_properties_.width = width;
          self->window_properties_.height = height;

        //   if (self->window_decorations_) {
        //     self->window_decorations_->Resize(width, height);
        //   }

          if (self->binding_handler_delegate_) {
            self->binding_handler_delegate_->on_window_size_changed(width, height);
          }
        }
      }
    },
    .done = [](void* data, wl_output* wl_output) -> void {},
    .scale = [](void* data, wl_output* wl_output, int32_t scale) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->current_scale_ = scale;
    },
};

const wl_seat_listener WindowWayland::kWlSeatListener = {
    .capabilities = [](void* data, wl_seat* seat, uint32_t caps) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);

      if ((caps & WL_SEAT_CAPABILITY_POINTER) && !self->wl_pointer_) {
        self->wl_pointer_ = wl_seat_get_pointer(seat);
        wl_pointer_add_listener(self->wl_pointer_, &kWlPointerListener, self);
      } else if (!(caps & WL_SEAT_CAPABILITY_POINTER) && self->wl_pointer_) {
        wl_pointer_destroy(self->wl_pointer_);
        self->wl_pointer_ = nullptr;
      }

      if ((caps & WL_SEAT_CAPABILITY_TOUCH) && !self->wl_touch_) {
        self->wl_touch_ = wl_seat_get_touch(seat);
        wl_touch_add_listener(self->wl_touch_, &kWlTouchListener, self);
      } else if (!(caps & WL_SEAT_CAPABILITY_TOUCH) && self->wl_touch_) {
        wl_touch_destroy(self->wl_touch_);
        self->wl_touch_ = nullptr;
      }

      if ((caps & WL_SEAT_CAPABILITY_KEYBOARD) && !self->wl_keyboard_) {
        self->wl_keyboard_ = wl_seat_get_keyboard(seat);
        wl_keyboard_add_listener(self->wl_keyboard_, &kWlKeyboardListener,
                                 self);
      } else if (!(caps & WL_SEAT_CAPABILITY_KEYBOARD) && self->wl_keyboard_) {
        wl_keyboard_destroy(self->wl_keyboard_);
        self->wl_keyboard_ = nullptr;
      }
    },
};

const wl_touch_listener WindowWayland::kWlTouchListener = {
    .down = [](void* data,
               wl_touch* wl_touch,
               uint32_t serial,
               uint32_t time,
               wl_surface* surface,
               int32_t id,
               wl_fixed_t surface_x,
               wl_fixed_t surface_y) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->serial_ = serial;
      if (self->binding_handler_delegate_) {
        double x = wl_fixed_to_double(surface_x);
        double y = wl_fixed_to_double(surface_y);
        self->binding_handler_delegate_->on_touch_down(time, id, x, y);
      }
    },
    .up = [](void* data,
             wl_touch* wl_touch,
             uint32_t serial,
             uint32_t time,
             int32_t id) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->serial_ = serial;
      if (self->binding_handler_delegate_) {
        self->binding_handler_delegate_->on_touch_up(time, id);
      }
    },
    .motion = [](void* data,
                 wl_touch* wl_touch,
                 uint32_t time,
                 int32_t id,
                 wl_fixed_t surface_x,
                 wl_fixed_t surface_y) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      if (self->binding_handler_delegate_) {
        double x = wl_fixed_to_double(surface_x);
        double y = wl_fixed_to_double(surface_y);
        self->binding_handler_delegate_->on_touch_motion(time, id, x, y);
      }
    },
    .frame = [](void* data, wl_touch* wl_touch) -> void {},
    .cancel = [](void* data, wl_touch* wl_touch) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      if (self->binding_handler_delegate_) {
        self->binding_handler_delegate_->on_touch_cancel();
      }
    },
};

const wl_pointer_listener WindowWayland::kWlPointerListener = {
    .enter = [](void* data,
                wl_pointer* wl_pointer,
                uint32_t serial,
                wl_surface* surface,
                wl_fixed_t surface_x,
                wl_fixed_t surface_y) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->wl_current_surface_ = surface;
      self->serial_ = serial;

      if (self->window_properties_.use_mouse_cursor) {
        self->cursor_info_.pointer = wl_pointer;
        self->cursor_info_.serial = serial;
      }

      if (self->binding_handler_delegate_) {
        double x = wl_fixed_to_double(surface_x);
        double y = wl_fixed_to_double(surface_y);
        self->binding_handler_delegate_->on_pointer_move(x, y);
        self->pointer_x_ = x;
        self->pointer_y_ = y;
      }
    },
    .leave = [](void* data,
                wl_pointer* pointer,
                uint32_t serial,
                wl_surface* surface) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->wl_current_surface_ = surface;
      self->serial_ = serial;

      if (self->binding_handler_delegate_) {
        self->binding_handler_delegate_->on_pointer_leave();
        self->pointer_x_ = -1;
        self->pointer_y_ = -1;
      }
    },
    .motion = [](void* data,
                 wl_pointer* pointer,
                 uint32_t time,
                 wl_fixed_t surface_x,
                 wl_fixed_t surface_y) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      if (self->binding_handler_delegate_) {
        double x = wl_fixed_to_double(surface_x);
        double y = wl_fixed_to_double(surface_y);
        self->binding_handler_delegate_->on_pointer_move(x, y);
        self->pointer_x_ = x;
        self->pointer_y_ = y;
      }
    },
    .button = [](void* data,
                 wl_pointer* pointer,
                 uint32_t serial,
                 uint32_t time,
                 uint32_t button,
                 uint32_t status) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->serial_ = serial;

    //   if (button == BTN_LEFT && status == WL_POINTER_BUTTON_STATE_PRESSED) {
    //     if (self->window_decorations_ &&
    //         self->window_decorations_->IsMatched(
    //             self->wl_current_surface_,
    //             WindowDecoration::DecorationType::TITLE_BAR)) {
    //       xdg_toplevel_move(self->xdg_toplevel_, self->wl_seat_, serial);
    //       return;
    //     }

    //     if (self->window_decorations_ &&
    //         self->window_decorations_->IsMatched(
    //             self->wl_current_surface_,
    //             WindowDecoration::DecorationType::CLOSE_BUTTON)) {
    //       self->running_ = false;
    //       return;
    //     }

    //     if (self->window_decorations_ &&
    //         self->window_decorations_->IsMatched(
    //             self->wl_current_surface_,
    //             WindowDecoration::DecorationType::MAXIMISE_BUTTON)) {
    //       if (self->maximised_) {
    //         xdg_toplevel_unset_maximized(self->xdg_toplevel_);

    //         // Requests to return to the original window size before maximizing.
    //         self->restore_window_required_ = true;
    //       } else {
    //         // Stores original window size.
    //         self->restore_window_width_ = self->view_properties_.width;
    //         self->restore_window_height_ = self->view_properties_.height;
    //         self->restore_window_required_ = false;

    //         xdg_toplevel_set_maximized(self->xdg_toplevel_);
    //       }
    //       self->maximised_ = !self->maximised_;
    //       return;
    //     }

    //     if (self->window_decorations_ &&
    //         self->window_decorations_->IsMatched(
    //             self->wl_current_surface_,
    //             flutter::WindowDecoration::DecorationType::MINIMISE_BUTTON)) {
    //       xdg_toplevel_set_minimized(self->xdg_toplevel_);
    //       return;
    //     }
    //   }

    //   if (self->binding_handler_delegate_) {
    //     MouseButton button_pressed = MouseButton::NONE;
    //     switch (button) {
    //       case BTN_LEFT:
    //         button_pressed = kFlutterPointerButtonMousePrimary;
    //         break;
    //       case BTN_RIGHT:
    //         button_pressed = kFlutterPointerButtonMouseSecondary;
    //         break;
    //       case BTN_MIDDLE:
    //         button_pressed = kFlutterPointerButtonMouseMiddle;
    //         break;
    //       case BTN_BACK:
    //         button_pressed = kFlutterPointerButtonMouseBack;
    //         break;
    //       case BTN_FORWARD:
    //         button_pressed = kFlutterPointerButtonMouseForward;
    //         break;
    //       default:
    //         print_line("Not expected button input: ");
    //         return;
    //     }

    //     if (status == WL_POINTER_BUTTON_STATE_PRESSED) {
    //       self->binding_handler_delegate_->on_pointer_down(
    //           self->pointer_x_, self->pointer_y_, button_pressed);
    //     } else {
    //       self->binding_handler_delegate_->on_pointer_up(
    //           self->pointer_x_, self->pointer_y_, button_pressed);
    //     }
    //   }
    },
    .axis = [](void* data,
               wl_pointer* wl_pointer,
               uint32_t time,
               uint32_t axis,
               wl_fixed_t value) -> void {
        auto self = reinterpret_cast<WindowWayland*>(data);
        if (self->binding_handler_delegate_) {
            // double delta = wl_fixed_to_double(value);
            // constexpr int32_t kScrollOffsetMultiplier = 20;
            // self->binding_handler_delegate_->on_scroll(
            //     self->pointer_x_, self->pointer_y_,
            //     axis == WL_POINTER_AXIS_VERTICAL_SCROLL ? 0 : delta,
            //     axis == WL_POINTER_AXIS_VERTICAL_SCROLL ? delta : 0,
            //     kScrollOffsetMultiplier);
        }
    },
};

const wl_keyboard_listener WindowWayland::kWlKeyboardListener = {
    .keymap = [](void* data,
                 wl_keyboard* wl_keyboard,
                 uint32_t format,
                 int fd,
                 uint32_t size) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      //assert(format == WL_KEYBOARD_KEYMAP_FORMAT_XKB_V1);
      if (self->binding_handler_delegate_) {
        self->binding_handler_delegate_->on_key_map(format, fd, size);
      }
    },
    .enter = [](void* data,
                wl_keyboard* wl_keyboard,
                uint32_t serial,
                wl_surface* surface,
                wl_array* keys) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->serial_ = serial;
    },
    .leave = [](void* data,
                wl_keyboard* wl_keyboard,
                uint32_t serial,
                wl_surface* surface) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->serial_ = serial;
    },
    .key = [](void* data,
              wl_keyboard* wl_keyboard,
              uint32_t serial,
              uint32_t time,
              uint32_t key,
              uint32_t state) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      self->serial_ = serial;
      if (self->binding_handler_delegate_) {
        self->binding_handler_delegate_->on_key(
            key, state == WL_KEYBOARD_KEY_STATE_PRESSED);
      }
    },
    .modifiers = [](void* data,
                    wl_keyboard* wl_keyboard,
                    uint32_t serial,
                    uint32_t mods_depressed,
                    uint32_t mods_latched,
                    uint32_t mods_locked,
                    uint32_t group) -> void {
      auto self = reinterpret_cast<WindowWayland*>(data);
      if (self->binding_handler_delegate_) {
        self->binding_handler_delegate_->on_key_modifiers(
            mods_depressed, mods_latched, mods_locked, group);
      }
    },
    .repeat_info = [](void* data, wl_keyboard* wl_keyboard, int rate, int delay)
        -> void {},
};


void WindowWayland::_poll_events_thread(void *p_wls) {
	WaylandEventPoll *event_data = (WaylandEventPoll *)p_wls;

	struct pollfd poll_fd;
	poll_fd.fd = wl_display_get_fd(event_data->display);
	poll_fd.events = POLLIN | POLLHUP;

	while (true) {
		// Empty the event queue while it's full.
		while (wl_display_prepare_read(event_data->display) != 0) {
			MutexLock mutex_lock(event_data->mutex);
			wl_display_dispatch_pending(event_data->display);
		}

		errno = 0;
		if (wl_display_flush(event_data->display) == -1) {
			if (errno != EAGAIN) {
				print_error(vformat("Error %d while flushing the Wayland display.", errno));
				event_data->events_thread_done.set();
			}
		}

		// Wait for the event file descriptor to have new data.
		poll(&poll_fd, 1, -1);

		if (event_data->events_thread_done.is_set()) {
			wl_display_cancel_read(event_data->display);
			break;
		}

		if (poll_fd.revents | POLLIN) {
			wl_display_read_events(event_data->display);
		} else {
			wl_display_cancel_read(event_data->display);
		}
	}
}


WindowWayland::WindowWayland(WindowProperties p_properties) {
    window_properties_ = p_properties;
    
    wl_display_ = wl_display_connect(nullptr);
    if (!wl_display_) {
        print_line("Failed to connect to the Wayland display.");
        return;
    }

    wl_registry_ = wl_display_get_registry(wl_display_);
    if (!wl_registry_) {
        print_line("Failed to get the wayland registry.");
        return;
    }

    wl_registry_add_listener(wl_registry_, &kWlRegistryListener, this);
    wl_display_dispatch(wl_display_);
    wl_display_roundtrip(wl_display_);

    display_valid_ = true;
    running_ = true;

    wayland_event_poll_.display = wl_display_;
    events_thread_.start(_poll_events_thread, &wayland_event_poll_);
}

WindowWayland::~WindowWayland() {

    wayland_event_poll_.events_thread_done.set();

    // Wait for any Wayland events to be handled and unblock the polling thread.
    wl_display_roundtrip(wayland_event_poll_.display);

    events_thread_.wait_to_finish();

    display_valid_ = false;
    running_ = false;
    if (wl_cursor_theme_) {
      wl_cursor_theme_destroy(wl_cursor_theme_);
      wl_cursor_theme_ = nullptr;
    }

    if (wl_pointer_) {
      wl_pointer_destroy(wl_pointer_);
      wl_pointer_ = nullptr;
    }

    if (wl_touch_) {
      wl_touch_destroy(wl_touch_);
      wl_touch_ = nullptr;
    }

    if (wl_keyboard_) {
      wl_keyboard_destroy(wl_keyboard_);
      wl_keyboard_ = nullptr;
    }

    if (wl_seat_) {
      wl_seat_destroy(wl_seat_);
      wl_seat_ = nullptr;
    }

    if (wl_output_) {
      wl_output_destroy(wl_output_);
      wl_output_ = nullptr;
    }

    if (wl_shm_) {
      wl_shm_destroy(wl_shm_);
      wl_shm_ = nullptr;
    }

    if (xdg_toplevel_) {
      xdg_toplevel_destroy(xdg_toplevel_);
      xdg_toplevel_ = nullptr;
    }

    if (xdg_wm_base_) {
      xdg_wm_base_destroy(xdg_wm_base_);
      xdg_wm_base_ = nullptr;
    }

    if (wl_compositor_) {
      wl_compositor_destroy(wl_compositor_);
      wl_compositor_ = nullptr;
    }

    // if (wl_subcompositor_) {
    //   wl_subcompositor_destroy(wl_subcompositor_);
    //   wl_subcompositor_ = nullptr;
    // }

    if (wl_registry_) {
      wl_registry_destroy(wl_registry_);
      wl_registry_ = nullptr;
    }

    if (wl_display_) {
      wl_display_flush(wl_display_);
      wl_display_disconnect(wl_display_);
      wl_display_ = nullptr;
    }  

}

void WindowWayland::wl_registry_add(wl_registry* wl_registry,
                                    uint32_t name,
                                    const char* interface,
                                    uint32_t version) {
    if (!strcmp(interface, wl_compositor_interface.name)) {
    wl_compositor_ = static_cast<decltype(wl_compositor_)>(
        wl_registry_bind(wl_registry, name, &wl_compositor_interface, 1));
    print_line("wl_compositor_interface");
    return;
    }

    if (!strcmp(interface, xdg_wm_base_interface.name)) {
        xdg_wm_base_ = static_cast<decltype(xdg_wm_base_)>(
            wl_registry_bind(wl_registry, name, &xdg_wm_base_interface, 1));
        xdg_wm_base_add_listener(xdg_wm_base_, &kXdgWmBaseListener, this);
        print_line("xdg_wm_base_interface");
        return;
    }

    if (!strcmp(interface, wl_seat_interface.name)) {
        wl_seat_ = static_cast<decltype(wl_seat_)>(
            wl_registry_bind(wl_registry, name, &wl_seat_interface, 1));
        wl_seat_add_listener(wl_seat_, &kWlSeatListener, this);
        print_line("wl_seat_interface");
        return;
    }

    if (!strcmp(interface, wl_output_interface.name)) {
        wl_output_ = static_cast<decltype(wl_output_)>(
            wl_registry_bind(wl_registry, name, &wl_output_interface, 1));
        wl_output_add_listener(wl_output_, &kWlOutputListener, this);
        print_line("wl_output_interface");
        return;
    }

    if (!strcmp(interface, wl_shm_interface.name)) {
        print_line("wl_shm_interface");
        if (window_properties_.use_mouse_cursor) {
            wl_shm_ = static_cast<decltype(wl_shm_)>(
                wl_registry_bind(wl_registry, name, &wl_shm_interface, 1));
            wl_cursor_theme_ = wl_cursor_theme_load(nullptr, 32, wl_shm_);
            if (!wl_cursor_theme_) {
                print_line("Failed to load cursor theme.");
                return;
            }
            // CreateSupportedWlCursorList();
        }
        return;
    }

}

void WindowWayland::wl_registry_remove(wl_registry* wl_registry, uint32_t name) {

}

bool WindowWayland::create_render_surface(int width, int height) {
    if (!display_valid_) {
      print_line("Wayland display is invalid.");
      return false;
    }

    if (!wl_compositor_) {
      print_line("Wl_compositor is invalid");
      return false;
    }

    if (!xdg_wm_base_) {
      print_line("Xdg-shell is invalid");
      return false;
    }

    if (window_properties_.fullscreen) {
      width = window_properties_.width;
      height = window_properties_.height;
    }

    print_line(vformat("create wayland surface : %d X %d ",width, height));

    native_window_ = memnew(NativeWindowWayland(wl_display_, wl_compositor_, width, height));

    xdg_surface_ = xdg_wm_base_get_xdg_surface(xdg_wm_base_, native_window_->surface());
  
    if (!xdg_surface_) {
        print_line("Failed to get the xdg surface.");
        return false;
    }

    xdg_surface_add_listener(xdg_surface_, &kXdgSurfaceListener, this);

    xdg_toplevel_ = xdg_surface_get_toplevel(xdg_surface_);
    xdg_toplevel_set_title(xdg_toplevel_, "Godot");
    xdg_toplevel_add_listener(xdg_toplevel_, &kXdgToplevelListener, this);
    wl_surface_commit(native_window_->surface());

    context_egl = memnew(ContextEgl(native_window_));

  return true;

}

void WindowWayland::destroy_render_surface() {
    // if (window_decorations_) {
    //   window_decorations_ = nullptr;
    // }
    // render_surface_ = nullptr;
    memdelete(native_window_);
    native_window_ = nullptr;

    if (xdg_surface_) {
      xdg_surface_destroy(xdg_surface_);
      xdg_surface_ = nullptr;
    }

    // if (wl_cursor_surface_) {
    //   wl_surface_destroy(wl_cursor_surface_);
    //   wl_cursor_surface_ = nullptr;
    // } 
}

RenderSurfaceTarget* WindowWayland::get_render_surface_target() const {
  return nullptr;
}

void WindowWayland::process_events() {
    MutexLock mutex_lock(wayland_event_poll_.mutex);

    int werror = wl_display_get_error(wl_display_);

    if (werror) {
      if (werror == EPROTO) {
        struct wl_interface *wl_interface = nullptr;
        uint32_t id = 0;

        int error_code = wl_display_get_protocol_error(wl_display_, (const struct wl_interface **)&wl_interface, &id);
        print_error(vformat("Wayland protocol error %d on interface %s@%d", error_code, wl_interface ? wl_interface->name : "unknown", id));
      } else {
        print_error(vformat("Wayland client error code %d", werror));
      }
    }
  // TODO process all the pending events.
  
}

void WindowWayland::make_current() {
  context_egl->make_current();
}

void WindowWayland::release_current() {
    context_egl->release_current();
}

void WindowWayland::swap_buffers() {
    context_egl->swap_buffers();
}

