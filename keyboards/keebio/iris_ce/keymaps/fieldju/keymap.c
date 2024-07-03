// Copyright 2024 Justin Field (@fieldju)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include <justinmacros.h>

enum custom_layers {
    DFT,
    LWR,
    RSE,
    FN,
    P,
    ADJ
};

// Rectangle (window management) Hotkeys
#define SCR_CEN LALT(LGUI(LCTL(KC_SPACE)))  // center window
#define SCR_LHF LALT(LCTL(KC_LEFT))         // left half
#define SCR_RHF LALT(LCTL(KC_RIGHT))        // right half
#define SCR_CHF LALT(LCTL(KC_H))            // center half
#define SCR_F13 LALT(LCTL(KC_D))            // left 1/3
#define SCR_R23 LALT(LCTL(KC_T))            // right 2/3
#define MAXIMIZ LALT(LCTL(KC_ENTER))        // maximize window

// Misc IDE
#define RENAME  LSFT(KC_F6)
#define REAFACT LCTL(KC_T)
#define TERM    LALT(KC_F12)
#define GIT     LGUI(KC_9)
#define DEBUG   LGUI(KC_5)
#define TG_CASE LALT(LSFT(KC_U))
#define GENERAT LGUI(KC_N)
#define LAST_ED LGUI(LSFT(KC_BSPC))
#define CLONE_U LALT(LGUI(LCTL(KC_UP)))
#define CLONE_D LALT(LGUI(LCTL(KC_DOWN)))
#define OPEN LALT(KC_F1)
#define SCRATCH LGUI(LSFT(KC_N))
#define CTX_ACT LALT(KC_ENTER)
#define NAVBACK LGUI(KC_LBRC)
#define NAVFRWD LGUI(KC_RBRC)
#define SUROUND LGUI(LALT(KC_T))
#define KC_TLBX LALT(LGUI(LCTL(LSFT(KC_H)))) // Jetbrain Tool box
#define GO_DECL LGUI(KC_B)
#define GO_IMPL LGUI(LALT(KC_B))
#define USAGES  LALT(KC_F7)

// Layers
#define HYPER_FN LM(FN, MOD_HYPR) // MO Layer FN with HYPER
#define MEH_FN   LM(FN, MOD_MEH)  // MO Layer FN with MEH

// MISC
#define CLOSE_T LGUI(KC_W) // close tab / window
#define END_LN  LCTL(KC_E)
#define STRT_LN LCTL(KC_A)
#define RV_SRCH LCTL(KC_R)
#define KC_EOF  LCTL(KC_D)
#define INTRUPT LCTL(KC_C)
#define CLEAR   LCTL(KC_L)
#define SPLIT_V LCTL(KC_V)
#define SPLIT_H LCTL(KC_H)
#define DEL_LFT LCTL(KC_U)
#define DEL_RHT LCTL(KC_K)

// Compile Firmware
#define SEND_IT LCTL(KC_LSFT)

// Mac
#define SCRNSHT LGUI(LCTL(LSFT(KC_4)))
#define CAPTURE LGUI(LSFT(KC_5))
#define MKC_CPY LGUI(KC_C)
#define MKC_CUT LGUI(KC_X)
#define MKC_PST LGUI(KC_V)
#define MKC_UND LGUI(KC_Z)
#define MKC_BLD LGUI(KC_B)
#define MKC_SPT LGUI(KC_SPC)
#define MKC_SW1 HYPR(KC_1)
#define MKC_SW2 HYPR(KC_2)
#define MKC_SW3 HYPR(KC_3)
#define MKC_SW4 HYPR(KC_4)
#define MKC_SW5 HYPR(KC_5)
#define MKC_SW6 HYPR(KC_6)
#define MKC_SW7 HYPR(KC_7)
#define MKC_SW8 HYPR(KC_8)
#define MKC_SW9 HYPR(KC_9)
#define MKC_SW0 HYPR(KC_0)
#define MKC_SWN HYPR(KC_RGHT)
#define MKC_SWP HYPR(KC_LEFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DFT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                KC_6,    KC_7,    KC_8,    KC_9,    KC_0,   KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,          KC_LCTL, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_QUOT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    TL_UPPR, TL_LOWR, MO(FN),                    KC_SPC,  TL_UPPR, TL_LOWR
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [LWR] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, MAXIMIZ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TILD, KC_UNDS, KC_EQL,  KC_PLUS, KC_MINS, KC_LBRC,                            KC_RBRC, KC_LCBR, KC_RCBR, KC_BSLS, _______, KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          SCR_CEN, SCR_F13, SCR_R23, SCR_LHF, SCR_RHF, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, HYPER_FN,                  _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [RSE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  MKC_SW1, MKC_SW2, MKC_SW3, MKC_SW4, MKC_SW5,                            MKC_SW6, MKC_SW7, MKC_SW8, MKC_SW9, MKC_SW0, DEL_LFT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     MKC_SWP, MKC_SWN, CAPTURE, END_LN,  RV_SRCH, _______,                            _______, STRT_LN, CLONE_U, END_LN,  _______, DEL_RHT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_GRV,  STRT_LN, SCRNSHT, KC_EOF,  _______, _______,                            SPLIT_H, _______, CLONE_D, CLEAR,   _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     CW_TOGG, _______, _______, INTRUPT, SPLIT_V, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, MEH_FN,                    _______,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [FN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  OPEN,    _______, CLOSE_T, _______, DEBUG,                              _______, _______, _______, _______, _______, LAST_ED,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, GO_IMPL, GO_DECL, RENAME,  TERM,                               _______, KC_HOME, KC_UP,   KC_END,  KC_PGUP, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, SUROUND, NAVBACK, NAVFRWD, GIT,                                KC_TLBX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, CTX_ACT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, MKC_UND, MKC_CUT, MKC_CPY, MKC_PST, MKC_BLD, _______,          _______, GENERAT, DICTION, LAST_ED, NAVBACK, NAVFRWD,  _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_MEH,  KC_HYPR, _______,                   MKC_SPT, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [P] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, P2,      _______, _______, _______,                            _______, _______, _______, _______, P1,      _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            P4,      _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, P3,      _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [ADJ] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     SEND_IT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  QK_MAKE,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, REAFACT, _______,                            _______, USAGES,  _______, _______, OSL(P),  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, CAPTURE, _______, SCRATCH, _______,                            _______, _______, _______, MAC_LOCK,_______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS, _______, _______, TG_CASE, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};

