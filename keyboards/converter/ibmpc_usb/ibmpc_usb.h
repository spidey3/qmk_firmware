/*
Copyright 2011,2012,2013 Jun Wako <wakojun@gmail.com>
Copyright 2021 Josh Diamond <josh@windowoffire.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
#pragma once

#include "quantum.h"

/* IBM XT keyboard layout (set1)
 * ,-------.  ,--------------------------------------------------------------------------.
 * | F1| F2|  |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  BS  |NumLck |ScrLck |
 * |-------|  |--------------------------------------------------------------------------|
 * | F3| F4|  | Tab |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ] |   |  7|  8|  9|  -|
 * |-------|  |------------------------------------------------------|Ent|---------------|
 * | F5| F6|  | Ctrl |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  `|   |  4|  5|  6|   |
 * |-------|  |----------------------------------------------------------------------|   |
 * | F7| F8|  |Shif|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift|  *|  1|  2|  3|  +|
 * |-------|  |----------------------------------------------------------------------|   |
 * | F9|F10|  |  Alt  |               Space                  |CapsLck|   0   |   .   |   |
 * `-------'  `--------------------------------------------------------------------------'
 * Scan code set 1
 * ,-------.  ,--------------------------------------------------------------------------.
 * | 3B| 3C|  | 01| 02| 03| 04| 05| 06| 07| 08| 09| 0A| 0B| 0C| 0D|  0E  |  45   |  46   |
 * |-------|  |--------------------------------------------------------------------------|
 * | 3D| 3E|  | 0F  | 10| 11| 12| 13| 14| 15| 16| 17| 18| 19| 1A| 1B |   | 47| 48| 49| 4A|
 * |-------|  |------------------------------------------------------| 1C|---------------|
 * | 3F| 40|  | 1D   | 1E| 1F| 20| 21| 22| 23| 24| 25| 26| 27| 28| 29|   | 4B| 4C| 4D|   |
 * |-------|  |----------------------------------------------------------------------|   |
 * | 41| 42|  | 2A | 2B| 2C| 2D| 2E| 2F| 30| 31| 32| 33| 34| 35|  36 | 37| 4F| 50| 51| 4E|
 * |-------|  |----------------------------------------------------------------------|   |
 * | 43| 44|  |  38   |              39                      |  3A   |  52   |  53   |   |
 * `-------'  `--------------------------------------------------------------------------'
 */

