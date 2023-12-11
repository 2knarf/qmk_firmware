/* straightforward keymap for programming in DVORAK and gaming in QWERTY, including:
 * - 'space cadet' paretheses on shift keys _and_ brackets on layer 2 shift keys
 * - full numpad and f-key (good for Dwarf Fortress)
 * - vim/spacemacs features: esc easily reachable, :w\n macro key
 *
 * USAGE:
 * 1. install https://github.com/qmk/qmk_distro_msys
 * 2. inside qmk msys (in a new directory), run `qmk clone`
 * 3. download this file into that directory and run `qmk flash`
 */

#include QMK_KEYBOARD_H
#include "led.h"

#define DVO 0
#define QWE 1
#define SYM 2
#define ___ KC_TRNS
#define XXX KC_NO

enum custom_keycode {
    SAVE = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[DVO] = LAYOUT_ergodox_pretty(
      //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐ DVORAK ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
          KC_MEH, KC_1   , KC_2   , KC_3   , KC_4   , KC_5   , KC_PAUS         , XXX    , KC_6   , KC_7   , KC_8   , KC_9   , KC_0   , XXX
      //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤        ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        , KC_LEFT_ALT, KC_QUOT, KC_COMM, KC_DOT , KC_P   , KC_Y   , KC_INS          , XXX    , KC_F   , KC_G   , KC_C   , KC_R   , KC_L   , KC_BSPC
      //├────────┼────────┼────────┼────────┼────────┼────────┤        │        │        ├────────┼────────┼────────┼────────┼────────┼────────┤
        , KC_TAB , KC_A   , KC_O   , KC_E   , KC_U   , KC_I /*├────────┤        ├──────*/, KC_D   , KC_H   , KC_T   , KC_N   , KC_S   , KC_MINS
      //├────────┼────────┼────────┼────────┼────────┼────────┤        │        │        ├────────┼────────┼────────┼────────┼────────┼────────┤
        , KC_KP_SLASH, KC_SCLN, KC_Q   , KC_J   , KC_K   , KC_X   , KC_LGUI         , TG(QWE), KC_B   , KC_M   , KC_W   , KC_V   , KC_Z   , KC_RSPC
      //├────────┼────────┼────────┼────────┼────────┼────────┴────────┘        └────────┴────────┼────────┼────────┼────────┼────────┼────────┤
        , KC_LCTL, KC_HOME, KC_PGDN, KC_PGUP, KC_END                                              , KC_LEFT, KC_UP  , KC_DOWN, KC_RGHT, SAVE
      //└────────┴────────┴────────┴────────┴────────┼────────┬────────┐        ┌────────┬────────┼────────┴────────┴────────┴────────┴────────┘
                                                     , KC_VOLD, KC_VOLU         , KC_BTN4, KC_BTN5
      //                                    ┌────────┼────────┼────────┤        ├────────┼────────┼────────┐
      /*                                    │        │      */, KC_MUTE         , KC_BTN2//       │        │
      //                                    │        │        ├────────┤        ├────────┤        │        │
                                            , KC_SPC , KC_LALT, KC_ESC          , KC_ENT , KC_LCTL, MO(SYM)),
      //                                    └────────┴────────┴────────┘        └────────┴────────┴────────┘
	[QWE] = LAYOUT_ergodox_pretty(
      //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐ QWERTY ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
          KC_CAPS, ___    , ___    , ___    , ___    , ___    , KC_MINS         , KC_EQL , ___    , ___    , ___    , ___    , ___    , ___
      //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤        ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        , ___    , KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   , KC_LBRC         , KC_RBRC, KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   , ___
      //├────────┼────────┼────────┼────────┼────────┼────────┤        │        │        ├────────┼────────┼────────┼────────┼────────┼────────┤
        , ___    , KC_A   , KC_S   , KC_D   , KC_F   , KC_G /*├────────┤        ├──────*/, KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN, XXX
      //├────────┼────────┼────────┼────────┼────────┼────────┤        │        │        ├────────┼────────┼────────┼────────┼────────┼────────┤
        , KC_LSFT, KC_BSLS, KC_Z   , KC_X   , KC_C   , KC_V   , ___             , ___    , KC_B   , KC_N   , KC_M   , KC_COMM, KC_DOT , KC_RSFT
      //├────────┼────────┼────────┼────────┼────────┼────────┴────────┘        └────────┴────────┼────────┼────────┼────────┼────────┼────────┤
        , KC_LCTL, ___    , ___    , ___    , ___                                                 , ___    , ___    , ___    , ___    , KC_RCTL
      //└────────┴────────┴────────┴────────┴────────┼────────┬────────┐        ┌────────┬────────┼────────┴────────┴────────┴────────┴────────┘
                                                     , ___    , ___             , ___    , ___
      //                                    ┌────────┼────────┼────────┤        ├────────┼────────┼────────┐
      /*                                    │        │      */, ___             , ___    //       │        │
      //                                    │        │        ├────────┤        ├────────┤        │        │
                                            , ___    , ___    , ___             , ___    , ___    , ___    ),
      //                                    └────────┴────────┴────────┘        └────────┴────────┴────────┘
	[SYM] = LAYOUT_ergodox_pretty(
      //┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐ SYMBOL ┌────────┬────────┬────────┬────────┬────────┬────────┬────────┐
          ___    , ___    , KC_F10 , KC_F11 , KC_F12 , ___    , ___             , ___    , ___    , KC_P7  , KC_P8  , KC_P9  , ___    , ___
      //├────────┼────────┼────────┼────────┼────────┼────────┼────────┤        ├────────┼────────┼────────┼────────┼────────┼────────┼────────┤
        , ___    , ___    , KC_F7  , KC_F8  , KC_F9  , KC_PIPE, ___             , ___    , KC_QUES, KC_P4  , KC_P5  , KC_P6  , ___    , KC_DEL
      //├────────┼────────┼────────┼────────┼────────┼────────┤        │        │        ├────────┼────────┼────────┼────────┼────────┼────────┤
        , ___    , KC_BSLS, KC_F4  , KC_F5  , KC_F6  , KC_PLUS/*───────┤        ├──────*/, KC_EQL , KC_P1  , KC_P2  , KC_P3  , KC_SLSH, ___
      //├────────┼────────┼────────┼────────┼────────┼────────┤        │        │        ├────────┼────────┼────────┼────────┼────────┼────────┤
, LSFT_T(KC_LBRC), KC_LCBR, KC_F1  , KC_F2  , KC_F3  , KC_TILD, ___             , ___    , KC_HASH, KC_P0  , ___    , KC_PDOT, KC_RCBR, RSFT_T(KC_RBRC)
      //├────────┼────────┼────────┼────────┼────────┼────────┴────────┘        └────────┴────────┼────────┼────────┼────────┼────────┼────────┤
        , ___    , ___    , ___    , ___    , ___                                                 , ___    , ___    , ___    , ___    , ___
      //└────────┴────────┴────────┴────────┴────────┼────────┬────────┐        ┌────────┬────────┼────────┴────────┴────────┴────────┴────────┘
                                                     , KC_MPRV, KC_MNXT         , DEBUG  , RESET
      //                                    ┌────────┼────────┼────────┤        ├────────┼────────┼────────┐
      /*                                    │        │      */, KC_MPLY         , ___    //       │        │
      //                                    │        │        ├────────┤        ├────────┤        │        │
                                            , ___    , ___    , ___             , ___    , ___    , ___    )
      //                                    └────────┴────────┴────────┘        └────────┴────────┴────────┘
};

