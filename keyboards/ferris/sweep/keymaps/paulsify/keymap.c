#include QMK_KEYBOARD_H
#include "key_def.h"


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
    KC_J, KC_G, KC_M, KC_P, KC_V,        KC_SCLN, KC_DOT, KC_SLSH, KC_DQUO, KC_QUOT,
    KC_R, KC_S, KC_N, KC_D, KC_B,        KC_COMM, KC_A, KC_E, KC_I, KC_H,
    KC_X, KC_F, KC_L, KC_C, KC_W,        KC_MINS, KC_U, KC_O, KC_Y, KC_K,
                _______, SPCENAV,         KC_T, _______
    ),

    [_ISRT] = LAYOUT(
    KC_Y, KC_C, KC_L, KC_M, KC_K,        KC_Z, KC_F, KC_U, KC_COMM, KC_QUOT,
    KC_I, KC_S, KC_R, KC_T, KC_G,        KC_P, KC_N, KC_E, KC_A, KC_O,
    KC_Q, KC_V, KC_W, KC_D, KC_J,        KC_B, KC_H, KC_S, KC_DOT, KC_X,
                _______, KC_SPC,        _______, _______
    ),

    [_QWERT] = LAYOUT(
    KC_Q, KC_W, KC_E, KC_R, KC_T,        KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G,        KC_H, KC_J, KC_K, KC_L, KC_SCLN,
    KC_Z, KC_X, KC_C, KC_V, KC_B,        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                               _______, _______,        _______, _______
    ),
    [_MISC] = LAYOUT(
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
                               _______, _______,        _______, _______
    )

    [_NUM] = LAYOUT(
    KC_1, KC_2, KC_3, KC_4, KC_5,        KC_6, KC_7, KC_8, KC_9, KC_0,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
                               _______, _______,        _______, _______
    ),

    [_SYMBOL] = LAYOUT(
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
                               _______, _______,        _______, _______
    ),

    [_FUNC] = LAYOUT(
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
                               _______, _______,        _______, _______
   ),

    [_MISC] = LAYOUT(
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
                               _______, _______,        _______, _______
   )

};