#define LAYOUT_xt( \
    K3B,K3C,  K01,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,K0C,K0D,K0E,    K45,    K46, \
    K3D,K3E,  K0F,K10,K11,K12,K13,K14,K15,K16,K17,K18,K19,K1A,K1B,    K47,K48,K49,K4A, \
    K3F,K40,  K1D,K1E,K1F,K20,K21,K22,K23,K24,K25,K26,K27,K28,K29,K1C,K4B,K4C,K4D,     \
    K41,K42,  K2A,K2B,K2C,K2D,K2E,K2F,K30,K31,K32,K33,K34,K35,K36,K37,K4F,K50,K51,K4E, \
    K43,K44,  K38,                    K39,                    K3A,    K52,    K53      \
) { \
    { KC_NO, K01,   K02,   K03,   K04,   K05,   K06,   K07   }, \
    { K08,   K09,   K0A,   K0B,   K0C,   K0D,   K0E,   K0F   }, \
    { K10,   K11,   K12,   K13,   K14,   K15,   K16,   K17   }, \
    { K18,   K19,   K1A,   K1B,   K1C,   K1D,   K1E,   K1F   }, \
    { K20,   K21,   K22,   K23,   K24,   K25,   K26,   K27   }, \
    { K28,   K29,   K2A,   K2B,   K2C,   K2D,   K2E,   K2F   }, \
    { K30,   K31,   K32,   K33,   K34,   K35,   K36,   K37   }, \
    { K38,   K39,   K3A,   K3B,   K3C,   K3D,   K3E,   K3F   }, \
    { K40,   K41,   K42,   K43,   K44,   K45,   K46,   K47   }, \
    { K48,   K49,   K4A,   K4B,   K4C,   K4D,   K4E,   K4F   }, \
    { K50,   K51,   K52,   K53,   KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}


/* Extended keyboard layout (set1)
 *
 *         ,-----------------------------------------------.
 *         |F13|F14|F15|F16|F17|F18|F19|F20|F21|F22|F23|F24|
 * ,---.   |-----------------------------------------------|     ,-----------.     ,-----------.
 * |Esc|   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|     |PrS|ScL|Pau|     |VDn|VUp|Mut|
 * `---'   `-----------------------------------------------'     `-----------'     `-----------'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|Entr|               |  4|  5|  6|KP,|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * |Shft| ^a|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RO|Shift |     |Up |     |  1|  2|  3|Ent|
 * |-----------------------------------------------------------| ,-----------. |---------------|
 * |Ctl|Gui|Alt|MHEN|     Space      |HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |      0|  .|KP=|
 * `-----------------------------------------------------------' `-----------' `---------------'
 *         ,-----------------------------------------------.
 *         | 64| 65| 66| 67| 68| 69| 6A| 6B| 6C| 6D| 6E| 76|
 * ,---.   |-----------------------------------------------|     ,-----------.     ,-----------.
 * | 01|   | 3B| 3C| 3D| 3E| 3F| 40| 41| 42| 43| 44| 57| 58|     |*37| 46|*46|     |*2E|*30|*20|
 * `---'   `-----------------------------------------------'     `-----------'     `-----------'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * | 29| 02| 03| 04| 05| 06| 07| 08| 09| 0A| 0B| 0C| 0D| 7D| 0E| |*52|*47|*49| | 45|*35| 37| 4A|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * | 0F  | 10| 11| 12| 13| 14| 15| 16| 17| 18| 19| 1A| 1B|  2B | |*53|*4F|*51| | 47| 48| 49| 4E|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * | 3A   | 1E| 1F| 20| 21| 22| 23| 24| 25| 26| 27| 28| 56| 1C |               | 4B| 4C| 4D| 7E|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * | 2A | ^a| 2C| 2D| 2E| 2F| 30| 31| 32| 33| 34| 35| 73|  36  |     |*48|     | 4F| 50| 51|*1C|
 * |-----------------------------------------------------------| ,-----------. |---------------|
 * | 1D|*5B| 38| 7B |      39        | 79 | 70 |*38|*5C|*5D|*1D| |*4B|*50|*4D| |     52| 53| 59|
 * `-----------------------------------------------------------' `-----------' `---------------'
 * *: E0-prefixed codes. See cs1_e0code() for remapping to unimap array.
 * ^a: ISO backslash and US backslash use identical code 2B. [3], [a]
 * Unsupported codes or error -> 00.
 * UNIMAP_NUBS is unused.
 */

#define LAYOUT_set1_101_key_ansi( \
            K64,K65,K66,K67,K68,K69,K6A,K6B,K6C,K6D,K6E,K76,                                     \
    K01,    K3B,K3C,K3D,K3E,K3F,K40,K41,K42,K43,K44,K57,K58,      K54,K46,K55,      K5D,K5E,K5F, \
    K29,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,K0C,K0D,K7D,K0E,  K71,K74,K77,  K45,K7F,K37,K4A, \
    K0F,K10,K11,K12,K13,K14,K15,K16,K17,K18,K19,K1A,K1B,    K2B,  K72,K75,K78,  K47,K48,K49,K4E, \
    K3A,K1E,K1F,K20,K21,K22,K23,K24,K25,K26,K27,K28,        K1C,                K4B,K4C,K4D,K7E, \
    K2A,    K2C,K2D,K2E,K2F,K30,K31,K32,K33,K34,K35,    K73,K36,      K60,      K4F,K50,K51,K6F, \
    K1D,K5A,K38,K7B,        K39,        K79,K70,K7C,K5B,K5C,K7A,  K61,K62,K63,      K52,K53,K59  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
    { K50, K51, K52, K53, K54, K55, K56, K57 }, \
    { K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
    { K70, K71, K72, K73, K74, K75, K76, K77 }, \
    { K78, K79, K7A, K7B, K7C, K7D, K7E, K7F }  \
}

#define LAYOUT_set1_101_key_iso( \
            K64,K65,K66,K67,K68,K69,K6A,K6B,K6C,K6D,K6E,K76,                                     \
    K01,    K3B,K3C,K3D,K3E,K3F,K40,K41,K42,K43,K44,K57,K58,      K54,K46,K55,      K5D,K5E,K5F, \
    K29,K02,K03,K04,K05,K06,K07,K08,K09,K0A,K0B,K0C,K0D,K7D,K0E,  K71,K74,K77,  K45,K7F,K37,K4A, \
    K0F,K10,K11,K12,K13,K14,K15,K16,K17,K18,K19,K1A,K1B,          K72,K75,K78,  K47,K48,K49,K4E, \
    K3A,K1E,K1F,K20,K21,K22,K23,K24,K25,K26,K27,K28,    K56,K1C,                K4B,K4C,K4D,K7E, \
    K2A,K2B,K2C,K2D,K2E,K2F,K30,K31,K32,K33,K34,K35,    K73,K36,      K60,      K4F,K50,K51,K6F, \
    K1D,K5A,K38,K7B,        K39,        K79,K70,K7C,K5B,K5C,K7A,  K61,K62,K63,      K52,K53,K59  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
    { K50, K51, K52, K53, K54, K55, K56, K57 }, \
    { K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
    { K70, K71, K72, K73, K74, K75, K76, K77 }, \
    { K78, K79, K7A, K7B, K7C, K7D, K7E, K7F }  \
}

/*
 * Scan Code Set 2:
 *         ,-----------------------------------------------.
 *         |F13|F14|F15|F16|F17|F18|F19|F20|F21|F22|F23|F24|
 * ,---.   |-----------------------------------------------|     ,-----------.     ,-----------.
 * |Esc|   |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|     |PrS|ScL|Pau|     |VDn|VUp|Mut|
 * `---'   `-----------------------------------------------'     `-----------'     `-----------'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY|Bsp| |Ins|Hom|PgU| |NmL|  /|  *|  -|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|  \  | |Del|End|PgD| |  7|  8|  9|  +|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|   Entr |               |  4|  5|  6|KP,|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * |Shft|  <|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| RO|Shift |     |Up |     |  1|  2|  3|Ent|
 * |-----------------------------------------------------------| ,-----------. |---------------|
 * |Ctl|Gui|Alt|MHEN|     Space      |HENK|KANA|Alt|Gui|App|Ctl| |Lef|Dow|Rig| |  #|  0|  .|KP=|
 * `-----------------------------------------------------------' `-----------' `---------------'
 *
 *         ,-----------------------------------------------.
 *         | 08| 10| 18| 20| 28| 30| 38| 40| 48| 50| 57| 5F|  
 * ,---.   |-----------------------------------------------|     ,-----------.     ,-----------.
 * | 76|   | 05| 06| 04| 0C| 03| 0B| 83| 0A| 01| 09| 78| 07|     |+7C| 7E|+77|     |*21|*32|*23|
 * `---'   `-----------------------------------------------'     `-----------'     `-----------'
 * ,-----------------------------------------------------------. ,-----------. ,---------------.
 * | 0E| 16| 1E| 26| 25| 2E| 36| 3D| 3E| 46| 45| 4E| 55| 6A| 66| |*70|*6C|*7D| | 77|*4A| 7C| 7B|
 * |-----------------------------------------------------------| |-----------| |---------------|
 * | 0D  | 15| 1D| 24| 2D| 2C| 35| 3C| 43| 44| 4D| 54| 5B|  5D | |*71|*69|*7A| | 6C| 75| 7D| 79|
 * |-----------------------------------------------------------| `-----------' |---------------|
 * | 58   | 1C| 1B| 23| 2B| 34| 33| 3B| 42| 4B| 4C| 52| ^a| 5A |               | 6B| 73| 74| 6D|
 * |-----------------------------------------------------------|     ,---.     |---------------|
 * | 12 | 61| 1A| 22| 21| 2A| 32| 31| 3A| 41| 49| 4A| 51|  59  |     |*75|     | 69| 72| 7A|*5A|
 * |-----------------------------------------------------------| ,-----------. |---------------|
 * | 14|*1F| 11| 67 |     29         | 64 | 13 |*11|*27|*2F|*14| |*6B|*72|*74| | 68| 70| 71| 63|
 * `-----------------------------------------------------------' `-----------' `---------------'
 * *: E0-prefixed codes. See cs2_e0code() for remapping to unimap array.
 * +: Special codes sequence
 * ^a: ISO hash key and US backslash use identical code 5D.
 * 51, 63, 68, 6A, 6D: Hidden keys in IBM model M [6]
 */

#define LAYOUT_set2_101_key_ansi( \
          K08,K10,K18,K20,K28,K30,K38,K40,K48,K50,K57,K5F,                                     \
  K76,    K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,      K7F,K7E,K00,      K65,K6E,K6F, \
  K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K6A,K66,  K39,K2F,K5E,  K77,K60,K7C,K7B, \
  K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,    K5D,  K37,K27,K56,  K6C,K75,K7D,K79, \
  K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,        K5A,                K6B,K73,K74,K6D, \
  K12,    K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,    K51,K59,      K4F,      K69,K72,K7A,xxx, \
  K14,K19,K11,K67,        K29,        K64,K13,K0F,K1F,K5C,K17,  K53,K3F,K47,  K68,K70,K71,K63  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
    { K50, K51, K52, K53, K54, K55, K56, K57 }, \
    { K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
    { K70, K71, K72, K73, K74, K75, K76, K77 }, \
    { K78, K79, K7A, K7B, K7C, K7D, K7E, K7F }  \
}

#define LAYOUT_set2_101_key_iso( \
          K08,K10,K18,K20,K28,K30,K38,K40,K48,K50,K57,K5F,                                     \
  K76,    K05,K06,K04,K0C,K03,K0B,K83,K0A,K01,K09,K78,K07,      K7F,K7E,K00,      K65,K6E,K6F, \
  K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K6A,K66,  K39,K2F,K5E,  K77,K60,K7C,K7B, \
  K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,          K37,K27,K56,  K6C,K75,K7D,K79, \
  K58,K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,    K5D,K5A,                K6B,K73,K74,K6D, \
  K12,K61,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,    K51,K59,      K4F,      K69,K72,K7A,xxx, \
  K14,K19,K11,K67,        K29,        K64,K13,K0F,K1F,K5C,K17,  K53,K3F,K47,  K68,K70,K71,K63  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
    { K50, K51, K52, K53, K54, K55, K56, K57 }, \
    { K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
    { K70, K71, K72, K73, K74, K75, K76, K77 }, \
    { K78, K79, K7A, K7B, K7C, K7D, K7E, K7F }  \
}

/*
 * Scan Code Set 3:
 *               ,-----------------------------------------------.
 *               |F13|F14|F15|F16|F17|F18|F19|F20|F21|F22|F23|F24|
 *               |-----------------------------------------------|
 *               |F1 |F2 |F3 |F4 |F5 |F6 |F7 |F8 |F9 |F10|F11|F12|
 *               `-----------------------------------------------'
 * ,-------. ,-----------------------------------------------------------. ,-----------. ,---------------.
 * |Mut|HEN| |  `|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|JPY| BS| |  /|PgU|PgD| |Esc|NmL|ScL|  *|
 * |-------| |-----------------------------------------------------------| |-----------| |---------------|
 * |VUp|Pau| |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \| |End|Ins|Del| |  7|  8|  9|  +|
 * |-------| |-----------------------------------------------------------| `-----------' |-----------|---|
 * |VDn|MHE| |CapsL |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #| Ret| |JPY|Up |  #| |  4|  5|  6|  -|
 * |-------| |-----------------------------------------------------------| ,-----------. |---------------|
 * |PrS|App| |Shif|  \|  Z|  X|  C|  V|  B|  N|  M|  ,|  ,|  /| RO| Shift| |Lef|Hom|Rig| |  1|  2|  3|Ent|
 * |-------| |-----------------------------------------------------------| `-----------' |-----------|---|
 * |Gui|Gui| |Ctrl|    |Alt |          Space              |Alt |    |Ctrl| | RO|Dow|KAN| |  ,|  0|  .|  =|
 * `-------' `----'    `---------------------------------------'    `----'  ---`---'---  `---------------'
 *
 *               ,-----------------------------------------------.
 *               | 08| 10| 18| 20| 28| 30| 38| 40| 48| 50| 57| 5F|
 *               |-----------------------------------------------|
 *               | 07| 0F| 17| 1F| 27| 2F| 37| 3F| 47| 4F| 56| 5E|
 *               `-----------------------------------------------'
 * ,-------. ,-----------------------------------------------------------. ,-----------. ,---------------.
 * | 05| 06| | 0E| 16| 1E| 26| 25| 2E| 36| 3D| 3E| 46| 45| 4E| 55| 5D| 66| | 67| 6E| 6F| | 76| 77| 7E|*84|
 * |-------| |-----------------------------------------------------------| |-----------| |---------------|
 * | 04| 0C| | 0D  | 15| 1D| 24| 2D| 2C| 35| 3C| 43| 44| 4D| 54| 5B|  5C | | 64| 65| 6D| | 6C| 75| 7D| 7C|
 * |-------| |-----------------------------------------------------------| `-----------' |---------------|
 * | 03| 0B| | 14   | 1C| 1B| 23| 2B| 34| 33| 3B| 42| 4B| 4C| 52| 53| 5A | |-26| 63|-25| | 6B| 73| 74| 7B|
 * |-------| |-----------------------------------------------------------| ,-----------. |---------------|
 * |*83| 0A| | 12 | 13| 1A| 22| 21| 2A| 32| 31| 3A| 41| 49| 4A| 51|  59  | | 61| 62| 6A| | 69| 72| 7A| 79|
 * |-------| |-----------------------------------------------------------| `-----------' |---------------|
 * | 01| 09| | 11  |   |19  |        29                   |39  |   | 58  | |-16| 60|-1E| | 68| 70| 71| 78|
 * `-------' `-----'   `---------------------------------------'   `-----'  ---`---'---  `---------------'
 * *: Special codes remapped 83->02, 84->7F
 * -: G80-2551 specific 80-prefixed codes remapped: 26->5D, 25->53, 16->51, 1E->00
 * 51, 5C, 5D, 68, 78: Hidden keys in IBM 122-key terminal keyboard [7]
 */

#define LAYOUT_terminal_set3( \
                K08,K10,K18,K20,K28,K30,K38,K40,K48,K50,K57,K5F,                                         \
                K07,K0F,K17,K1F,K27,K2F,K37,K3F,K47,K4F,K56,K5E,                                         \
  K05,K06,  K0E,K16,K1E,K26,K25,K2E,K36,K3D,K3E,K46,K45,K4E,K55,K5D,K66,  K67,K6E,K6F,  K76,K77,K7E,K84, \
  K04,K0C,  K0D,K15,K1D,K24,K2D,K2C,K35,K3C,K43,K44,K4D,K54,K5B,    K5C,  K64,K65,K6D,  K6C,K75,K7D,K7C, \
  K03,K0B,  K14,    K1C,K1B,K23,K2B,K34,K33,K3B,K42,K4B,K4C,K52,K53,K5A,  Kx1,K63,Kx2,  K6B,K73,K74,K7B, \
  K83,K0A,  K12,K13,K1A,K22,K21,K2A,K32,K31,K3A,K41,K49,K4A,K51,    K59,  K61,K62,K6A,  K69,K72,K7A,K79, \
  K01,K09,  K11,    K19,             K29,               K39,        K58,  Kx3,K60,Kx4,  K68,K70,K71,K78  \
) { \
    { K00, K01, K02, K03, K04, K05, K06, K07 }, \
    { K08, K09, K0A, K0B, K0C, K0D, K0E, K0F }, \
    { K10, K11, K12, K13, K14, K15, K16, K17 }, \
    { K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
    { K20, K21, K22, K23, K24, K25, K26, K27 }, \
    { K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
    { K30, K31, K32, K33, K34, K35, K36, K37 }, \
    { K38, K39, K3A, K3B, K3C, K3D, K3E, K3F }, \
    { K40, K41, K42, K43, K44, K45, K46, K47 }, \
    { K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
    { K50, K51, K52, K53, K54, K55, K56, K57 }, \
    { K58, K59, K5A, K5B, K5C, K5D, K5E, K5F }, \
    { K60, K61, K62, K63, K64, K65, K66, K67 }, \
    { K68, K69, K6A, K6B, K6C, K6D, K6E, K6F }, \
    { K70, K71, K72, K73, K74, K75, K76, K77 }, \
    { K78, K79, K7A, K7B, K7C, K7D, K7E, K7F }  \
}

