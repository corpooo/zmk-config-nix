#ifdef CONFIG_WIRELESS
  #include <dt-bindings/zmk/bt.h>
  #include <dt-bindings/zmk/outputs.h>
  #define _BT_SEL_KEYS_                                                        \
      &bt BT_CLR &bt BT_SEL 0 &bt BT_SEL 1 &bt BT_SEL 2 &bt BT_SEL 3
#else
  #define _BT_SEL_KEYS_ &trans &trans &trans &trans &trans
#endif

#define DEF 0
#define NAV 1
#define SYS 2

#define XXX &none
#define ___ &trans

#define KEYS_L LT0 LT1 LT2 LT3 LT4 LM0 LM1 LM2 LM3 LM4 LB0 LB1 LB2 LB3 LB4
#define KEYS_R RT0 RT1 RT2 RT3 RT4 RM0 RM1 RM2 RM3 RM4 RB0 RB1 RB2 RB3 RB4
#define THUMBS LH2 LH1 LH0 RH0 RH1 RH2

#define QUICK_TAP_MS 175

#define MAKE_HRM(NAME, HOLD, TAP, TRIGGER_POS)                                 \
  ZMK_HOLD_TAP(NAME, bindings = <HOLD>, <TAP>; flavor = "balanced";            \
               tapping-term-ms = <200>; quick-tap-ms = <QUICK_TAP_MS>;         \
               require-prior-idle-ms = <50>; hold-trigger-on-release;          \
               hold-trigger-key-positions = <TRIGGER_POS>;)

// Hack: Make HRM combos tap-only (cf, ZMK issue #544).
#define ZMK_COMBO_8(NAME, TAP, POS, LAYERS, COMBO_MS, IDLE_MS, HOLD, SIDE)     \
  MAKE_HRM(hm_combo_##NAME, &kp, TAP, SIDE THUMBS)                             \
  ZMK_COMBO_6(NAME, &hm_combo_##NAME HOLD 0, POS, LAYERS, COMBO_MS, IDLE_MS)

// Define mod-morph with a *single* mod trigger for less repetition.
#define SIMPLE_MORPH(NAME, MOD, BINDING1, BINDING2)                            \
  ZMK_MOD_MORPH(NAME, mods = <(MOD_L##MOD | MOD_R##MOD)>;                      \
                bindings = <BINDING1>, <BINDING2>;)

#define SHIFT_MORPH(NAME, BINDING1, BINDING2)                                  \
  SIMPLE_MORPH(NAME, SFT, BINDING1, BINDING2)

#ifndef ZMK_BASE_LAYER
  #define ZMK_BASE_LAYER(name, LT, RT, LM, RM, LB, RB, LH, RH)                 \
      ZMK_LAYER(name, LT RT LM RM LB RB LH RH)
#endif

