#include QMK_KEYBOARD_H

extern bool isScrollMode;

#ifdef RGBLIGHT_ENABLE
//Following line allows macro to read current RGB settings
extern rgblight_config_t rgblight_config;
#endif


enum layer_names {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  LOWER,
  RAISE,
  RGBRST,
  MBTN1,
  SCRL
};

#define KC______ KC_TRNS
#define KC_XXXXX KC_NO
#define KC_LOWER LOWER
#define KC_RAISE RAISE
#define KC_RST   QK_BOOT
#define KC_LRST  RGBRST
#define KC_LTOG  RGB_TOG
#define KC_LHUI  RGB_HUI
#define KC_LHUD  RGB_HUD
#define KC_LSAI  RGB_SAI
#define KC_LSAD  RGB_SAD
#define KC_LVAI  RGB_VAI
#define KC_LVAD  RGB_VAD
#define KC_LMOD  RGB_MOD

#define KC_CTLA CTL_T(KC_A)
#define KC_CTLSC CTL_T(KC_SCLN)
#define KC_SFTZ SFT_T(KC_Z)
#define KC_SFTSL SFT_T(KC_SLSH)
#define KC_WINX LWIN_T(KC_X)
#define KC_WINDO RWIN_T(KC_DOT)

#define KC_MBTN1  MBTN1
#define KC_SCRL   SCRL

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [_QWERTY] = LAYOUT(
  //,-----------------------------------------.                ,-----------------------------------------.
        KC_ESC,     KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,                      KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,  KC_BSPC,
  //|------+------+------+------+------+------|                |------+------+------+------+------+------|
        KC_TAB,  KC_CTLA,     KC_S,     KC_D,     KC_F,     KC_G,                      KC_H,     KC_J,     KC_K,     KC_L, KC_CTLSC,  KC_QUOT,
  //|------+------+------+------+------+------|                |------+------+------+------+------+------|
      KC_GRAVE,  KC_SFTZ,  KC_WINX,     KC_C,     KC_V,     KC_B,                      KC_N,     KC_M,  KC_COMM, KC_WINDO, KC_SFTSL,KC_BSLS,
  //|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
                                  KC_LOWER,   KC_SPC,  KC_SCRL,    KC_MBTN1,   KC_ENT, KC_RAISE
                              //`--------------------'  `--------------------'
  ),

  [_LOWER] = LAYOUT(
  //,-----------------------------------------.                ,-----------------------------------------.
        KC_ESC, KC_XXXXX,  KC_PGDN,  KC_PSCR,  KC_PGUP,  KC_LBRC,                   KC_RBRC,     KC_7,     KC_8,     KC_9, KC_XXXXX, KC_XXXXX,
  //|------+------+------+------+------+------|                |------+------+------+------+------+------|
      KC_XXXXX, KC_LCTL,   KC_PLUS,  KC_MINS,   KC_EQL,  KC_LPRN,                   KC_RPRN,     KC_4,     KC_5,     KC_6, KC_RCTL,  KC_XXXXX,
  //|------+------+------+------+------+------|                |------+------+------+------+------+------|
      KC_XXXXX,  KC_LSFT,  KC_HOME, KC_XXXXX,   KC_END,  KC_LCBR,                   KC_RCBR,     KC_1,     KC_2,     KC_3,  KC_RSFT, KC_XXXXX,
  //|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
                                  KC_LOWER,   KC_SPC,  KC_SCRL,    KC_MBTN1,   KC_ENT,     KC_0
                              //`--------------------'  `--------------------'
  ),

  [_RAISE] = LAYOUT(
  //,-----------------------------------------.                ,-----------------------------------------.
        KC_ESC, KC_XXXXX,    KC_F7,    KC_F8,    KC_F9,   KC_F10,                   KC_BTN2,  KC_BTN2,  KC_MNXT,  KC_MPRV,  KC_MPLY,  KC_MSTP,
  //|------+------+------+------+------+------|                |------+------+------+------+------+------|
      KC_XXXXX, KC_LCTL,     KC_F4,    KC_F5,    KC_F6,   KC_F11,                   KC_LEFT,  KC_DOWN,    KC_UP, KC_RIGHT, KC_RCTL,  KC_XXXXX,
  //|------+------+------+------+------+------|                |------+------+------+------+------+------|
      KC_XXXXX,  KC_LSFT,    KC_F1,    KC_F2,    KC_F3,   KC_F12,                  KC_XXXXX, KC_XXXXX,  KC_VOLU,  KC_VOLD,  KC_MUTE,  KC_RSFT,
  //|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
                                  KC_LOWER,   KC_SPC,  KC_SCRL,    KC_MBTN1,   KC_ENT, KC_RAISE
                              //`--------------------'  `--------------------'
  ),

  [_ADJUST] = LAYOUT(
  //,-----------------------------------------.                ,-----------------------------------------.
        KC_RST,  KC_LRST, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,                  KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,   KC_RST,
  //|------+------+------+------+------+------|                |------+------+------+------+------+------|
       KC_LTOG,  KC_LHUI,  KC_LSAI,  KC_LVAI, KC_XXXXX, KC_XXXXX,                  KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,
  //|------+------+------+------+------+------|                |------+------+------+------+------+------|
       KC_LMOD,  KC_LHUD,  KC_LSAD,  KC_LVAD, KC_XXXXX, KC_XXXXX,                  KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX, KC_XXXXX,
  //|------+------+------+------+------+------+------|  |------+------+------+------+------+------+------|
                                  KC_LOWER,   KC_SPC,  KC_SCRL,    KC_MBTN1,   KC_ENT, KC_RAISE
                              //`--------------------'  `--------------------'
  )
};

int RGB_current_mode;

void persistent_default_layer_set(uint16_t default_layer) {
  eeconfig_update_default_layer(default_layer);
  default_layer_set(default_layer);
}

// Setting ADJUST layer RGB back to default
void update_tri_layer_RGB(uint8_t layer1, uint8_t layer2, uint8_t layer3) {
  if (IS_LAYER_ON(layer1) && IS_LAYER_ON(layer2)) {
    layer_on(layer3);
  } else {
    layer_off(layer3);
  }
}

void matrix_init_user(void) {
    #ifdef RGBLIGHT_ENABLE
      RGB_current_mode = rgblight_config.mode;
    #endif
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  report_mouse_t currentReport = {};
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        persistent_default_layer_set(1UL<<_QWERTY);
      }
      return false;
    case LOWER:
      if (record->event.pressed) {
        layer_on(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_LOWER);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case RAISE:
      if (record->event.pressed) {
        layer_on(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      } else {
        layer_off(_RAISE);
        update_tri_layer_RGB(_LOWER, _RAISE, _ADJUST);
      }
      return false;
    case RGB_MOD:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          rgblight_mode(RGB_current_mode);
          rgblight_step();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      return false;
    case RGBRST:
      #ifdef RGBLIGHT_ENABLE
        if (record->event.pressed) {
          eeconfig_update_rgblight_default();
          rgblight_enable();
          RGB_current_mode = rgblight_config.mode;
        }
      #endif
      break;
    case MBTN1:
      currentReport = pointing_device_get_report();
      if (record->event.pressed) {
        currentReport.buttons |= MOUSE_BTN1;
      }
      else {
        currentReport.buttons &= ~MOUSE_BTN1;
      }
      pointing_device_set_report(currentReport);
      pointing_device_send();
      return false;
    case SCRL:
      if (record->event.pressed) {
        isScrollMode = true;
      }
      else {
        isScrollMode = false;
      }
      return false;
  }
  return true;
}
