/*
Copyright 2021 Salicylic_Acid

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#include "keymap_japanese.h" // for JP_* symbols
enum layer_number {
  _QWERTY = 0,
  _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------.
       KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, JP_MINS, JP_CIRC,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  JP_YEN,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   JP_AT, JP_LBRC,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, JP_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, JP_COLN, JP_RBRC,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_RCTL,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,  KC_DEL,  KC_ENT,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      MO(_FN),   KC_LALT,   KC_LGUI,   KC_ESC,   JP_MHEN,   JP_EISU, JP_KANA,   JP_HENK,   KC_BSPC,  KC_RGUI,   KC_RALT,   MO(_FN)
  //|-----------------------------------------------------------------------------------------------------------------------------'
  ),
  [_FN] = LAYOUT(
  //,-----------------------------------------------------------------------------------------------------------------------------.
      QK_BOOT,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F11,  KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
       QK_RBT, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, KC_VOLU, XXXXXXX,C(KC_PAUS),KC_PAUS,KC_PGUP,   KC_UP, KC_HOME, KC_PSCR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC_VOLD,  KC_INS, XXXXXXX, KC_SCRL, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______, KC_WH_D, XXXXXXX, KC_BTN3, XXXXXXX, KC_MUTE, _______, _______, XXXXXXX, KC_PGDN, XXXXXXX,  KC_END, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------|
      _______,   _______,   _______,  _______,   _______,   _______, _______,   _______,   _______,  _______,   _______,   _______
  //|-----------------------------------------------------------------------------------------------------------------------------'
  )
};

