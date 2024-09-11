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

/* #include "keymap_steno.h" */
#include QMK_KEYBOARD_H


enum steno_miryoku_layers {
  U_BASE,
  U_EXTRA,
  U_TAP,
  U_BUTTON,
  U_NAV,
  U_MOUSE,
  U_MEDIA,
  U_NUM,
  U_SYM,
  U_FUN,

  U_STENO,
  U_NKRO,

  /* Jostick layer stars from here */
  // Direction Layers default to standard SOCD
  U_DPAD,
  U_LSTICK,

  // SOCD Layers
  U_SOCDN,
  U_SOCDLIP,

  // Toggle layers
  /* U_JOYFN */
};



#define U_NP KC_NO // key is not present
#define U_NA KC_NO // present but not available for use
#define U_NU KC_NO // available but not used

#define U_RDO KC_AGIN
#define U_PST S(KC_INS)
#define U_CPY C(KC_INS)
#define U_CUT S(KC_DEL)
#define U_UND KC_UNDO

#define U_SCRL KC_SCROLL_LOCK


enum {
    U_TD_BOOT,
    U_TD_U_BASE,
    U_TD_U_EXTRA,
    U_TD_U_TAP,
    U_TD_U_BUTTON,
    U_TD_U_NAV,
    U_TD_U_MOUSE,
    U_TD_U_MEDIA,
    U_TD_U_NUM,
    U_TD_U_SYM,
    U_TD_U_FUN,

    U_TD_U_STENO,
    U_TD_U_NKRO,

    U_TD_U_DPAD,
    U_TD_U_LSTICK,
};

enum custom_keycodes {
	JS_CRO = SAFE_RANGE,
	JS_CIR,
	JS_SQU,
	JS_TRI,

	JS_L1,
	JS_R1,
	JS_L2,
	JS_R2,

	JS_SEL,
	JS_STRT,

	JS_L3,
	JS_R3,

	// with Standard SOCD
	JS_UP,
	JS_DN,
	JS_LT,
	JS_RT,

	// UP + DOWN with true neutral SOCD keycodes
	JS_UP_N,
	JS_DN_N,

	// with Last Input Priority keycodes
	JS_UP_LIP,
	JS_DN_LIP,
	JS_LT_LIP,
	JS_RT_LIP,

	JS_HOM
};

// Additional Features double tap guard
void u_td_fn_U_STENO(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_STENO);
    layer_move(U_STENO);
  }
}

void u_td_fn_U_NKRO(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_NKRO);
    layer_move(U_NKRO);
  }
}

void u_td_fn_boot(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    reset_keyboard();
  }
}

void u_td_fn_U_BASE(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_BASE);
    layer_move(U_BASE);
  }
}

void u_td_fn_U_EXTRA(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_EXTRA);
    layer_move(U_EXTRA);
  }
}

void u_td_fn_U_TAP(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_TAP);
    layer_move(U_TAP);
  }
}

void u_td_fn_U_BUTTON(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_BUTTON);
    layer_move(U_BUTTON);
  }
}

void u_td_fn_U_NAV(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_NAV);
    layer_move(U_NAV);
  }
}

void u_td_fn_U_MOUSE(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_MOUSE);
    layer_move(U_MOUSE);
  }
}

void u_td_fn_U_MEDIA(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_MEDIA);
    layer_move(U_MEDIA);
  }
}

void u_td_fn_U_NUM(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_NUM);
    layer_move(U_NUM);
  }
}

void u_td_fn_U_SYM(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_SYM);
    layer_move(U_SYM);
  }
}

void u_td_fn_U_FUN(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_FUN);
    layer_move(U_FUN);
  }
}

void u_td_fn_U_DPAD(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_DPAD);
    layer_move(U_DPAD);
  }
}

void u_td_fn_U_LSTICK(tap_dance_state_t *state, void *user_data) {
  if (state->count == 2) {
    default_layer_set((layer_state_t)1 << U_LSTICK);
    layer_move(U_LSTICK);
  }
}


