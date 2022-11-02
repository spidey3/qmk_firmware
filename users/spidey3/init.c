// Copyright 2022 Joshua Diamond josh@windowoffire.com (@spidey3)
// SPDX-License-Identifier: GPL-2.0-or-later

#include "spidey3.h"

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
