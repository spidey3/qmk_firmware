// Copyright 2022 Joshua Diamond josh@windowoffire.com (@spidey3)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "spidey3.h"

#if defined(OS_DETECTION_ENABLE)
#    include "os_detection.h"

uint8_t host_os_to_uc_mode(os_variant_t os) {
    switch (os) {
    case OS_LINUX:
        dprintln("host os: linux");
        return UNICODE_MODE_LINUX;
    case OS_WINDOWS:
        dprintln("host os: windows");
        return UNICODE_MODE_WINCOMPOSE;
    case OS_IOS:
        dprintln("host os: ios");
        return UNICODE_MODE_MACOS;
    case OS_MACOS:
        dprintln("host os: macos");
        return UNICODE_MODE_MACOS;
    default:
        dprintln("host os: unrecognized");
        return 0xFF;
    }
}

uint32_t detect_os(uint32_t trigger_time, void *cb_arg) {
    os_variant_t os = detected_host_os();
    uint8_t uc_mode = host_os_to_uc_mode(os);
    if (uc_mode != 0xFF && uc_mode != get_unicode_input_mode())
        set_unicode_input_mode(uc_mode);
    return 0;
}
#endif

void keyboard_post_init_user(void) {
#if defined(CONSOLE_ENABLE) && !defined(NO_DEBUG)
    // Defer reporting the version until console is operational
    if (debug_enable) {
        uint32_t _rv(uint32_t trigger_time, void *cb_arg) {
            report_version();
            return 0;
        }
        defer_exec(3000, _rv, NULL);
    }
#endif

#if defined(OS_DETECTION_ENABLE)
    defer_exec(2800, detect_os, NULL);
#endif

#ifdef RGBLIGHT_ENABLE
    keyboard_post_init_user_rgb();
#endif
}

void eeconfig_init_user(void) {
    set_single_persistent_default_layer(_BASE);
#ifdef UNICODEMAP_ENABLE
    eeconfig_init_user_unicode();
#endif
}

#ifdef RGBLIGHT_ENABLE
void shutdown_user(void) {
    shutdown_user_rgb();
}
#endif

#if defined(OS_DETECTION_ENABLE)
void suspend_wakeup_init_user(void) {
    defer_exec(2800, detect_os, NULL);
}
#endif
