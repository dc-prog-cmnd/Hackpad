// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
     * ┌────┬────┬────┐
     * │PLY │PREV│NEXT│
     * ├────┼────┤
     * │MUTE│CALC│
     * └────┴────┘
     */
     
    [0] = LAYOUT(
        KC_MPLY,   KC_MPRV,   KC_MNXT,
        KC_MUTE,   KC_CALC
    )
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