tap_dance_action_t tap_dance_actions[] = {
    [U_TD_BOOT] = ACTION_TAP_DANCE_FN(u_td_fn_boot),
    [U_TD_U_BASE] = ACTION_TAP_DANCE_FN(u_td_fn_U_BASE),
    [U_TD_U_EXTRA] = ACTION_TAP_DANCE_FN(u_td_fn_U_EXTRA),
    [U_TD_U_TAP] = ACTION_TAP_DANCE_FN(u_td_fn_U_TAP),
    [U_TD_U_BUTTON] = ACTION_TAP_DANCE_FN(u_td_fn_U_BUTTON),
    [U_TD_U_NAV] = ACTION_TAP_DANCE_FN(u_td_fn_U_NAV),
    [U_TD_U_MOUSE] = ACTION_TAP_DANCE_FN(u_td_fn_U_MOUSE),
    [U_TD_U_MEDIA] = ACTION_TAP_DANCE_FN(u_td_fn_U_MEDIA),
    [U_TD_U_NUM] = ACTION_TAP_DANCE_FN(u_td_fn_U_NUM),
    [U_TD_U_SYM] = ACTION_TAP_DANCE_FN(u_td_fn_U_SYM),
    [U_TD_U_FUN] = ACTION_TAP_DANCE_FN(u_td_fn_U_FUN),
    [U_TD_U_STENO] = ACTION_TAP_DANCE_FN(u_td_fn_U_STENO),
    [U_TD_U_NKRO] = ACTION_TAP_DANCE_FN(u_td_fn_U_NKRO),
    [U_TD_U_DPAD] = ACTION_TAP_DANCE_FN(u_td_fn_U_DPAD),
    [U_TD_U_LSTICK] = ACTION_TAP_DANCE_FN(u_td_fn_U_LSTICK),
};


