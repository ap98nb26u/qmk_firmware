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
#include "keymap_tron.h"
#include <stdio.h>

enum layer_number {
  _EISU = 0,
  _KANA,
  _LOWER,
  _RAISE,
  _FN,
  _NUM,
  _ADJUST
};

#define CT_PAUS C(KC_PAUS)
#define MT_RCTL MT(MOD_RCTL, KC_ENT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_EISU] = LAYOUT(
  //'--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------.
       KC_ESC,    JP_1,    JP_2,    JP_3,    JP_4,    JP_5, JP_MINS,      JP_CIRC,    JP_6,    JP_7,    JP_8,    JP_9,    JP_0,  JP_YEN,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
       KC_TAB,    JP_Q,    JP_W,    JP_E,    JP_R,    JP_T,   JP_AT,      JP_LBRC,    JP_Y,    JP_U,    JP_I,    JP_O,    JP_P, JP_BSLS,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL,    JP_A,    JP_S,    JP_D,    JP_F,    JP_G, JP_COLN,      JP_RBRC,    JP_H,    JP_J,    JP_K,    JP_L, JP_SCLN, MT_RCTL,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    JP_Z,    JP_X,    JP_C,    JP_V,    JP_B,  KC_DEL,       KC_ENT,    JP_N,    JP_M, JP_COMM,  JP_DOT, JP_SLSH, KC_RSFT,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
       KC_LFN,   KC_LALT,   KC_LGUI,   KC_ESC,    KC_SPC,      EISU,         KANA,    KC_SPC,   KC_BSPC,  KC_RGUI,   KC_RALT,    KC_RFN
  //`--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------'
  ),
  [_KANA] = LAYOUT(
  //'--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------.
      _______,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, JP_DASH,      JP_213F,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, JP_CELC,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP_RA,   JP_RU,   JP_KO,   JP_HA,   JP_yo, JP_2177,      JP_2161,   JP_KI,   JP_NO,   JP_KU,   JP__A,   JP_RE, JP_HIPH,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP_TA,   JP_TO,   JP_KA,   JP_TE,   JP_MO, JP_2128,      JP_HIKU,   JP_WO,   JP__I,   JP__U,   JP_SI,   JP_NN, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP_MA,   JP_RI,   JP_NI,   JP_SA,   JP_NA, _______,      _______,   JP_SU,   JP_TU, JP_TOTN, JP_KUTN,   JP_tu, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   _______,   _______,  _______,     LOWER,   _______,      _______,     RAISE,   _______,  _______,   _______,   _______
  //`--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------'
  ),
    [_LOWER] = LAYOUT(
  //'--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------.
      _______, JP_TDLD, JP_LSQT, JP_LDQT, JP_LSKK, JP_LDKK, JP_2175,      JP_2176, JP_2163, JP_LPRN, JP_LCBR, JP_214E, JP_2140, JP_212E,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP_HI,   JP_SO, JP_CDOT,   JP_ya,   JP_HO, JP_2170,      JP_2174,   JP_GI,   JP_GE,   JP_GU, JP_KOME,   JP_WI, JP_2132,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP_NU,   JP_NE,   JP_yu,   JP_YO,   JP_HU, JP_2130,      JP_TASU, JP_DKTN,   JP_DI,   JP_VU,   JP_ZI,   JP_WE, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP__e,   JP__o,   JP_SE,   JP_YU,   JP_HE, _______,      _______,   JP_ZU,   JP_DU, JP_COMM,  JP_DOT,   JP_wa, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   _______,   _______,  _______,   _______,   _______,      _______,   _______,   _______,  _______,   _______,   _______
  //`--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------'
  ),
    [_RAISE] = LAYOUT(
  //'--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------.
      _______, JP_2141, JP_RSQT, JP_RDQT, JP_RSKK, JP_RDKK, JP_212A,      JP_MULT, JP_2164, JP_RPRN, JP_RCBR, JP_214F, JP_2143, JP_DIT6,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP_BI,   JP_ZO,   JP_GO,   JP_BA,   JP_BO, JP_216F,      JP_2173,    JP_E,   JP_KE,   JP_ME,   JP_MU,   JP_RO, JP_2129,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP_DA,   JP_DO,   JP_GA,   JP_DE,   JP_BU, JP_2127,       JP_DIV,    JP_O,   JP_TI, JP_TYOU,   JP_MI,   JP_YA, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   JP_ka,   JP_ke,   JP_ZE,   JP_ZA,   JP_BE, _______,      _______,   JP_WA,   JP__i,   JP__a, JP_HNDK,   JP__u, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   _______,   _______,  _______,   _______,   _______,      _______,   _______,   _______,  _______,   _______,   _______
  //`--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------'
  ),
  [_FN] = LAYOUT(
  //'--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------.
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,  KC_F11,       KC_F12,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_NUM,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, KC_BTN1, KC_MS_U, KC_BTN2, KC_VOLU, XXXXXXX,      CT_PAUS, KC_PAUS, KC_PGUP,   KC_UP, KC_HOME, KC_PSCR, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______, KC_WH_U, KC_MS_L, KC_MS_D, KC_MS_R, KC_VOLD,  KC_INS,      XXXXXXX, KC_SCRL, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______, KC_WH_D, XXXXXXX, KC_BTN3, XXXXXXX, KC_MUTE, _______,      _______, XXXXXXX, KC_PGDN, XXXXXXX,  KC_END, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   _______,   _______,  _______,   _______,   _______,      _______,   _______,   _______,  _______,   _______,   _______
  //`--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------'
  ),
  [_NUM] = LAYOUT(
  //'--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------.
    TO(_EISU),    JP_1,    JP_2,    JP_3, JP_PLUS, XXXXXXX, XXXXXXX,       KC_ESC, JP_SLSH,    JP_7,    JP_8,    JP_9,    JP_A,TO(_EISU),
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX,    JP_4,    JP_5,    JP_6, JP_LPRN, XXXXXXX, XXXXXXX,       JP_EQL, JP_ASTR,    JP_4,    JP_5,    JP_6,    JP_B, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,    JP_7,    JP_8,    JP_9, JP_MINS, XXXXXXX, XXXXXXX,      XXXXXXX, JP_MINS,    JP_1,    JP_2,    JP_3,    JP_C, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______, JP_ASTR,    JP_0, JP_HASH, JP_RPRN, XXXXXXX, _______,      _______, JP_PLUS,    JP_0,    JP_F,    JP_E,    JP_D, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   _______,   _______,  _______,   _______,   _______,      _______,   _______,   _______,  _______,   _______,   _______
  //`--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------'
  ),
  [_ADJUST] = LAYOUT(
  //'--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------.
      QK_BOOT, XXXXXXX,  QK_RBT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,      _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
  //|--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------|
      _______,   _______,   _______,  _______,   _______,   _______,      _______,   _______,   _______,  _______,   _______,   _______
  //`--------+--------+--------+--------+--------+--------+--------+----+--------+--------+--------+--------+--------+--------+--------'
  )
};

