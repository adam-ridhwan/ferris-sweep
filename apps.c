#include QMK_KEYBOARD_H
#include "apps.h"

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CHROME:
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

        default:
            return true;
    }
    return false;
}