// keymap

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [U_BASE] = LAYOUT_3x6_3(
    TD(U_TD_U_DPAD),  KC_Q,               KC_W,         KC_E,                KC_R,              KC_T,                 KC_Y,              KC_U,               KC_I,            KC_O,           KC_P,                  U_NU,
    TD(U_TD_U_STENO), RGUI_T(KC_A),       LALT_T(KC_S), LCTL_T(KC_D),        LSFT_T(KC_F),      KC_G,                 KC_H,              RSFT_T(KC_J),       RCTL_T(KC_K),    LALT_T(KC_L),   RGUI_T(KC_QUOT),       U_NU,
    TD(U_TD_U_NKRO),  LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C,                KC_V,              KC_B,                 KC_N,              KC_M,               KC_COMM,         ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NU,
                                                        LT(U_MEDIA, KC_ESC), LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB),  LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), LT(U_FUN, KC_DEL)
  ),

  [U_EXTRA] = LAYOUT_3x6_3(
    TD(U_TD_U_DPAD),  KC_Q,               KC_W,         KC_E,                KC_R,              KC_T,                   KC_Y,              KC_U,               KC_I,            KC_O,           KC_P,                  U_NU,
    TD(U_TD_U_STENO), RGUI_T(KC_A),       LALT_T(KC_S), LCTL_T(KC_D),        LSFT_T(KC_F),      KC_G,                   KC_H,              RSFT_T(KC_J),       RCTL_T(KC_K),    LALT_T(KC_L),   RGUI_T(KC_QUOT),       U_NU,
    TD(U_TD_U_NKRO),  LT(U_BUTTON, KC_Z), ALGR_T(KC_X), KC_C,                KC_V,              KC_B,                   KC_N,              KC_M,               KC_COMM,         ALGR_T(KC_DOT), LT(U_BUTTON, KC_SLSH), U_NU,
                                                        LT(U_MEDIA, KC_ESC), LT(U_NAV, KC_SPC), LT(U_MOUSE, KC_TAB),    LT(U_SYM, KC_ENT), LT(U_NUM, KC_BSPC), LT(U_FUN, KC_DEL)
  ),

  [U_TAP] = LAYOUT_3x6_3(
    TD(U_TD_U_BASE), KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,      KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    U_NU,
    KC_LCTL,         KC_A,   KC_S,   KC_D,   KC_F,   KC_G,      KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT,
    KC_LSFT,         KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,      KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
                                     KC_ESC, KC_SPC, KC_TAB,    KC_ENT, KC_BSPC, KC_DEL
  ),

  [U_BUTTON] = LAYOUT_3x6_3(
    U_NU,    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_NU,
    U_NU,    KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, U_NU,    U_NU,    KC_RSFT, KC_RCTL, KC_RALT, KC_RGUI, U_NU,
    U_NU,    U_UND,   U_CUT,   U_CPY,   U_PST,   U_RDO,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_NU,
                               KC_BTN3, KC_BTN1, KC_BTN2, KC_BTN2, KC_BTN1, KC_BTN3
  ),

  [U_NAV] = LAYOUT_3x6_3(
    U_NU,    TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE),  U_NA,   U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_NU,
    U_NU,    KC_LGUI,       KC_LALT,        KC_LCTL,          KC_LSFT,          U_NA,   KC_CAPS, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, U_NU,
    U_NU,    U_NA,          KC_ALGR,        TD(U_TD_U_NUM),   TD(U_TD_U_NAV),   U_NA,   KC_INS,  KC_HOME, KC_PGDN, KC_PGUP, KC_END,  U_NU,
                                            U_NA,             U_NA,             U_NA,   KC_ENT,  KC_BSPC, KC_DEL
  ),

  [U_MOUSE] = LAYOUT_3x6_3(
    U_NU,    TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE),  U_NA,    U_RDO,   U_PST,   U_CPY,   U_CUT,   U_UND,   U_NU,
    U_NU,    KC_LGUI,       KC_LALT,        KC_LCTL, KC_LSFT, U_NA,             U_NU,    KC_MS_L, KC_MS_D, KC_MS_U, KC_MS_R, U_NU,
    U_NU,    U_NA,          KC_ALGR,        TD(U_TD_U_SYM),   TD(U_TD_U_MOUSE), U_NA,    U_NU,    KC_WH_L, KC_WH_D, KC_WH_U, KC_WH_R, U_NU,
                            U_NA,           U_NA,             U_NA,             KC_BTN2, KC_BTN1, KC_BTN3
  ),

  [U_MEDIA] = LAYOUT_3x6_3(
    U_NU,    TD(U_TD_BOOT), TD(U_TD_U_TAP), TD(U_TD_U_EXTRA), TD(U_TD_U_BASE),  U_NA,    RGB_TOG, RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, U_NU,
    U_NU,    KC_LGUI,       KC_LALT,        KC_LCTL,          KC_LSFT,          U_NA,    U_NU,    KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, U_NU,
    U_NU,    U_NA,          KC_ALGR,        TD(U_TD_U_FUN),   TD(U_TD_U_MEDIA), U_NA,    OU_AUTO, U_NU,    U_NU,    U_NU,    U_NU,    U_NU,
                                            U_NA,             U_NA,             U_NA,    KC_MSTP, KC_MPLY, KC_MUTE
  ),

  [U_NUM] = LAYOUT_3x6_3(
    U_NU,    KC_LBRC, KC_7,    KC_8,    KC_9,    KC_RBRC, U_NA,    TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NU,
    U_NU,    KC_SCLN, KC_4,    KC_5,    KC_6,    KC_EQL,  U_NA,    KC_RSFT,         KC_RCTL,          KC_LALT,        KC_RGUI,       U_NU,
    U_NU,    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_BSLS, U_NA,    TD(U_TD_U_NUM),  TD(U_TD_U_NAV),   KC_ALGR,        U_NA,          U_NU,
                               KC_DOT,  KC_0,    KC_MINS, U_NA,    U_NA,            U_NA
  ),

  [U_SYM] = LAYOUT_3x6_3(
    U_NU,    KC_LCBR, KC_AMPR, KC_ASTR, KC_LPRN, KC_RCBR, U_NA,    TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NU,
    U_NU,    KC_COLN, KC_DLR,  KC_PERC, KC_CIRC, KC_PLUS, U_NA,    KC_RSFT,         KC_RCTL,          KC_LALT,        KC_RGUI,       U_NU,
    U_NU,    KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_PIPE, U_NA,    TD(U_TD_U_SYM),  TD(U_TD_U_MOUSE), KC_ALGR,        U_NA,          U_NU,
                               KC_LPRN, KC_RPRN, KC_UNDS, U_NA,    U_NA,    U_NA
  ),

  [U_FUN] = LAYOUT_3x6_3(
    U_NU,    KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR, U_NA,    TD(U_TD_U_BASE), TD(U_TD_U_EXTRA), TD(U_TD_U_TAP), TD(U_TD_BOOT), U_NU,
    U_NU,    KC_F11,  KC_F4,   KC_F5,   KC_F6,   U_SCRL,  U_NA,    KC_RSFT,         KC_RCTL,          KC_LALT,        KC_RGUI,       U_NU,
    U_NU,    KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUS, U_NA,    TD(U_TD_U_FUN),  TD(U_TD_U_MEDIA), KC_ALGR,        U_NA,          U_NU,
                               KC_APP,  KC_SPC,  KC_TAB,  U_NA,    U_NA,            U_NA
  ),

  [U_STENO] = LAYOUT_3x6_3(
    STN_RES1,        STN_N1, STN_N2, STN_N3, STN_N4,  STN_N5,   STN_N6,  STN_N7, STN_N8, STN_N9, STN_NA, STN_FN,
    TD(U_TD_U_NKRO), STN_S1, STN_TL, STN_PL, STN_HL, STN_ST1,   STN_ST3, STN_FR, STN_PR, STN_LR, STN_TR, STN_DR,
    TD(U_TD_U_BASE), STN_S2, STN_KL, STN_WL, STN_RL, STN_ST2,   STN_ST4, STN_RR, STN_BR, STN_GR, STN_SR, STN_ZR,
                                     STN_NB, STN_A,  STN_O,     STN_E,   STN_U,  STN_NC
  ),

  [U_NKRO] = LAYOUT_3x6_3(
    KC_GRAVE,         KC_1, KC_2, KC_3, KC_4, KC_5,   KC_6, KC_7, KC_8, KC_9, KC_0,    KC_MINS,
    TD(U_TD_U_STENO), KC_Q, KC_W, KC_E, KC_R, KC_T,   KC_Y, KC_U, KC_I, KC_O, KC_P,    KC_LBRC,
    TD(U_TD_U_BASE),  KC_A, KC_S, KC_D, KC_F, KC_G,   KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT,
                                  KC_C, KC_V, KC_Z,   KC_X, KC_N, KC_M
  ),

  // The Joystick Layers
  [U_DPAD] = LAYOUT_3x6_3(
    JS_HOM,          JS_SEL,   JS_STRT, JS_UP,   XXXXXXX, JS_L3,      JS_R3,    JS_SQU,  JS_TRI,  JS_R1,   JS_L1,   XXXXXXX,
    XXXXXXX,         XXXXXXX,  JS_LT,   JS_DN,   JS_RT,   XXXXXXX,    XXXXXXX,  JS_CRO,  JS_CIR,  JS_R2,   JS_L2,   XXXXXXX,
    TD(U_TD_U_BASE), XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                              TD(U_TD_U_LSTICK), JS_UP,   JS_UP,      JS_UP,    JS_UP,   XXXXXXX
  ),

  [U_LSTICK] = LAYOUT_3x6_3(
    JS_HOM,          JS_SEL,  JS_STRT, JS_UP,   XXXXXXX,   JS_L3,   JS_R3,   JS_SQU,  JS_TRI,  JS_R1,   JS_L1,   XXXXXXX,
    XXXXXXX,         XXXXXXX, JS_LT,   JS_DN,   JS_RT,     XXXXXXX, XXXXXXX, JS_CRO,  JS_CIR,  JS_R2,   JS_L2,   XXXXXXX,
    TD(U_TD_U_BASE), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                              XXXXXXX, JS_UP,     JS_UP,   JS_UP,   JS_UP,   TD(U_TD_U_DPAD)
  ),

  [U_SOCDN] = LAYOUT_3x6_3(
    JS_HOM,  JS_SEL,  JS_STRT, JS_UP_N, XXXXXXX, JS_L3,    JS_R3,   JS_SQU,  JS_TRI,  JS_R1,   JS_L1,   XXXXXXX,
    XXXXXXX, XXXXXXX, JS_LT,   JS_DN_N, JS_RT,   XXXXXXX,  XXXXXXX, JS_CRO,  JS_CIR,  JS_R2,   JS_L2,   XXXXXXX,
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                               _______, JS_UP_N, JS_UP_N,  JS_UP_N, JS_UP_N, _______
  ),

  [U_SOCDLIP] = LAYOUT_3x6_3(
    JS_HOM,  JS_SEL,  JS_STRT,   JS_UP_LIP, XXXXXXX,    JS_L3,       JS_R3,     JS_SQU,    JS_TRI,  JS_R1,   JS_L1,   XXXXXXX,
    XXXXXXX, XXXXXXX, JS_LT_LIP, JS_DN_LIP, JS_RT_LIP,  XXXXXXX,     XXXXXXX,   JS_CRO,    JS_CIR,  JS_R2,   JS_L2,   XXXXXXX,
    _______, XXXXXXX, XXXXXXX,   XXXXXXX,   XXXXXXX,    XXXXXXX,     XXXXXXX,   XXXXXXX,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                 _______,   JS_UP_LIP,  JS_UP_LIP,   JS_UP_LIP, JS_UP_LIP, _______
  )
};


