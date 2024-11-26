#include QMK_KEYBOARD_H
#include "key_def.h"
/*
    - Add entry to enum
    - Sequence keys
    - Link enum to sequence
*/


enum combos {
    COMBO_CAPS,

    COMBO_QUOTE,
    COMBO_DQUOT,
    COMBO_BQUOT,

    COMBO_LBRC,
    COMBO_RBRC,
    COMBO_LPRN,
    COMBO_RPRN,
    COMBO_LABK,
    COMBO_RABK,
    COMBO_LCBR,
    COMBO_RCBR,

    COMBO_MINS,
    COMBO_PLUS,
    COMBO_EQUL,
    COMBO_UNDS,

    COMBO_PIPE,
    COMBO_COLN,
    COMBO_SCLN,
    COMBO_BSLS,
    COMBO_TILD,
};

// Sequence Keys ---------------------------------------------------------------------------------------------------------
/*CAPSLOCK*/
const uint16_t PROGMEM combo_caps[] = {KC_C, KC_L, KC_M, COMBO_END};

/* '"` */
const uint16_t PROGMEM combo_quote[] = {RSFT_N, RCTL_E, RALT_A, COMBO_END}; 
const uint16_t PROGMEM combo_dquot[] = {KC_H, KC_SLSH, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_bquot[] = {KC_F, KC_U, KC_COMM, COMBO_END};

/*[] () <> {} */
const uint16_t PROGMEM combo_lbrc[] = {KC_C, KC_L, COMBO_END};
const uint16_t PROGMEM combo_rbrc[] = {KC_L, KC_M, COMBO_END};
const uint16_t PROGMEM combo_lprn[] = {LALT_S,LCTL_R, COMBO_END};
const uint16_t PROGMEM combo_rprn[] = {LCTL_R, LSIFT_T, COMBO_END};
const uint16_t PROGMEM combo_labk[] = {KC_H, KC_SLSH, COMBO_END};
const uint16_t PROGMEM combo_rabk[] = {KC_SLSH, KC_DOT, COMBO_END};
const uint16_t PROGMEM combo_lcbr[] = {KC_V, KC_W, COMBO_END};
const uint16_t PROGMEM combo_rcbr[] = {KC_W, KC_D, COMBO_END};

/* -+=_ */
const uint16_t PROGMEM combo_mins[] = {LALT_S, KC_C, COMBO_END};
const uint16_t PROGMEM combo_plus[] = {LSIFT_T, KC_M, COMBO_END};
const uint16_t PROGMEM combo_equl[] = {LCTL_R, KC_L, COMBO_END};
const uint16_t PROGMEM combo_unds[] = {LALT_S, KC_V, COMBO_END};

/* |:;\~ */
const uint16_t PROGMEM combo_pipe[] = {RSFT_N, KC_F, COMBO_END};
const uint16_t PROGMEM combo_coln[] = {LALT_S, LCTL_R, LSIFT_T, COMBO_END};
const uint16_t PROGMEM combo_scln[] = {KC_V, KC_W, KC_D, COMBO_END};
const uint16_t PROGMEM combo_bsls[] = {RSFT_N, KC_H, COMBO_END};
const uint16_t PROGMEM combo_tild[] = {RALT_A, KC_COMM, COMBO_END};

combo_t key_combos[] = {

    [COMBO_CAPS] = COMBO(combo_caps, KC_CAPS),

    [COMBO_QUOTE] = COMBO(combo_quote, KC_QUOTE),
    [COMBO_DQUOT] = COMBO(combo_dquot, LSFT(KC_QUOTE)),
    [COMBO_BQUOT] = COMBO(combo_bquot, KC_GRV),
    
    [COMBO_LBRC] = COMBO(combo_lbrc, KC_LBRC),
    [COMBO_RBRC] = COMBO(combo_rbrc, KC_RBRC),
    [COMBO_LPRN] = COMBO(combo_lprn, KC_LPRN),
    [COMBO_RPRN] = COMBO(combo_rprn, KC_RPRN),
    [COMBO_LABK] = COMBO(combo_labk, KC_LABK),
    [COMBO_RABK] = COMBO(combo_rabk, KC_RABK),
    [COMBO_LCBR] = COMBO(combo_lcbr, KC_LCBR),
    [COMBO_RCBR] = COMBO(combo_rcbr, KC_RCBR),

    [COMBO_MINS] = COMBO(combo_mins,KC_MINS), 
    [COMBO_PLUS] = COMBO(combo_plus,KC_PLUS), 
    [COMBO_EQUL] = COMBO(combo_equl,KC_EQL), 
    [COMBO_UNDS] = COMBO(combo_unds,KC_UNDS), 
 

    [COMBO_PIPE] = COMBO(combo_pipe, KC_PIPE),
    [COMBO_COLN] = COMBO(combo_coln, KC_COLN),       
    [COMBO_SCLN] = COMBO(combo_scln, KC_SCLN),       
    [COMBO_BSLS] = COMBO(combo_bsls, KC_BSLS),       
    [COMBO_TILD] = COMBO(combo_tild, KC_TILD),       
             
             
};           
             
