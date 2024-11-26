#pragma once

enum layer_names {
    _BASE,
    _QWERT,
    _GAME,
    _MOUSE,
    _NAV,
    _NUM,
    _SYM,
    _FUNC,
    _MISC,    
};

#define SPCENAV LT(_NAV,KC_SPC)
#define TABMOUS LT(_MOUSE, KC_TAB)
#define NUMENT LT(_NUM, KC_ENT)
#define SYMBACK LT(_SYM, KC_BSPC)

#define LGUI_I LGUI_T(KC_I)
#define LALT_S LALT_T(KC_S)
#define LCTL_R LCTL_T(KC_R)
#define LSIFT_T SFT_T(KC_T)
#define RGUI_O RGUI_T(KC_O) 
#define RALT_A RALT_T(KC_A)
#define RCTL_E RCTL_T(KC_E)
#define RSFT_N RSFT_T(KC_N)

enum tap_dance_keys {
    TD_YESC,
    TD_QESC,
};





/* BLANK KEYMAP FOR FERRIS/SWEEP
  [_MISC] = LAYOUT(
  _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______,
                               _______, _______,        _______, _______
  )
*/