/* LEDs; indicate current layer and soft glow when CAPS is on */
bool    is_caps_active = false;
uint8_t current_layer = 0;
uint8_t base_layer = 0;

void set_led(uint8_t i){
    if(base_layer == i || current_layer == i){
        ergodox_right_led_set(i+1, LED_BRIGHTNESS_HI);
        ergodox_right_led_on(i+1);
    } else if (is_caps_active){
        ergodox_right_led_set(i+1, 1);
        ergodox_right_led_on(i+1);
    }
    else {ergodox_right_led_off(i+1);}
}

void set_leds(void) {
    set_led(QWE);
    set_led(DVO);
    set_led(SYM);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case DVO:
        current_layer = DVO;
        base_layer = DVO;
        break;
    case QWE:
        current_layer = QWE;
        base_layer = QWE;
        break;
    case SYM:
        current_layer = SYM;
        break;
    default:
        break;
    }
    set_leds();
    return state;
};

bool process_record_user(uint16_t keycode, keyrecord_t *record){
    switch(keycode) {
    case KC_CAPS:
        if (record->event.pressed) {
            if (is_caps_active) { is_caps_active=false; }
            else {is_caps_active=true;}
            set_leds();
        }
        break;
    case SAVE:
        // save file in vim/spacemacs
        if (record->event.pressed) { SEND_STRING(":w\n");}
        break;
    }
    return true;
}
