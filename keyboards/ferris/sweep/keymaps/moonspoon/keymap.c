#include QMK_KEYBOARD_H
#include "key_def.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ISRT] = LAYOUT( /* ISRT */
    KC_Y,    KC_C,    KC_L,    KC_M,    KC_K,            KC_Z,      KC_F,    KC_U,    KC_COMM,  KC_BSPC,
    KC_ISFT,   KC_S,    KC_R,    KC_T,    KC_G,            KC_P,      KC_NAV,  KC_E,    KC_A,     KC_OSFT,
    KC_CTLQ,   KC_V, KC_ALTW, KC_D,    KC_J,            KC_B,      KC_H,    KC_ALTS, KC_DOT,  KC_CTLX,
                               KC_RAS, KC_SPC,           KC_ENT, KC_LOW
  ),

    [_GAME] = LAYOUT( /* [> GAME <] */
    KC_ESC,  KC_Q,    KC_W,   KC_E,   KC_R,              KC_T, KC_Y, KC_U, KC_I, KC_O,
    KC_LSFT, KC_A,    KC_S,   KC_D,   KC_F,              KC_G, KC_HNAV, KC_J, KC_K, KC_L,
    KC_LCTL, KC_FNZ, KC_ALTX, KC_C,   KC_V,           KC_B, KC_N, KC_M, KC_LOWCOMM, KC_DOT,
                              KC_TABL, KC_SPC,            KC_TRNS, DF(0)
  ),

  [_NAV] = LAYOUT( /* [> NAV <] */
    KC_ESC,  KC_TRNS, KC_PGUP, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, LSG(KC_S),
    KC_LEFT, KC_UP, KC_DOWN,   KC_RGHT, KC_TRNS,         KC_TRNS, KC_NO, KC_LGUI, KC_TRNS, KC_RSFT,
    KC_TRNS, KC_HOME, KC_PGDN, KC_END,  KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_RCTL,
                               KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS
  ),

  [_LOWER] = LAYOUT( /* [> LOWER <] */
    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
    KC_GRV,  KC_TRNS, KC_TRNS, KC_LBRC, KC_RBRC,        KC_DQUO, KC_UNDS, KC_BSLS, KC_TRNS, KC_SCLN ,
    DF(1), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,        KC_TRNS, KC_PLUS, KC_TRNS,  KC_TRNS, KC_TRNS,
                                 KC_TRNS, KC_TRNS,        KC_TRNS, MO(7)
  ),

  [_RAISE] = LAYOUT( /* [> RAISE <] */
    KC_EXLM, KC_AT, KC_HASH,   KC_DLR,  KC_PERC,         KC_CIRC, KC_AMPR , KC_ASTR, KC_LPRN, KC_RPRN,
    KC_GRV, KC_TRNS, KC_TRNS, KC_LCBR, KC_RCBR,         KC_QUOT, KC_MINS, KC_PIPE, KC_TRNS, KC_COLN,
    LGUI(KC_GRV), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,    KC_TRNS, KC_EQL, KC_TRNS, KC_TRNS, MO(5),
                               MO(7), KC_TRNS,         KC_TRNS, KC_TRNS
  ),

  [_FUNC] = LAYOUT( /* [> FUNC <] */
    KC_F1, KC_F2, KC_F3, KC_F4, KC_F5,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_F6, KC_F7, KC_F8, KC_F9, KC_F10,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_F11, KC_F12,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS
  ),

  [_MISC] = LAYOUT( /* [> MISC <] */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS
  ),

  [_EXTRA] = LAYOUT( /* [> EXTRA <] */
    QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         DF(0), DF(1), KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                               KC_TRNS, KC_TRNS,         KC_TRNS, KC_TRNS
  )

};