// shift functions

const key_override_t capsword_key_override = ko_make_basic(MOD_MASK_SHIFT, CW_TOGG, KC_CAPS);

const key_override_t **key_overrides = (const key_override_t *[]){
    &capsword_key_override,
    NULL
};

const uint16_t PROGMEM socd_s_activate[]   = {JS_HOM, JS_STRT, COMBO_END};
const uint16_t PROGMEM socd_n_activate[]   = {JS_HOM, JS_L3, COMBO_END};
const uint16_t PROGMEM socd_i_activate[]   = {JS_HOM, JS_R3, COMBO_END};

combo_t key_combos[] = {
    COMBO(socd_s_activate, TO(U_DPAD)),
    COMBO(socd_n_activate, TO(U_SOCDN)),
    COMBO(socd_i_activate, TO(U_SOCDLIP)),
};

bool DPAD_ACTIVE = true;
bool LSTICK_ACTIVE = false;

layer_state_t layer_state_set_user(layer_state_t state) {


    if (IS_LAYER_ON_STATE(state, U_DPAD)) {
        DPAD_ACTIVE = true;
        LSTICK_ACTIVE = false;
    } else if (IS_LAYER_ON_STATE(state, U_LSTICK)) {
        DPAD_ACTIVE = false;
        LSTICK_ACTIVE = true;
    }

    // base layer to deactivate all joystick state
    if (IS_LAYER_ON_STATE(state, U_BASE)) {
        DPAD_ACTIVE = false;
        LSTICK_ACTIVE = false;
    }

    // or uint8_t layer = get_highest_layer(state);
    switch (get_highest_layer(state)) {
        case (U_DPAD):
        case (U_LSTICK):
        case (U_SOCDN):
        case (U_SOCDLIP):
          // both LEDs on
          gpio_write_pin_high(A0);
          gpio_write_pin_high(A1);
          break;
        case (U_STENO):
          //green LED on
          // red LED off
          gpio_write_pin_high(A1);
          gpio_write_pin_low(A0);
          break;
        case (U_NKRO):
          // red LED on
          // green LED off
          gpio_write_pin_high(A0);
          gpio_write_pin_low(A1);
          break;
        default:
          // default for Miryoku layers
          gpio_write_pin_low(A0);
          gpio_write_pin_low(A1);
          break;
    }

    return state;
}

/* uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) { */
/*     return 300; */
/* } */







/* Start Joystick configurations and macros */
bool UP_FLAG = false;
bool DN_FLAG = false;
bool LT_FLAG = false;
bool RT_FLAG = false;

// left stick axis 0,1  |  right stick axis 2,3
joystick_config_t joystick_axes[JOYSTICK_AXIS_COUNT] = {
	JOYSTICK_AXIS_VIRTUAL, // x
	JOYSTICK_AXIS_VIRTUAL, // y
};

// Input Map
// UP:    button 12 | LS Axis (1, -127) | RS Axis (3, -127)
// DOWN:  button 13 | LS Axis (1, 127)  | RS Axis (3, 127)
// LEFT:  button 14 | LS Axis (0, -127) | RS Axis (2, -127)
// RIGHT: button 15 | LS Axis (0, 127)  | RS Axis (2, 127)

// SOCD: up+down = up
bool joy_up(bool ok) {
	if (ok) {
		UP_FLAG = true;
		if (DN_FLAG) {
		 DPAD_ACTIVE ? unregister_joystick_button(13): joystick_set_axis(1, 0);
		}
		 DPAD_ACTIVE ? register_joystick_button(12): joystick_set_axis(1, -127);
	} else {
		UP_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(12): joystick_set_axis(1, 0);
		if (DN_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(13): joystick_set_axis(1, 127);
		}
	}
	return false;
}

