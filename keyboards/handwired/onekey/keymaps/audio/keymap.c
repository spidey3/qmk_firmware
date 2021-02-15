#include QMK_KEYBOARD_H

#include "song_list.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    LAYOUT_ortho_1x1(KC_A)
};

static float my_song[][2] = SONG(ODE_TO_JOY);
static float broken_song[][2] = { 
    //{65.0f, 3},
    //{440.0f, 2}
    //{65.0f, 12},
    //{440.0f, 8}
    //{660.0f, 1},
    {440.0f, 1},
    {880.0f, 1}
};

extern audio_config_t audio_config;
extern uint8_t note_tempo;
static uint8_t counter = 0;

void keyboard_post_init_user() {
    audio_on();
    // audio_set_tempo(255);
    clicky_on();
    debug_enable = true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    // debug_enable = true;
    dprintf("key event: kc: %02X, col: %02u, row: %02u, pressed: %u mods: %08b "
#if !defined(NO_ACTION_ONESHOT)
            "os: %08b "
#endif
            "weak: %08b\n",
            keycode, record->event.key.col, record->event.key.row, record->event.pressed, bitrev(get_mods()),
#if !defined(NO_ACTION_ONESHOT)
            bitrev(get_oneshot_mods()),
#endif
            bitrev(get_weak_mods()));

#if 0
    dprintf("audio_config.enable=%u\n", audio_config.enable);
    dprintf("note_tempo=%u bpm\n", note_tempo);
#endif

    if (record->event.pressed) {
        counter++;
#if 0
        if (counter % 7 == 0) {
           audio_toggle();
           dprintf("updateding audio_config.enable=%u\n", audio_config.enable);
        }
#endif
    } else {
        if (counter % 5 == 0) {
            PLAY_SONG(my_song);
        } else if (false) {
            PLAY_SONG(broken_song);
        }
    }

    return true;
}
