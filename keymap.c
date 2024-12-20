#include QMK_KEYBOARD_H
#include "definitions.h"

// qmk flash -kb ferris/sweep -km adamridhwan -e CONVERT_TO=blok

enum layers {
    BASE,
    NAVIGATION,
    NUMBER,
    SYMBOL,
    JAVASCRIPT,
    FUNCTION,
    MOUSE
};

enum apps {
    BROWSER = SAFE_RANGE,
    CODE,
    SLACK,
    NOTION,
    SPOTIFY
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BROWSER:
            if (record->event.pressed) {
                register_mods(HYPER);
                tap_code(KC_1);
                unregister_mods(HYPER);
            }
            break;

        case CODE:
            if (record->event.pressed) {
                register_mods(HYPER);
                tap_code(KC_2);
                unregister_mods(HYPER);
            }
            break;

        case SLACK:
            if (record->event.pressed) {
                register_mods(HYPER);
                tap_code(KC_3);
                unregister_mods(HYPER);
            }
            break;

        case NOTION:
            if (record->event.pressed) {
                register_mods(HYPER);
                tap_code(KC_4);
                unregister_mods(HYPER);
            }
            break;

        case SPOTIFY:
            if (record->event.pressed) {
                register_mods(HYPER);
                tap_code(KC_5);
                unregister_mods(HYPER);
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [BASE] = LAYOUT_split_3x5_2(
  //,--------------------------------------------------,    ,-------------------------------------------------,
        KC_Q  ,   KC_W  ,   KC_F  ,   KC_P  ,   KC_B  ,         KC_J  ,   KC_L  ,   KC_U  ,   KC_Y  , KC_SCLN ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
       SHFT_A ,  CTRL_R ,  OPTN_S ,  CMND_T , MOUSE_G ,       FUNCT_K ,  CMND_N ,  OPTN_E ,  CTRL_I ,  SHFT_O ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
        KC_Z  ,   KC_X  ,   KC_D  ,  MEH_C  ,   KC_V  ,         KC_M  ,   KC_H  , KC_COMM ,  KC_DOT , KC_SLSH ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
                                    JSC_ESC , NAV_TAB ,       NUM_SPC , SYM_ENT
  //                              `---------+---------'     '---------+---------`
    ),

    [NAVIGATION] = LAYOUT_split_3x5_2(
  //,-------------------------------------------------,     ,-------------------------------------------------,
      XXXXXXX ,  SLACK  , BROWSER ,   CODE  ,  NOTION ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      KC_LSFT , KC_LCTL , KC_LOPT , KC_LCMD , SPOTIFY ,       KC_LEFT , KC_DOWN ,  KC_UP  , KC_RGHT , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,       KC_HOME , KC_PGDN , KC_PGUP , KC_END ,  XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
                                    XXXXXXX , XXXXXXX ,       KC_BSPC , XXXXXXX
  //                              `---------+---------'     '---------+---------`
    ),

    [NUMBER] = LAYOUT_split_3x5_2(
  //,-------------------------------------------------,     ,-------------------------------------------------,
      XXXXXXX ,   KC_7  ,   KC_8  ,   KC_9  , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      KC_CAPS ,   KC_4  ,   KC_5  ,   KC_6  , XXXXXXX ,       XXXXXXX , KC_RGUI , KC_ROPT , KC_RCTL , KC_RSFT ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      XXXXXXX ,   KC_1  ,   KC_2  ,   KC_3  , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
                                    XXXXXXX ,   KC_0  ,       XXXXXXX , XXXXXXX
  //                              `---------+---------'     '---------+--------`
    ),

    [SYMBOL] = LAYOUT_split_3x5_2(
  //,-------------------------------------------------,     ,-------------------------------------------------,
      KC_TILD , KC_AMPR , KC_ASTR , KC_PIPE , KC_PLUS ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
       KC_GRV ,  KC_DLR , KC_PERC , KC_CIRC , KC_MINS ,       XXXXXXX , KC_RGUI , KC_ROPT , KC_RCTL , KC_RSFT ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      KC_BSLS , KC_EXLM ,  KC_AT  , KC_HASH , KC_UNDS ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
                                    KC_QUOT ,  KC_DQT ,       XXXXXXX , XXXXXXX
  //                              `---------+---------'     '---------+---------`
    ),

    [JAVASCRIPT] = LAYOUT_split_3x5_2(
  //,-------------------------------------------------,     ,-------------------------------------------------,
      XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      KC_LSFT , KC_LCTL , KC_LOPT , KC_LCMD , XXXXXXX ,       XXXXXXX , KC_LPRN , KC_RPRN , KC_EQUAL,  KC_GT  ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      XXXXXXX ,   UNDO  ,   REDO  ,   COPY  ,  PASTE  ,       XXXXXXX , KC_LCBR , KC_RCBR , KC_LBRC , KC_RBRC ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
                                    XXXXXXX , XXXXXXX ,       XXXXXXX , XXXXXXX
  //                              `---------+---------'     '---------+---------`
    ),

    [FUNCTION] = LAYOUT_split_3x5_2(
  //,-------------------------------------------------,     ,-------------------------------------------------,
       KC_F12 ,  KC_F7  ,  KC_F8  ,  KC_F9  , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
       KC_F11 ,  KC_F4  ,  KC_F5  ,  KC_F6  , XXXXXXX ,       XXXXXXX , KC_RGUI , KC_ROPT , KC_RCTL , KC_RSFT ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
       KC_F10 ,  KC_F1  ,  KC_F2  ,  KC_F3  , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
                                    XXXXXXX , XXXXXXX ,       XXXXXXX , XXXXXXX
  //                              `---------+---------'     '---------+---------`
    ),

    [MOUSE] = LAYOUT_split_3x5_2(
  //,-------------------------------------------------,     ,-------------------------------------------------,
      XXXXXXX , MS_ACL0 , MS_ACL1 , MS_ACL2 , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,       MS_LEFT , MS_DOWN ,  MS_UP  , MS_RGHT , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
      XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,       XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX , XXXXXXX ,
  //|---------+---------+---------+---------+---------|     |---------+---------+---------+---------+---------|
                                    XXXXXXX , XXXXXXX ,       MS_BTN1 , MS_BTN2
  //                              `---------+---------'     '---------+---------`
    )
};
