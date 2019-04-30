// Below layout is based upon /u/That-Canadian's planck layout
#include QMK_KEYBOARD_H

extern keymap_config_t keymap_config;

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 0

#define _FUNC 15

// Defines for task manager and such
#define CALTDEL LCTL(LALT(KC_DEL))
#define TSKMGR LCTL(LSFT(KC_ESC))

// vscode shortcuts
#define VS_LEFT LCA(KC_LEFT)
#define VS_RGHT LCA(KC_RGHT)

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

#define LOCK LGUI(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Qwerty
 * ,-------------.
 * |   1  |  2   |
 * |------+------|
 * |   3  |  4   |
 * |------+------|
 * |   5  |  6   |
 * |------+------|
 * | FUNC |  8   |
 * `-------------'
 */
[_QWERTY] = LAYOUT( \
    TAB_PRV,   TAB_NXT, \
    MV_PRV,    MV_NXT, \
    VD_PRV,    VD_NXT, \
    MO(_FUNC), TSKMGR \
),

/* Function
 * ,-------------.
 * |   Q  |CALDEL|
 * |------+------|
 * |   A  |TSKMGR|
 * |------+------|
 * |   Z  |  X   |
 * |------+------|
 * |      |  C   |
 * `-------------'
 */
[_FUNC] = LAYOUT( \
    TAB_LEFT,TAB_RGHT, \
    VS_LEFT, VS_RGHT, \
    KC_Z,    KC_X, \
    _______, LOCK \
)

};

void matrix_init_user(void) {

}
