/* Copyright 2021 Nathan Olivares 
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

#pragma once

//#include "config_common.h"

/* key matrix size */
/* #define MATRIX_ROWS 4 */
/* #define MATRIX_COLS 12 */

/* #define MATRIX_COL_PINS { B15, B14, B13, B12, B1, B0, B9, B6, B5, B4, B3, A15 } */
/* #define MATRIX_ROW_PINS { B8, B7, A7, A6 } */
/* #define DIODE_DIRECTION COL2ROW */

/* /\* Set 0 if debouncing isn't needed *\/ */
#define DEBOUNCE    5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* #define COMBO_COUNT 40 // 42 with uppers, 21 without */
#define TAPPING_TERM 190
#define COMBO_TERM 35
/* #define FORCE_NKRO */
/* #define TAPPING_TERM_PER_KEY */

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat
#define QUICK_TAP_TERM 60

// Enable retro tapping
//#define RETRO_TAPPING
#define DUMMY_MOD_NEUTRALIZER_KEYCODE KC_RIGHT_CTRL // or

//#define HOLD_ON_OTHER_KEY_PRESS
#define PERMISSIVE_HOLD

// Activate CAPS WORD by pressing Left Shift + Right
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
#define CAPS_WORD_INVERT_ON_SHIFT
#define CAPS_WORD_IDLE_TIMEOUT 0
// Activate Command with Left Ctrl + Right Ctrl.
#define IS_COMMAND() (get_mods() == MOD_MASK_CTRL)

// Auto shift
//#define NO_AUTO_SHIFT_ALPHA
//#define AUTO_SHIFT_TIMEOUT TAPPING_TERM
//#define AUTO_SHIFT_NO_SETUP

// Mouse key speed and acceleration.
#undef MOUSEKEY_DELAY
#define MOUSEKEY_DELAY          0
#undef MOUSEKEY_INTERVAL
#define MOUSEKEY_INTERVAL       16
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY    0
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED      6
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX    64
