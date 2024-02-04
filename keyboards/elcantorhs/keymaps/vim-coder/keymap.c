// Copyright 2024 michel-komarov
// SPDX-License-Identifier: GPL-2.0-or-late
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_GRV,         KC_Q,          KC_W,         KC_E,         KC_R,         KC_T,    /* | */    KC_Y,         KC_U,         KC_I,         KC_O,         KC_P,         KC_LBRC,
        KC_ESC,         KC_A,          LCTL_T(KC_S), LALT_T(KC_D), LSFT_T(KC_F), KC_G,    /* | */    KC_H,         RSFT_T(KC_J), RALT_T(KC_K), RCTL_T(KC_L), KC_SCLN,      KC_QUOT,
        KC_TAB,         KC_Z,          KC_X,         KC_C,         KC_V,         KC_B,    /* | */    KC_N,         KC_M,         KC_COMM,      KC_DOT,       KC_SLSH,      KC_RBRC,
                                       KC_MINS,      KC_BSLS,      MO(1),        KC_BSPC, /* | */    KC_ENT,       MO(2),        KC_SPC,       KC_EQL
    ),
    [1] = LAYOUT(
        KC_GRV,         KC_EXLM,       KC_AT,        KC_HASH,      KC_DLR,       KC_PERC, /* | */    KC_CIRC,      KC_AMPR,      KC_ASTR,      KC_LPRN,      KC_RPRN,      KC_NO,
        KC_ESC,         KC_1,          LCTL_T(KC_2), LALT_T(KC_3), LSFT_T(KC_4), KC_5,    /* | */    KC_6,         RSFT_T(KC_7), RALT_T(KC_8), RCTL_T(KC_9), KC_0,         KC_MINS,
        KC_TAB,         KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,   /* | */    KC_NO,        KC_NO,        KC_COMM,      KC_DOT,       KC_SLSH,      KC_BSLS,
                                       KC_NO,        KC_NO,        KC_TRNS,      KC_NO,   /* | */    KC_ENT,       MO(3),        KC_SPC,       KC_EQL
    ),
    [2] = LAYOUT(
        KC_NO,          KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_PSCR, /* | */    KC_NO,        KC_HOME,      KC_PGUP,      KC_NO,        KC_NO,        KC_INS,
        KC_ESC,         KC_NO,         KC_LCTL,      KC_LALT,      KC_LSFT,      KC_NO,   /* | */    KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,      KC_NO,        KC_DEL,
        KC_TAB,         KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,   /* | */    KC_NO,        KC_END,       KC_PGDN,      KC_NO,        KC_NO,        KC_NO,
                                       KC_CAPS,      KC_LGUI,      MO(3),        KC_BSPC, /* | */    KC_NO,        KC_TRNS,      KC_NO,        KC_NO
    ),
    [3] = LAYOUT(
        KC_F1,          KC_F2,         KC_F3,        KC_F4,        KC_F5,        KC_F6,   /* | */    KC_F7,        KC_F8,        KC_F9,        KC_F10,       KC_F11,       KC_F12,
        KC_ESC,         KC_LGUI,       KC_LCTL,      KC_LALT,      KC_LSFT,      KC_NO,   /* | */    KC_NO,        KC_RSFT,      KC_RALT,      KC_RCTL,      KC_RGUI,      KC_NO,
        KC_TAB,         KC_NO,         KC_NO,        KC_NO,        KC_NO,        KC_NO,   /* | */    KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,        KC_NO,
                                       KC_NO,        KC_NO,        KC_TRNS,      KC_NO,   /* | */    KC_NO,        KC_TRNS,      KC_NO,        KC_NO
    )
};
