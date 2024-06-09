/* Copyright 2021 OpenAnnePro community
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

#include QMK_KEYBOARD_H

// TODO: Add Sway Mod layer (Magic -> MOD)
enum anne_pro_layers {
  BASE,
  FN1,
  FN2,
};

// clang-format off
// Key symbols are based on QMK. Use them to remap your keyboard
/*
* Layer BASE
* ,-----------------------------------------------------------------------------------------.
* | esc |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |    Bksp   |
* |-----------------------------------------------------------------------------------------+
* | Tab    |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  |  [  |  ]  |   \    |
* |-----------------------------------------------------------------------------------------+
* |     FN2     | a |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |   Enter   |
* |-----------------------------------------------------------------------------------------+
* | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |    RShift      |
* |-----------------------------------------------------------------------------------------+
* | Ctrl  |  Alt  |  Mod  |               space             |  Alt  |  FN1  |  FN2  | Ctrl  |
* \-----------------------------------------------------------------------------------------/
*/
 const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 [BASE] = LAYOUT_60_ansi( /* Base */
    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, KC_BSPC,
    KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
    MO(FN2), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
    KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,
    KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, KC_RALT, MO(FN1), MO(FN2), KC_RCTL
),
  /*
  * Layer FN1
  * ,-----------------------------------------------------------------------------------------.
  * | `~  |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |  DELETE   |
  * |-----------------------------------------------------------------------------------------+
  * |        |     |     |     |     |     |     |     |     |     | PS | HOME | END |        |
  * |-----------------------------------------------------------------------------------------+
  * | Caps        |     |     |     |     |     | LEFT | DOWN | UP | RIGHT | PGUP | PGDN |    |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |     | INSRT | DEL |              |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |       |                                 |       |       |  FN2  |       |
  * \-----------------------------------------------------------------------------------------/
  *
  */
 [FN1] = LAYOUT_60_ansi( /* FN1 */
    KC_GRV, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_HOME, KC_END, _______,
    KC_CAPS, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_PGUP, KC_PGDN, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, KC_DEL, _______,
    _______, _______, _______, _______, _______, _______, MO(FN2), _______
),
  /*
  * TODO: Shift+LED_NEXT -> LED_PREV
  * TODO: LED_TGL
  * Layer FN2
  * ,-----------------------------------------------------------------------------------------.
  * | `~ | BT1 | BT2 | BT3 | BT4 | MNX | MPLT | MPRV | LEDP | LEDN | LEDD | VOLD | VOLU | DEL |
  * |-----------------------------------------------------------------------------------------+
  * |        |     |     |     |     |     |     |     |     |     | PS | HOME | END |        |
  * |-----------------------------------------------------------------------------------------+
  * |             |   |    |   |    |    | LEFT | DOWN | UP | RIGHT | PGUP | PGDN |           |
  * |-----------------------------------------------------------------------------------------+
  * |            |     |     |     |     |     |     |     |     | INSRT | DEL |              |
  * |-----------------------------------------------------------------------------------------+
  * |       |       |       |                                |        |  FN1  |       |       |
  * \-----------------------------------------------------------------------------------------/
  *
  */
 [FN2] = LAYOUT_60_ansi( /* FN2 */
    KC_GRV, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_MPRV, KC_MPLY, KC_MNXT, KC_AP_LED_PREV_PROFILE, KC_AP_LED_ON, KC_AP_LED_OFF, KC_VOLD, KC_VOLU, KC_DEL,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_PSCR, KC_HOME, KC_END, _______,
    _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_PGUP, KC_PGDN, _______,
    _______, _______, _______, _______, _______, _______, _______, _______, _______, KC_INS, KC_DEL, _______,
    _______, _______, _______, _______, _______, MO(FN2), _______, _______
 ),
};
// clang-format on

// Code to run after initializing the keyboard
void keyboard_post_init_user(void) {

    ap2_led_enable();

    // Replace "i" with the index of your preferred profile.

    // Static
    // 0: Color Bleed
    // 1: Full White
    // 2: Full Red
    // 3: Full Green
    // 4: Full Blue
    // 5: Vertical Rainbow
    // 6: Horizontal Rainbow
    // 7: Miami Nights

    // Animated
    // 8: Low FPS Animated Horizontal Rainbow
    // 9: High FPS Animated Horizontal Rainbow
    // 10: High FPS Animated Vertical Rainbow
    // 11: Animated Breathing
    // 12: Animated Spectrum
    // 13: Animated Wave

    // Reactive
    // 14: Reactive Fade
    // 15: Reactive Pulse
    // 16: Reactive Term

    ap2_led_set_profile(14);
}

// TODO: Based on default-layer-indicators
// Have keys which changed glow, with different colours to indicate groups
layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case FN1:
            // Set the leds to green
            ap2_led_set_foreground_color(0x00, 0xFF, 0x00);
            break;
        case FN2:
            // Set the leds to blue
            ap2_led_set_foreground_color(0x00, 0x00, 0xFF);
            break;
        default:
            // Reset back to the current profile
            ap2_led_reset_foreground_color();
            break;
    }
    return state;
}

// The function to handle the caps lock logic
// It's called after the capslock changes state or after entering layers 1 and 2.
bool led_update_user(led_t leds) {
    if (leds.caps_lock) {
        // Set the caps-lock to red
        const ap2_led_t color = {.p.red = 0xff, .p.green = 0x00, .p.blue = 0x00, .p.alpha = 0xff};
        ap2_led_sticky_set_key(2, 0, color);
        /* NOTE: Instead of colouring the capslock only, you can change the whole
           keyboard with ap2_led_mask_set_mono */
    } else {
        // Reset the capslock if there is no layer active
        ap2_led_unset_sticky_key(2, 0);
    }

    return true;
}
