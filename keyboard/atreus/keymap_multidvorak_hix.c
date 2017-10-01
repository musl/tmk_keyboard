
#include "keymap_common.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * 0: soft-dvorak, hard-qwerty
   * KC_MINS and KC_LBRC are inverse-dvorakized
   */
  KEYMAP(
    KC_Q,   KC_W,   KC_E,     KC_R,     KC_T,                       KC_Y,   KC_U,   KC_I,     KC_O,     KC_P,    \
    KC_A,   KC_S,   KC_D,     KC_F,     KC_G,                       KC_H,   KC_J,   KC_K,     KC_L,     KC_SCLN, \
    KC_Z,   KC_X,   KC_C,     KC_V,     KC_B,                       KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH, \
    KC_ESC, KC_TAB, KC_LGUI,  KC_LSFT,  KC_BSPC,  KC_FN20, KC_FN21, KC_SPC, KC_FN0, KC_QUOT,  KC_LBRC,  KC_ENT   \
  ),

  /*
   * 1: fn with undvorak-ized punctuation
   */
  KEYMAP(
        SHIFT(KC_1),  SHIFT(KC_2),    KC_UP,        SHIFT(KC_MINS),  SHIFT(KC_EQUAL),                      KC_PGUP,   KC_7,     KC_8,    KC_9,    SHIFT(KC_8),     \
        SHIFT(KC_3),  KC_LEFT,        KC_DOWN,      KC_RIGHT,        SHIFT(KC_4),                          KC_PGDN,   KC_4,     KC_5,    KC_6,    SHIFT(KC_RBRC),  \
        KC_MINS,      KC_EQUAL,       SHIFT(KC_9),  SHIFT(KC_0),     SHIFT(KC_7),                          KC_GRAVE,  KC_1,     KC_2,    KC_3,    KC_BSLS,         \
        KC_FN1,       SHIFT(KC_INS),  KC_LGUI,      KC_LSFT,         KC_BSPC,           KC_FN20, KC_FN21,  KC_SPC,    KC_FN0,   KC_E,    KC_0,    KC_RBRC          \
  ),

  /*
   * 2: arrows and function keys
   */
  KEYMAP(
        KC_INS,  KC_HOME,      KC_UP,    KC_END,    KC_PGUP,                      KC_UP,    KC_F7,    KC_F8,      KC_F9,    KC_F10,   \
        KC_DEL,  KC_LEFT,      KC_DOWN,  KC_RIGHT,  KC_PGDN,                      KC_DOWN,  KC_F4,    KC_F5,      KC_F6,    KC_F11,   \
        KC_NO,   KC__VOLUP,    KC_NO,    KC_NO,     KC_FN30,                      KC_NO,    KC_F1,    KC_F2,      KC_F3,    KC_F12,   \
        KC_FN3,  KC__VOLDOWN,  KC_LGUI,  KC_LSFT,   KC_BSPC,  KC_FN20,  KC_FN21,  KC_SPC,   KC_FN2,   KC_PSCREEN, KC_SLCK,  KC_PAUSE  \
  ),

  /*
   * 3: hard dvorak
   */
  KEYMAP(
        KC_QUOT,  KC_COMM,  KC_DOT,   KC_P,     KC_Y,                         KC_F,   KC_G,   KC_C,   	KC_R,   	KC_L,   \
        KC_A,     KC_O,     KC_E,     KC_U,     KC_I,                         KC_D,   KC_H,   KC_T,   	KC_N,   	KC_S,   \
        KC_SCLN,  KC_Q,     KC_J,     KC_K,     KC_X,                         KC_B,   KC_M,   KC_W,   	KC_V,   	KC_Z,   \
        KC_ESC,   KC_TAB,   KC_LGUI,  KC_LSFT,  KC_BSPC,  KC_FN20,  KC_FN21,  KC_SPC, KC_FN4, KC_QUOT,  KC_SLSH,	KC_ENT  \
  ),

  /*
   * 4: hard dvorak fn
   */
  KEYMAP(
        SHIFT(KC_1),  SHIFT(KC_2),    KC_UP,        SHIFT(KC_MINS),  SHIFT(KC_EQUAL),                       KC_PGUP,  KC_7,   KC_8,   KC_9, SHIFT(KC_8),    \
        SHIFT(KC_3),  KC_LEFT,        KC_DOWN,      KC_RIGHT,        SHIFT(KC_4),                           KC_PGDN,  KC_4,   KC_5,   KC_6, SHIFT(KC_RBRC), \
        KC_MINS,      KC_EQUAL,       SHIFT(KC_9),  SHIFT(KC_0),     SHIFT(KC_7),                           KC_GRAVE, KC_1,   KC_2,   KC_3, KC_BSLS,        \
        KC_FN5,       SHIFT(KC_INS),  KC_LGUI,      KC_LSFT,         KC_BSPC,          KC_FN20,   KC_FN21,  KC_SPC,   KC_FN4, KC_DOT, KC_0, KC_EQUAL        \
  ),

  /*
   * 5: hard dvorak L2
   */
  KEYMAP(
        KC_INS,  KC_HOME,  KC_UP,    KC_END,    KC_PGUP,                      KC_UP,    KC_F7,    KC_F8,   KC_F9,   KC_F10,  \
        KC_DEL,  KC_LEFT,  KC_DOWN,  KC_RIGHT,  KC_PGDN,                      KC_DOWN,  KC_F4,    KC_F5,   KC_F6,   KC_F11,  \
        KC_NO,   KC_NO,    KC_NO,    KC_NO,     KC_FN30,                      KC_NO,    KC_F1,    KC_F2,   KC_F3,   KC_F12,  \
        KC_FN19, KC_NO,    KC_LGUI,  KC_LSFT,   KC_BSPC,  KC_FN20,  KC_FN21,  KC_SPC,   KC_FN6,   KC_NO,   KC_NO,   KC_NO    \
  )

};

const uint16_t PROGMEM fn_actions[] = {
  /*
   * Soft Dvorak
   */
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_ON(2, 1),
  [2] = ACTION_LAYER_OFF(2, 1),
  [3] = ACTION_LAYER_ON(3, 1),
  
  /*
   * Hard Dvorak
   */
  [4] = ACTION_LAYER_MOMENTARY(4),
  [5] = ACTION_LAYER_ON(5, 1),
  [6] = ACTION_LAYER_OFF(5, 1),

  /*
   * Clear all layers, return to layer 0.
   */
  [19] = ACTION_LAYER_CLEAR(1),

  /*
   * Tap / Hold Keys
   */
  [20] = ACTION_MODS_TAP_KEY(MOD_LALT, KC_ESC),
  [21] = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ENTER),

  /*
   * Bootloader
   */
  [30] = ACTION_FUNCTION(BOOTLOADER)
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  if (id == BOOTLOADER) {
    bootloader();
  }
}

