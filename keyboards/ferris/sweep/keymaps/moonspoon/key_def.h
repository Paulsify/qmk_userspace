#pragma once


enum ferris_layers {
  _ISRT,
  _GAME,
  _NAV,
  _LOWER,
  _RAISE,
  _FUNC,
  _MISC,
  _EXTRA,

};


#define KC_CTLQ LCTL_T(KC_Q)
#define KC_ALTW LALT_T(KC_W)
#define KC_CTLX RCTL_T(KC_X)
#define KC_ALTS RALT_T(KC_SLSH)
#define KC_ALTX LALT_T(KC_X)
#define KC_RASZ LT(3, KC_Z)
#define KC_NAV LT(2, KC_N)
#define KC_RAS LT(3 , KC_TAB)
#define KC_LOW LT(4, KC_BSPC)
#define KC_FNZ LT(5, KC_Z)
#define KC_LOWCOMM LT(3, KC_COMM)
#define KC_ISFT LSFT_T(KC_I)
#define KC_OSFT LSFT_T(KC_O)
#define KC_HNAV LT(2, KC_H)
#define KC_TABL LT(3, KC_TAB)

enum tap_dance_keys {
    TD_Y_ESC,
};
