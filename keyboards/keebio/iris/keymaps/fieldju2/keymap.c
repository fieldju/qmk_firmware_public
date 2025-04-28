// Copyright 2024 Justin Field (@fieldju)
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include <justinmacros.h>

enum custom_layers {
    DFT,
    LWR,
    FN,
    RSE,
    P,
    GME,
    ADJ,
};

// Contexts
#define KC_CTX LCTL(KC_SPACE)

// Rectangle (window management) Hotkeys
#define SCR_CEN LALT(LGUI(LCTL(KC_SPACE)))  // center window
#define SCR_LHF LALT(LCTL(KC_LEFT))         // left half
#define SCR_RHF LALT(LCTL(KC_RIGHT))        // right half
#define SCR_CHF LALT(LCTL(KC_H))            // center half
#define SCR_F13 LALT(LCTL(KC_D))            // left 1/3
#define SCR_R23 LALT(LCTL(KC_T))            // right 2/3
#define MAXIMIZ LALT(LCTL(KC_ENTER))        // maximize window
#define NEXT_MO LCAG(KC_N)                  // next monitor
#define PREV_MO LCAG(KC_P)                  // previous monitor

// Misc IDE
#define RENAME  LSFT(KC_F6)
#define REAFACT LCTL(KC_T)
#define TERM    LALT(KC_F12)
#define GIT     LGUI(KC_9)
#define DEBUG   LGUI(KC_5)
#define TG_CASE LALT(LSFT(KC_U))
#define GENERAT LGUI(KC_N)
#define LAST_ED LGUI(LSFT(KC_BSPC))
#define OPEN LALT(KC_F1)
#define SCRATCH LGUI(LSFT(KC_N))
#define CTX_ACT LALT(KC_ENTER)
//#define NAVBACK HYPR(KC_LEFT)
//#define NAVFRWD HYPR(KC_RGHT)
#define NAVBACK LGUI(KC_LBRC)
#define NAVFRWD LGUI(KC_RBRC)
#define NAV_NFN LSFT(LCTL(KC_DOWN))
#define NAV_PFN LSFT(LCTL(KC_UP))
#define SUROUND LGUI(LALT(KC_T))
#define KC_TLBX LALT(LGUI(LCTL(LSFT(KC_H)))) // Jetbrain Tool box
#define GO_DECL LGUI(KC_B) // HOLD lat to goto impl
#define GO_IMPL LALT(LGUI(KC_B))
#define USAGES  LALT(KC_F7)
#define EXP_SEL HYPR(KC_0)
#define DEC_SEL HYPR(KC_9)
#define RECENT  LGUI(KC_E)
#define DEL_LN  LGUI(LCTL(KC_DEL))
#define BPSYNC  LALT(KC_P)
#define BFSYNC  LALT(LCTL(KC_P))
#define AIRCHAT LALT(LCTL(KC_A))

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
#define OS_SHFT OSM(MOD_LSFT)
#define KC_LCAG LCTL(LALT(KC_LGUI))
#define CLOSE   LALT(KC_F4)

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
#define MKC_SW1 LCAG(KC_1)
#define MKC_SW2 LCAG(KC_2)
#define MKC_SW3 LCAG(KC_3)
#define MKC_SW4 LCAG(KC_4)
#define MKC_SW5 LCAG(KC_5)
#define MKC_SW6 LCAG(KC_6)
#define MKC_SW7 LCAG(KC_7)
#define MKC_SW8 LCAG(KC_8)
#define MKC_SW9 LCAG(KC_9)
#define MKC_SW0 LCAG(KC_0)
#define MKC_SWN LCAG(KC_RGHT)
#define MKC_SWP LCAG(KC_LEFT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [DFT] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,          RECENT,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    TL_UPPR, TL_LOWR, TT(FN),                    KC_SPC,  TL_UPPR, KC_LCTL
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [LWR] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, MAXIMIZ,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_UNDS, KC_EQL,  KC_PLUS, KC_MINS, KC_LBRC,                            KC_RBRC, KC_LCBR, KC_RCBR, KC_BSLS, _______, KC_PIPE,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          SCR_CEN, SCR_F13, SCR_R23, SCR_LHF, SCR_RHF, SCR_CEN, CTX_ACT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, HYPER_FN,                  _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [FN] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  OPEN,    _______, CLOSE_T, _______, DEBUG,                              _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LCAG, _______, DEC_SEL, EXP_SEL, RENAME,  TERM,                               _______, STRT_LN, KC_UP,   END_LN,  KC_PGUP, KC_HOME,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, SCRNSHT, MKC_SWP, MKC_SWN, GIT,                                KC_TLBX, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_END,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, MKC_UND, MKC_CUT, MKC_CPY, MKC_PST, MKC_BLD, _______,          DICTION, GENERAT, LAST_ED, NAVBACK, NAVFRWD, _______, GO_DECL,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_MEH,  KC_HYPR, _______,                   KC_CTX,  _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [RSE] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     CG_TOGG, MKC_SW1, MKC_SW2, MKC_SW3, MKC_SW4, MKC_SW5,                            MKC_SW6, MKC_SW7, MKC_SW8, MKC_SW9, MKC_SW0, DEL_LFT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, CLOSE_T, _______, RECENT,  _______,                            _______, USAGES,  _______, _______, BPSYNC,  DEL_RHT,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, AIRCHAT, BFSYNC,  _______, SCRATCH, SUROUND,                            _______, NAVBACK, LAST_ED, NAVFRWD, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     CW_TOGG, _______, _______, TG_CASE, _______, _______, _______,          KC_MPLY, _______, KC_MPLY, KC_MPRV, KC_MNXT, KC_VOLU, KC_VOLD,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, MEH_FN,                    _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [P] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     _______, P1,      P2,      P3,      P4,      _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, P1,      _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [GME] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                               KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LGUI, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                               KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_LALT,          TO(DFT),  KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    KC_LGUI, KC_LSFT, KC_SPC,                    KC_SPC,  KC_LCTL, MO(RSE)
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [ADJ] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     SEND_IT, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                              KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  QK_MAKE,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, CLOSE,   CG_TOGG, _______, REAFACT, _______,                            _______, _______, _______, _______, OSL(P),  _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, CAPTURE, _______, _______, TO(GME),                            _______, _______, _______, MAC_LOCK,_______, GO_IMPL,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     KC_CAPS, _______, _______, _______, _______, _______, _______,          _______, _______, _______, PREV_MO, NEXT_MO, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, _______, _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),
};