// handle dual role RAISE/LOWER keys
static bool lower_pressed = false;
static uint16_t lower_pressed_time = 0;
static bool raise_pressed = false;
static uint16_t raise_pressed_time = 0;

// treat two fn keys as one
static bool left_fn_pressed = false;
static bool right_fn_pressed = false;

// handle dakuten/handakuten
static uint16_t lastkey = KC_NO;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  uint16_t newkey;
  switch (keycode) {
    case EISU:
      if (record->event.pressed) {
        layer_off(_KANA);
        register_code(KC_LNG2); // 英数  works for both Windows and macOS
      } else {
        unregister_code(KC_LNG2);
      }
      return false;
      break;
    case KANA:
      if (record->event.pressed) {
        layer_on(_KANA);
        register_code(KC_LNG1); // かな  works for both Windows and macOS
      } else {
        unregister_code(KC_LNG1);
      }
      return false;
      break;
    case LOWER:
      if (record->event.pressed) {
        lower_pressed = true;
        lower_pressed_time = record->event.time;

        layer_on(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);

        if (lower_pressed && (TIMER_DIFF_16(record->event.time, lower_pressed_time) < TAPPING_TERM)) {
          register_code16(S(KC_SPC)); // 逆変換  works for both Windows and macOS
          unregister_code16(S(KC_SPC));
        }
        lower_pressed = false;
      }
      return false;
      break;
    case RAISE:
      if (record->event.pressed) {
        raise_pressed = true;
        raise_pressed_time = record->event.time;

        layer_on(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer(_LOWER, _RAISE, _ADJUST);

        if (raise_pressed && (TIMER_DIFF_16(record->event.time, raise_pressed_time) < TAPPING_TERM)) {
          register_code(KC_SPC); // 変換  works for both Windows and macOS
          unregister_code(KC_SPC);
        }
        raise_pressed = false;
      }
      return false;
      break;
    case KC_NUM:
      // force the _KANA layer and IME to turn off when moving to the _FN layer
      if (record->event.pressed) {
        layer_off(_KANA);
        layer_on(_NUM);
        register_code(KC_LNG2); // 英数  works for both Windows and macOS
      } else {
        unregister_code(KC_LNG2); // 英数  works for both Windows and macOS
      }
      return false;
      break;
    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;
    case KC_LFN:
      if (record->event.pressed) {
        left_fn_pressed = true;
        if (!right_fn_pressed) layer_on(_FN);
      } else {
        left_fn_pressed = false;
        if (!right_fn_pressed) layer_off(_FN);
      }
      return false;
      break;
    case KC_RFN:
      if (record->event.pressed) {
        right_fn_pressed = true;
        if (!left_fn_pressed) layer_on(_FN);
      } else {
        right_fn_pressed = false;
        if (!left_fn_pressed) layer_off(_FN);
      }
      return false;
      break;
    case JP__A ... JP__O: // JP__U is not here
    case JP_NA ... JP_NO:
    case JP_MA ... JP_MO:
    case JP_YA ... JP_YO:
    case JP_RA ... JP_RO:
    case JP_WA ... JP_WO:
    case JP_NN:
    case JP__a ... JP__o:
    case JP_ya ... JP_yo:
    case JP_tu ... JP_ke:
      // handle normal hiragana (without dakuten or handakuten)
      lastkey = JP_NO;
      if (record->event.pressed) {
        send_string(romaji_to_str[keycode - JP___]);
      } else {
        unregister_code(keymaps[_EISU][record->event.key.row][record->event.key.col]);
      }
      return false;
      break;
    case JP__U:
    case JP_KA ... JP_HO:
    case JP_VU:
    case JP_GA ... JP_PO:
      // handle hiragana which may be marked with dakuten or handakuten
      lastkey = keycode;
      if (record->event.pressed) {
        send_string(romaji_to_str[keycode - JP___]);
      }
      return false;
      break;
    case JP_DKTN:
      // handle dakuten
      if (record->event.pressed) {
        switch (lastkey) {
          case JP__U:
          case JP_KA ... JP_HO:
            // add dakuten if possible
            register_code(KC_BSPC);
            newkey = lastkey + (JP_VU - JP__U);
            send_string(romaji_to_str[newkey-JP___]);
            lastkey = newkey;
            return false;
            break;
          case JP_VU:
          case JP_GA ... JP_BO:
            // remove dakuten
            register_code(KC_BSPC);
            newkey = lastkey + (JP__U - JP_VU);
            send_string(romaji_to_str[newkey-JP___]);
            lastkey = newkey;
            return false;
            break;
          case JP_PA ... JP_PO:
            // replace handakuten to dakuten
            register_code(KC_BSPC);
            newkey = lastkey + (JP_BA - JP_PA);
            send_string(romaji_to_str[newkey-JP___]);
            lastkey = newkey;
            return false;
            break;
          default:
            return false;
            break;
        }
      }
      return false;
      break;
    case JP_HNDK:
      // handle handakuten
      if (record->event.pressed) {
        switch (lastkey) {
          case JP_HA ... JP_HO:
            // add handakuten if possible
            register_code(KC_BSPC);
            newkey = lastkey + (JP_PA - JP_HA);
            send_string(romaji_to_str[newkey-JP___]);
            lastkey = newkey;
            return false;
            break;
          case JP_BA ... JP_BO:
            // replace dakuten to handakuten if possible
            register_code(KC_BSPC);
            newkey = lastkey + (JP_PA - JP_BA);
            send_string(romaji_to_str[newkey-JP___]);
            lastkey = newkey;
            return false;
            break;
          case JP_PA ... JP_PO:
            // remove handakuten
            register_code(KC_BSPC);
            newkey = lastkey + (JP_HA - JP_PA);
            send_string(romaji_to_str[newkey-JP___]);
            lastkey = newkey;
            return false;
            break;
          default:
            return false;
            break;
        }
      }
      return false;
      break;
    case JP_2121 ... JP_LAST:
      // handle characters defined in JISX0208
      lastkey = KC_NO;
      if (record->event.pressed) {
        send_string(romaji_to_str[keycode - JP___]);
      }
      return false;
      break;
    default:
      if (record->event.pressed) {
        // reset the flags
        lower_pressed = false;
        raise_pressed = false;
        // left_fn_pressed and right_fn_pressed should not be cleared
        lastkey = KC_NO;
      }
      return true;
      break;
  }
  return true;
}