// SOCD: down+up = up
bool joy_dn(bool ok) {
	if (ok) {
		DN_FLAG = true;
		if (!UP_FLAG) {
		 DPAD_ACTIVE ? register_joystick_button(13): joystick_set_axis(1, 127);
		}
	} else {
		DN_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(13): joystick_set_axis(1, 0);
		if (UP_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(12): joystick_set_axis(1, -127);
		}
	}
	return false;
}

// SOCD true neutral: up+down = neutral
bool joy_up_n(bool ok) {
	if (ok) {
		UP_FLAG = true;
		if (DN_FLAG) {
		 DPAD_ACTIVE ? unregister_joystick_button(13): joystick_set_axis(1, 0);
		} else {
			DPAD_ACTIVE ? register_joystick_button(12): joystick_set_axis(1, -127);
		}
	} else {
		UP_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(12): joystick_set_axis(1, 0);
		if(DN_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(13): joystick_set_axis(1, 127);
		}
	}
	return false;
}

// SOCD true neutral: down+up = neutral
bool joy_dn_n(bool ok) {
	if (ok) {
		DN_FLAG = true;
		if (UP_FLAG) {
		 DPAD_ACTIVE ? unregister_joystick_button(12): joystick_set_axis(1, 0);
		} else {
			DPAD_ACTIVE ? register_joystick_button(13): joystick_set_axis(1, 127);
		}
	} else {
		DN_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(13): joystick_set_axis(1, 0);
		if(UP_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(12): joystick_set_axis(1, -127);
		}
	}
	return false;
}


// SOCD last input priority: up+down = down
bool joy_up_lip(bool ok) {
	if (ok) {
		UP_FLAG = true;
		if (DN_FLAG) {
		 DPAD_ACTIVE ? unregister_joystick_button(13): joystick_set_axis(1, 0);
		}
		 DPAD_ACTIVE ? register_joystick_button(12): joystick_set_axis(1, -127);
	} else {
		UP_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(12): joystick_set_axis(1, 0);
		if(DN_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(13): joystick_set_axis(1, 127);
		}
	}
	return false;
}

// SOCD last input priority: down+up = up
bool joy_dn_lip(bool ok) {
	if (ok) {
		DN_FLAG = true;
		if (UP_FLAG) {
		 DPAD_ACTIVE ? unregister_joystick_button(12): joystick_set_axis(1, 0);
		}
		DPAD_ACTIVE ? register_joystick_button(13): joystick_set_axis(1, 127);
	} else {
		DN_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(13): joystick_set_axis(1, 0);
		if(UP_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(12): joystick_set_axis(1, -127);
		}
	}
	return false;
}

// SOCD: left+right = neutral
bool joy_lt(bool ok) {
	if (ok) {
		LT_FLAG = true;
		if (RT_FLAG) {
		 	DPAD_ACTIVE ? unregister_joystick_button(15): joystick_set_axis(0, 0);
		} else {
			DPAD_ACTIVE ? register_joystick_button(14): joystick_set_axis(0, -127);
		}
	} else {
		LT_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(14): joystick_set_axis(0, 0);
		if(RT_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(15): joystick_set_axis(0, 127);
		}
	}
	return false;
}

