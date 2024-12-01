#ifndef HOMEROW_H
#define HOMEROW_H

// thumb keys
#define JSC_ESC LT(JAVASCRIPT, KC_ESC)
#define NAV_TAB LT(NAVIGATION, KC_TAB)
#define NUM_SPC LT(NUMBER, KC_SPC)
#define SYM_ENT LT(SYMBOL, KC_ENT)
#define FUNCT_K LT(FUNCTION, KC_K)
#define MOUSE_G LT(MOUSE, KC_G)

// homerow left keys
#define SHFT_A SFT_T(KC_A)
#define CTRL_R CTL_T(KC_R)
#define OPTN_S OPT_T(KC_S)
#define CMND_T CMD_T(KC_T)
#define MEH_C  MEH_T(KC_C)

// homerow right keys
#define CMND_N CMD_T(KC_N)
#define OPTN_E OPT_T(KC_E)
#define CTRL_I CTL_T(KC_I)
#define SHFT_O SFT_T(KC_O)

#define UNDO LCMD(KC_Z)
#define REDO LCMD(KC_X)
#define COPY LCMD(KC_C)
#define PASTE LCMD(KC_V)

#define HYPER (MOD_LGUI | MOD_LCTL | MOD_LALT | MOD_LSFT)

#endif
