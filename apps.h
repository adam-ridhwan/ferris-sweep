#ifndef APPS_H
#define APPS_H

#include QMK_KEYBOARD_H

enum apps {
    CHROME,
    CODE,
    SLACK,
    NOTION,
    SPOTIFY
};

bool process_record_user(uint16_t keycode, keyrecord_t *record);

#endif
