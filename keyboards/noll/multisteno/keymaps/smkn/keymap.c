/* Copyright 2022 Nathan Olivares
 * 
 * This program is free software: you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation, either version 2 of the License, or 
 * (at your option) any later version. 
 * 
 * This program is distributed in the hope that it will be useful, 
 * but WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details. 
 * 
 * You should have received a copy of the GNU General Public License 
 * along with this program.  If not, see <http://www.gnu.org/licenses/>. 
 */

#include "keymap_steno.h"
#include QMK_KEYBOARD_H

#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO

#define U_SCRL KC_SCROLL_LOCK

enum layers{
  STENO,
  NKRO,

  BASE,
  /* EXTRA, */
  /* TAP, */
  BUTTON,
  NAV,
  MOUSE,
  MEDIA,
  NUM,
  SYM,
  FUN

};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [STENO] = LAYOUT(
    STN_RES1,   STN_N1, STN_N2, STN_N3, STN_N4,  STN_N5,   STN_N6,  STN_N7, STN_N8, STN_N9, STN_NA, STN_FN,
    TO(NKRO),   STN_S1, STN_TL, STN_PL, STN_HL, STN_ST1,   STN_ST3, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR,
    TO(BASE),   STN_S2, STN_KL, STN_WL, STN_RL, STN_ST2,   STN_ST4, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR,
                                STN_NB,  STN_A,   STN_O,   STN_E,   STN_U,  STN_NC
  ),

  [NKRO] = LAYOUT(
    KC_GRAVE,   KC_1, KC_2, KC_3, KC_4, KC_5,   KC_6, KC_7, KC_8, KC_9, KC_0,    KC_MINS,
    TO(STENO),  KC_Q, KC_W, KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I, KC_O, KC_P,    KC_LBRC,
    TO(BASE),   KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                            KC_C, KC_V, KC_Z,   KC_X, KC_N, KC_M
  ),

  [BASE] = LAYOUT(
    U_NU,       KC_Q,             KC_W,         KC_E,              KC_R,            KC_T,                 KC_Y,            KC_U,             KC_I,            KC_O,           KC_P,                U_NU,
    TO(STENO),  RGUI_T(KC_A),     LALT_T(KC_S), LCTL_T(KC_D),      LSFT_T(KC_F),    KC_G,                 KC_H,            RSFT_T(KC_J),     RCTL_T(KC_K),    RALT_T(KC_L),   RGUI_T(KC_QUOT),     U_NU,
    TO(NKRO),   LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C,              KC_V,            KC_B,                 KC_N,            KC_M,             KC_COMM,         ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH), U_NU,
                                                LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB),    LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL)
  ),

  /* [EXTRA] = LAYOUT( */
  /*   U_NU,       KC_Q,             KC_W,         KC_E,              KC_R,            KC_T,                 KC_Y,            KC_U,             KC_I,            KC_O,           KC_P,                U_NU, */
  /*   TO(STENO),  RGUI_T(KC_A),     LALT_T(KC_S), LCTL_T(KC_D),      LSFT_T(KC_F),    KC_G,                 KC_H,            RSFT_T(KC_J),     RCTL_T(KC_K),    RALT_T(KC_L),   RGUI_T(KC_QUOT),     U_NU, */
  /*   TO(NKRO),   LT(BUTTON, KC_Z), ALGR_T(KC_X), KC_C,              KC_V,            KC_B,                 KC_N,            KC_M,             KC_COMM,         ALGR_T(KC_DOT), LT(BUTTON, KC_SLSH), U_NU, */
  /*                                               LT(MEDIA, KC_ESC), LT(NAV, KC_SPC), LT(MOUSE, KC_TAB),    LT(SYM, KC_ENT), LT(NUM, KC_BSPC), LT(FUN, KC_DEL) */
  /* ), */

  /* [TAP] = LAYOUT( */
  /*   U_NU,       KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    U_NU, */
  /*   TO(STENO),  KC_A,   KC_S,   KC_D,   KC_F,   KC_G,    KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT, */
  /*   KC_LSFT,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,    KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, */
  /*                             KC_ESC, KC_SPC, KC_TAB,    KC_ENT, KC_BSPC, KC_DEL */
  /* ), */

  [BUTTON] = LAYOUT(
    U_NU,       U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_NU,
    _______,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_TRNS, KC_TRNS, KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, U_NU,
    _______,    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_NU,
                                  KC_BTN3, KC_BTN1, KC_BTN2, KC_BTN2, KC_BTN1, KC_BTN3
  ),

  [NAV] = LAYOUT(
    U_NU,       RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_NU,
    _______,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, U_NU,
    _______,    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  U_NU,
                                  U_NA,    U_NA,    U_NA,    KC_ENT,  KC_BSPC, KC_DEL
  ),

  [MOUSE] = LAYOUT(
    U_NU,       RESET,   U_NA,    U_NA,    U_NA,    U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_NU,
    _______,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
    _______,    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
                                  U_NA,    U_NA,    U_NA,    KC_BTN2, KC_BTN1, KC_BTN3
  ),

  [MEDIA] = LAYOUT(
    U_NU,       RESET,   U_NA,    U_NA,    U_NA,    U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, U_NU,
    _______,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
    _______,    U_NA,    KC_ALGR, U_NA,    U_NA,    U_NA,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
                                  U_NA,    U_NA,    U_NA,    KC_MSTP, KC_MPLY, KC_MUTE
  ),

  [NUM] = LAYOUT(
    U_NU,       KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, U_NA,    U_NA,    U_NA,    U_NA,    RESET,   U_NU,
    _______,    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, U_NU,
    _______,    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,    U_NU,
                                  KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,    U_NA
  ),

  [SYM] = LAYOUT(
    U_NU,       KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,   U_NU,
    _______,    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, U_NU,
    _______,    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,    U_NU,
                                  KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA
  ),

  [FUN] = LAYOUT(
    U_NU,       KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, U_NA,    U_NA,    U_NA,    U_NA,    RESET,   U_NU,
    _______,    KC_F11,  KC_F4,   KC_F5,   KC_F6,   U_SCRL,  U_NA,    KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, U_NU,
    _______,    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    U_NA,    U_NA,    KC_ALGR, U_NA,    U_NU,
                                  KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,    U_NA
  )

};

layer_state_t layer_state_set_user(layer_state_t state) {
    // or uint8_t layer = get_highest_layer(state);
    switch (get_highest_layer(state)) {
        case (STENO):
          //green LED on
          palSetPad(GPIOA, 1);
          // red LED off
          palClearPad(GPIOA, 0);
          break;
        case (NKRO):
          // red LED on
          palSetPad(GPIOA, 0);
          // green LED off
          palClearPad(GPIOA, 1);
          break;
        /* case (NKRO): */
        /*   // both LEDs off */
        /*   palClearPad(GPIOA, 1); */
        /*   palClearPad(GPIOA, 0); */
        /*   break; */
        case (BASE):
          // both LEDs on
          palSetPad(GPIOA, 1);
          palSetPad(GPIOA, 0);
          break;
        default:
          // shouldn't happen but just in case
          palClearPad(GPIOA, 1);
          palClearPad(GPIOA, 0);
          break;
    }

    return state;
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    return 300;
}
