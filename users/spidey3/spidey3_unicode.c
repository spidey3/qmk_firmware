// Copyright 2022 Joshua Diamond josh@windowoffire.com (@spidey3)
// SPDX-License-Identifier: GPL-2.0-or-later


#include "spidey3_unicode.h"

const uint32_t PROGMEM unicode_map[] = {
    [BUL1]     = 0x2022,   // •
    [BUL2]     = 0x25E6,   // ◦
    [LARR]     = 0x2190,   // ←
    [RARR]     = 0x2192,   // →
    [ENDASH]   = 0x2013,   // –
    [EMDASH]   = 0x2014,   // —
    [SPIDER]   = 0x1F577,  // 🕷
    [SAD]      = 0x2639,   // ☹
    [MEH]      = 0x1F611,  // 😑
    [HAPPY]    = 0x1F600,  // 😀
    [ANGRY]    = 0x1F620,  // 😠
    [THUMBUP]  = 0x1F44D,  // 👍
    [THUMBDN]  = 0x1F44E,  // 👎
    [LOL]      = 0x1F602,  // 😂
    [SURPRISE] = 0x1F62E,  // 😮
    [T_A1]     = 0xA1,     // FOR TESTING
    [T_E1]     = 0xE1,     // FOR TESTING
    [T_A12]    = 0xA12,    // FOR TESTING
    [T_E12]    = 0xE12,    // FOR TESTING
    [T_A123]   = 0xA123,   // FOR TESTING
    [T_A103]   = 0xA103,   // FOR TESTING
    [T_E123]   = 0xE123,   // FOR TESTING
    [T_A1234]  = 0xA1234,  // FOR TESTING
    [T_A1034]  = 0xA1034,  // FOR TESTING
    [T_E1234]  = 0xE1234,  // FOR TESTING
    [T_12]     = 0x12,     // FOR TESTING
    [T_103]    = 0x103,    // FOR TESTING
    [T_123]    = 0x123,    // FOR TESTING
    [T_1234]   = 0x1234,   // FOR TESTING
    [T_1034]   = 0x1034,   // FOR TESTING
    [T_12345]  = 0x12345,  // FOR TESTING
    [T_103456] = 0x103456, // FOR TESTING
};

void eeconfig_init_user_unicode(void) {
    // Default to Linux style
    set_unicode_input_mode(UC_LNX);
}
