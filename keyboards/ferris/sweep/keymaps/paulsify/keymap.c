#include QMK_KEYBOARD_H
#include "key_def.h"

tap_dance_action_t tap_dance_actions[] = {

    [TD_YESC] = ACTION_TAP_DANCE_DOUBLE(KC_Y, KC_ESC),
    [TD_QESC] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_ESC),
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
    TD(TD_YESC), KC_C, KC_L, KC_M, KC_K,        FUNCZ, KC_F, KC_U, KC_COMM, KC_BSPC,
    LGUI_I, LALT_S, LCTL_R, LSIFT_T, KC_G,        KC_P, RSFT_N, RCTL_E, RALT_A, RGUI_O,
    KC_Q, KC_V, KC_W, KC_D, KC_J,        KC_B, KC_H, KC_SLSH, KC_DOT, KC_X,
               TABMOUS , SPCENAV,        NUMENT, SYMBACK
    ),

    [_QWERT] = LAYOUT(
    TD(TD_QESC), KC_W, KC_E, KC_R, KC_T,        KC_Y, KC_U, KC_I, KC_O, KC_P,
    KC_A, KC_S, KC_D, KC_F, KC_G,        KC_H, KC_J, KC_K, KC_L, KC_SCLN,
    KC_Z, KC_X, KC_C, KC_V, KC_B,        KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH,
                TABMOUS, SPCENAV,       NUMENT, SYMBACK
    ),

    [_GAME] = LAYOUT(
    KC_ESC, KC_Q, KC_W, KC_E, KC_R,        KC_T, KC_Y, KC_U, KC_I, KC_O,
    KC_LSFT, KC_A, KC_S, KC_D, KC_F,        KC_G, KC_H, KC_J, KC_K, KC_L,
    KC_LCTL, KC_Z, LALT_X, KC_C, LTNUMV,        KC_B, KC_N, KC_M, KC_COMM, KC_DOT,
                    KC_TAB, KC_SPC,        _______, DF(_BASE)
    ),

    [_MOUSE] = LAYOUT(
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, MS_LEFT, MS_DOWN, MS_UP, MS_RGHT,
    KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, _______,        MS_BTN3, MS_WHLL, MS_WHLD, MS_WHLU, MS_WHLR,
                              _______, _______,        MS_BTN1, MS_BTN2
    ),

    [_NAV] = LAYOUT(
    C(KC_Z), C(KC_X), C(KC_C), C(KC_V), C(KC_P),        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT,
    _______, C(KC_C), KC_BSPC, KC_ENT, _______,        _______, KC_HOME, KC_PGDN, KC_PGUP, KC_END,
                              _______, _______,        _______, _______
    ),

    [_NUM] = LAYOUT(
    KC_LBRC, KC_1, KC_8, KC_9, KC_RBRC,         _______, _______, _______, _______, QK_BOOT,
    KC_SCLN, KC_4, KC_5, KC_6, KC_EQL,          _______, _______, _______, _______, _______,
    KC_GRV, KC_1, KC_2, KC_3, KC_BSLS,          _______, _______, _______, _______, _______,
                          KC_0, KC_DOT,         _______, _______
    ),

    [_SYM] = LAYOUT(
    KC_LCBR, KC_AMPR, KC_ASTR, KC_MINS, KC_RCBR,        _______, DF(_BASE), DF(_QWERT), DF(_GAME), _______,
    KC_COLN, KC_DLR, KC_PERC, KC_CIRC, KC_PLUS,         _______, _______, _______, _______, _______,
    KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_PIPE,          _______, _______, _______, _______, _______,
                            KC_LPRN, KC_RPRN,           _______, _______
    ),

    [_FUNC] = LAYOUT(
    _______, KC_F7, KC_F8, KC_F9, KC_F10,        _______, _______, _______, _______, _______,
    _______, KC_F4, KC_F5, KC_F6, KC_F11,        _______, _______, _______, _______, _______,
    _______, KC_F1, KC_F2, KC_F3, KC_F12,        _______, _______, _______, _______, _______,
                               _______, _______,        _______, _______
   ),

    [_MISC] = LAYOUT(
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        KC_A, _______, _______, _______, _______,
    _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
                               _______, _______,        _______, _______
   )
   /* BLANK KEYMAP
   [_BLANK] = LAYOUT(
   _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
   _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
                              _______, _______,        _______, _______
  )
  */



};


