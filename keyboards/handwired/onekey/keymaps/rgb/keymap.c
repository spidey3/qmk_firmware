#include QMK_KEYBOARD_H

#include "print.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_1x1(RGB_MOD)
};

void keyboard_post_init_user(void) {
    rgblight_enable_noeeprom();
    rgblight_sethsv_noeeprom_cyan();
    rgblight_mode_noeeprom(RGBLIGHT_MODE_RAINBOW_SWIRL);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        ring_buffer_print();
        ring_buffer_clear();
    }

    return true;
}
