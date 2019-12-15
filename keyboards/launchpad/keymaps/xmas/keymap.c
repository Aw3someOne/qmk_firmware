// Below layout is based upon /u/That-Canadian's planck layout
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _BASE 0

#define _FUNC 15

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

// tabs
#define TAB_PRV LCTL(KC_PGUP)
#define TAB_NXT LCTL(KC_PGDN)

// reorder tabs
#define TAB_LEFT LCTL(LSFT(KC_PGUP))
#define TAB_RGHT LCTL(LSFT(KC_PGDN))

// windows monitors
#define MV_PRV SGUI(KC_LEFT)
#define MV_NXT SGUI(KC_RIGHT)

// virtual desktops
#define VD_PRV LCTL(LGUI(KC_LEFT))
#define VD_NXT LCTL(LGUI(KC_RGHT))

// copy/paste
#define COPY LCTL(KC_C)
#define PASTE LCTL(KC_V)

// undo/redo
#define UNDO LCTL(KC_Z)
#define REDO LCTL(KC_Y)

#define LOCK LGUI(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------.
 * |TABPRV|TABNXT|
 * |------+------|
 * | COPY | PASTE|
 * |------+------|
 * | UNDO | REDO |
 * |------+------|
 * | FUNC |TSKMGR|
 * `-------------'
 */
[_BASE] = LAYOUT( \
    TAB_PRV,   TAB_NXT, \
    COPY,      PASTE, \
    UNDO,      REDO, \
    MO(_FUNC), TSKMGR  \
),

/* Function
 * ,-------------.
 * | TABL | TABR |
 * |------+------|
 * |MV_PRV|MV_NXT|
 * |------+------|
 * |VD_PRV|VD_NXT|
 * |------+------|
 * |      |TSKMGR|
 * `-------------'
 */
[_FUNC] = LAYOUT( \
    TAB_LEFT,  TAB_RGHT, \
    MV_PRV,    MV_NXT, \
    VD_PRV,    VD_NXT, \
    _______,   LOCK \
)

};

void matrix_init_user(void) {

}