// SOCD: right+left = neutral
bool joy_rt(bool ok) {
	if (ok) {
		RT_FLAG = true;
		if (LT_FLAG) {
		 	DPAD_ACTIVE ? unregister_joystick_button(14): joystick_set_axis(0, 0);
		} else {
			DPAD_ACTIVE ? register_joystick_button(15): joystick_set_axis(0, 127);
		}
	} else {
		RT_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(15): joystick_set_axis(0, 0);
		if(LT_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(14): joystick_set_axis(0, -127);
		}
	}
	return false;
}

// SOCD Last Input Priority: left+right = right
bool joy_lt_lip(bool ok) {
	if (ok) {
		LT_FLAG = true;
		if (RT_FLAG) {
		 	DPAD_ACTIVE ? unregister_joystick_button(15): joystick_set_axis(0, 0);
		}
		DPAD_ACTIVE ? register_joystick_button(14): joystick_set_axis(0, -127);
	} else {
		LT_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(14): joystick_set_axis(0, 0);
		if(RT_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(15): joystick_set_axis(0, 127);
		}
	}
	return false;
}

// SOCD Last Input Priority: right+left = left
bool joy_rt_lip(bool ok) {
	if (ok) {
		RT_FLAG = true;
		if (LT_FLAG) {
		 	DPAD_ACTIVE ? unregister_joystick_button(14): joystick_set_axis(0, 0);
		}
		DPAD_ACTIVE ? register_joystick_button(15): joystick_set_axis(0, 127);
	} else {
		RT_FLAG = false;
		DPAD_ACTIVE ? unregister_joystick_button(15): joystick_set_axis(0, 0);
		if(LT_FLAG) {
			DPAD_ACTIVE ? register_joystick_button(14): joystick_set_axis(0, -127);
		}
	}
	return false;
}

bool joy_x(bool ok, uint8_t button) {
	ok ? register_joystick_button(button): unregister_joystick_button(button);
	return false;
}

// The order of button numbering is following the button report number from the good ol PS3 joystick
// e.g. Cross = button 0, Circle = button 1, ... , Home = button 16
bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	bool p = record->event.pressed;
	switch (keycode) {
		case JS_CRO:
			return joy_x(p, 0);
		case JS_CIR:
			return joy_x(p, 1);
		case JS_SQU:
			return joy_x(p, 2);
		case JS_TRI:
			return joy_x(p, 3);
		case JS_L1:
			return joy_x(p, 4);
		case JS_R1:
			return joy_x(p, 5);
		case JS_L2:
			return joy_x(p, 6);
		case JS_R2:
			return joy_x(p, 7);
		case JS_SEL:
			return joy_x(p, 8);
		case JS_STRT:
			return joy_x(p, 9);
		case JS_L3:
			return joy_x(p, 10);
		case JS_R3:
			return joy_x(p, 11);

		// DPAD and Stick buttons
		case JS_UP:
			return joy_up(p); // button 12 | LS Axis (1, -127) with standard SOCD
		case JS_DN:
			return joy_dn(p); // button 13 | LS Axis (1, 127) with standard SOCD
		case JS_LT:
			return joy_lt(p); // button 14 | LS Axis (0, -127) with standard SOCD
		case JS_RT:
			return joy_rt(p); // button 15 | LS Axis (0, 127) with standard SOCD

		case JS_UP_N:
			return joy_up_n(p); // apply true neutral SOCD
		case JS_DN_N:
			return joy_dn_n(p); // appy true neutral SOCD

		case JS_UP_LIP:
			return joy_up_lip(p); // apply last input priority SOCD
		case JS_DN_LIP:
			return joy_dn_lip(p); // apply last input priority SOCD
		case JS_LT_LIP:
			return joy_lt_lip(p); // apply last input priority SOCD
		case JS_RT_LIP:
			return joy_rt_lip(p); // apply last input priority SOCD

		// PS Home button
		case JS_HOM:
			return joy_x(p, 16);

		default:
			return true;
	}
};
