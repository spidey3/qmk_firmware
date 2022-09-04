// Copyright 2022 Joshua Diamond josh@windowoffire.com (@spidey3)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include QMK_KEYBOARD_H

#ifdef UNICODEMAP_ENABLE

enum unicode_names {
    BUL1,
    BUL2,
    LARR,
    RARR,
    ENDASH,
    EMDASH,
    SPIDER,
    SAD,
    MEH,
    HAPPY,
    ANGRY,
    THUMBUP,
    THUMBDN,
    LOL,
    SURPRISE,

    // FOR TESTING
    T_A1,
    T_E1,
    T_A12,
    T_E12,
    T_A123,
    T_A103,
    T_E123,
    T_A1234,
    T_A1034,
    T_E1234,
    T_12,
    T_103,
    T_123,
    T_1234,
    T_1034,
    T_12345,
    T_103456,
};

#    define X_BUL (XP(BUL1, BUL2))
#    define X_DASH (XP(EMDASH, ENDASH))

#endif
