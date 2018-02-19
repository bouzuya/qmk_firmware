// "Let's Split" keymap v15
#include "lets_split.h"
#include "action_layer.h"
#include "keymap_jp.h"
#include "debug.h"

#define L0 0
#define L1 1
#define L2 2
#define L3 3
#define L4 4
#define L5 5

enum custom_keycodes
{
    B_CTL = SAFE_RANGE,
    B_SFT,
    B_ALT,
    B_GUI
};

#define _____ KC_TRNS
#define _NOOP KC_NO
#define XXXXX KC_NO
#define _MO1_ MO(L1)
#define _MO4_ MO(L4)
#define _MO5_ MO(L5)
#define _TO0_ TO(L0)
#define _TO1_ TO(L1)
#define _TO2_ TO(L2)
#define _OSL1 OSL(L1)
#define _OSL3 OSL(L3)

#define _S_S_ SFT_T(KC_SPC)

#define _SPC_ KC_SPC
#define _0___ KC_0    // `0` / ` `
#define _1___ KC_1    // `1` / `!`
#define _2___ KC_2    // `2` / `"`
#define _3___ KC_3    // `3` / `#`
#define _4___ KC_4    // `4` / `$`
#define _5___ KC_5    // `5` / `%`
#define _6___ KC_6    // `6` / `&`
#define _7___ KC_7    // `7` / `'`
#define _8___ KC_8    // `8` / `(`
#define _9___ KC_9    // `9` / `)`
#define _COLN JP_COLN // `:` / `+`
#define _SCLN JP_SCLN // `;` / `*`
#define _COMM JP_COMM // `,` / `<`
#define _MINS JP_MINS // `-` / `=`
#define _DOT_ JP_DOT  // `.` / `>`
#define _SLSH JP_SLSH // `/` / `?`
#define _AT__ JP_AT   // `@` / ```
#define _A___ KC_A
#define _B___ KC_B
#define _C___ KC_C
#define _D___ KC_D
#define _E___ KC_E
#define _F___ KC_F
#define _G___ KC_G
#define _H___ KC_H
#define _I___ KC_I
#define _J___ KC_J
#define _K___ KC_K
#define _L___ KC_L
#define _M___ KC_M
#define _N___ KC_N
#define _O___ KC_O
#define _P___ KC_P
#define _Q___ KC_Q
#define _R___ KC_R
#define _S___ KC_S
#define _T___ KC_T
#define _U___ KC_U
#define _V___ KC_V
#define _W___ KC_W
#define _X___ KC_X
#define _Y___ KC_Y
#define _Z___ KC_Z
#define _LBRC JP_LBRC      // `[` / `{`
#define _BSLS LALT(JP_YEN) // `\` / `|`
#define _RBRC JP_RBRC      // `]` / `}`
#define _CIRC JP_CIRC      // `^` / `~`
#define _UNDS JP_BSLS      // `_` / `_`

#define _F1__ KC_F1
#define _F2__ KC_F2
#define _F3__ KC_F3
#define _F4__ KC_F4
#define _F5__ KC_F5
#define _F6__ KC_F6
#define _F7__ KC_F7
#define _F8__ KC_F8
#define _F9__ KC_F9
#define _F10_ KC_F10
#define _F11_ KC_F11
#define _F12_ KC_F12
#define _F13_ KC_F13
#define _F14_ KC_F14
#define _F15_ KC_F15
#define _F16_ KC_F16
#define _F17_ KC_F17
#define _F18_ KC_F18
#define _F19_ KC_F19
#define _F20_ KC_F20

#define _LEFT KC_LEFT
#define _UP__ KC_UP
#define _DOWN KC_DOWN
#define _RGHT KC_RGHT

#define _HOME KC_HOME
#define _END_ KC_END

#define _BSPC KC_BSPC
#define _DEL_ KC_DEL
#define _ENT_ KC_ENT
#define _ESC_ KC_ESC
#define _TAB_ KC_TAB

#define _KANA KC_LANG1
#define _EISU KC_LANG2

#define _ALT_ KC_LALT
#define _CTL_ KC_LCTL
#define _SFT_ KC_LSFT
#define _GUI_ KC_LGUI

#define _LSFT KC_LSFT
#define _RSFT KC_RSFT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer0
    // .-----------------------------------------..-----------------------------------------.
    // | Q    | W    | E    | R    | T    |      ||      | Y    | U    | I    | O    | P    |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // | A    | S    | D    | F    | G    |      ||      | H    | J    | K    | L    | OSL3 |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // | Z    | X    | C    | V    | B    |      ||      | N    | M    | ,    | .    | /    |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // |      |      |      | MO4  | MO1  |SFT/SP||SFT/SP| MO1  | MO5  |      |      |      |
    // `-----------------------------------------'`-----------------------------------------'
    [L0] = KEYMAP(
        _Q___, _W___, _E___, _R___, _T___, XXXXX, XXXXX, _Y___, _U___, _I___, _O___, _P___,
        _A___, _S___, _D___, _F___, _G___, XXXXX, XXXXX, _H___, _J___, _K___, _L___, _OSL3,
        _Z___, _X___, _C___, _V___, _B___, XXXXX, XXXXX, _N___, _M___, _COMM, _DOT_, _SLSH,
        XXXXX, XXXXX, XXXXX, _MO4_, _MO1_, _S_S_, _S_S_, _MO1_, _MO5_, XXXXX, XXXXX, XXXXX),

    // Layer1
    // ,-----------------------------------------..-----------------------------------------.
    // | 1    | 2    | 3    | 4    | 5    |      ||      | 6    | 7    | 8    | 9    | 0    |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // | :    | ;    | ,    | -    | .    |      ||      | Left | Down | Up   |Right |      |
    // |------+------+------+------+------|------||------+------+------+------+------+------|
    // | /    | @    | [    | \    | ]    |      ||      | ^    | _    |      |      |      |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // `-----------------------------------------'`-----------------------------------------'
    [L1] = KEYMAP(
        _1___, _2___, _3___, _4___, _5___, XXXXX, XXXXX, _6___, _7___, _8___, _9___, _0___,
        _COLN, _SCLN, _COMM, _MINS, _DOT_, XXXXX, XXXXX, _LEFT, _DOWN, _UP__, _RGHT, _____,
        _SLSH, _AT__, _LBRC, _BSLS, _RBRC, XXXXX, XXXXX, _CIRC, _UNDS, _NOOP, _NOOP, _NOOP,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),

    // Layer2
    // ,-----------------------------------------.,-----------------------------------------.
    // | F1   | F2   | F3   | F4   | F5   |      ||      | F6   | F7   | F8   | F9   | F10  |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // | F11  | F12  | F13  | F14  | F15  |      ||      |      |      |      |      |      |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // | F16  | F17  | F18  | F19  | F20  |      ||      |      |      |      |      |RESET |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // `-----------------------------------------'`-----------------------------------------'
    [L2] = KEYMAP(
        _F1__, _F2__, _F3__, _F4__, _F5__, XXXXX, XXXXX, _F6__, _F7__, _F8__, _F9__, _F10_,
        _F11_, _F12_, _F13_, _F14_, _F15_, XXXXX, XXXXX, _NOOP, _NOOP, _NOOP, _NOOP, _____,
        _F16_, _F17_, _F18_, _F19_, _F20_, XXXXX, XXXXX, _NOOP, _NOOP, _NOOP, _NOOP, RESET,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),

    // Layer3
    // ,-----------------------------------------.,-----------------------------------------.
    // | Esc  |      | End  | TO2  |      |      ||      |      |      | Tab  |      |      |
    // |------+------+------+------+-------------||------+------+------+------+------+------|
    // | Home | TO1  | Del  |      |      |      ||      | BS   | Kana | TO0  | Eisu |      |
    // |------+------+------+------+------|------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      |Enter |      |      |      |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // `-----------------------------------------'`-----------------------------------------'
    [L3] = KEYMAP(
        _ESC_, _NOOP, _END_, _TO2_, _NOOP, XXXXX, XXXXX, _NOOP, _NOOP, _TAB_, _NOOP, _NOOP,
        _HOME, _TO1_, _DEL_, _NOOP, _NOOP, XXXXX, XXXXX, _BSPC, _KANA, _TO0_, _EISU, _____,
        _NOOP, _NOOP, _NOOP, _NOOP, _NOOP, XXXXX, XXXXX, _NOOP, _ENT_, _NOOP, _NOOP, _NOOP,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),

    // Layer4
    // ,-----------------------------------------.,-----------------------------------------.
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // |------+------+------+------+-------------||------+------+------+------+------+------|
    // | Ctrl |Shift | Alt  | GUI  |      |      ||      |      |      |      |      |      |
    // |------+------+------+------+------|------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // `-----------------------------------------'`-----------------------------------------'
    [L4] = KEYMAP(
        _NOOP, _NOOP, _NOOP, _NOOP, _NOOP, XXXXX, XXXXX, _____, _____, _____, _____, _____,
        B_CTL, B_SFT, B_ALT, B_GUI, _NOOP, XXXXX, XXXXX, _____, _____, _____, _____, _____,
        _NOOP, _NOOP, _NOOP, _NOOP, _NOOP, XXXXX, XXXXX, _____, _____, _____, _____, _____,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),

    // Layer5
    // ,-----------------------------------------.,-----------------------------------------.
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // |------+------+------+------+-------------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      | GUI  | Alt  |Shift | Ctrl |
    // |------+------+------+------+------|------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // |------+------+------+------+------+------||------+------+------+------+------+------|
    // |      |      |      |      |      |      ||      |      |      |      |      |      |
    // `-----------------------------------------'`-----------------------------------------'
    [L5] = KEYMAP(
        _____, _____, _____, _____, _____, XXXXX, XXXXX, _NOOP, _NOOP, _NOOP, _NOOP, _NOOP,
        _____, _____, _____, _____, _____, XXXXX, XXXXX, _NOOP, B_GUI, B_ALT, B_SFT, B_CTL,
        _____, _____, _____, _____, _____, XXXXX, XXXXX, _NOOP, _NOOP, _NOOP, _NOOP, _NOOP,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),
};

// 0b00000000
//   |||||||+- oneshot control
//   ||||||+-- oneshot shift
//   |||||+--- oneshot alt
//   ||||+---- oneshot gui
//   |||+----- control pressed
//   ||+------ shift pressed
//   |+------- alt pressed
//   +-------- gui pressed
uint8_t b_mods = 0x00;
typedef enum {
    B_MOD_CTL = 0b00000001,
    B_MOD_SFT = 0b00000010,
    B_MOD_ALT = 0b00000100,
    B_MOD_GUI = 0b00001000
} b_mod;

inline static void press_b_mods(b_mod b)
{
    b_mods |= (b << 4) | b;
}

inline static void release_b_mods(b_mod b)
{
    b_mods &= 0xFF ^ (b << 4); // keep oneshot
}

inline static void clear_b_mods(void)
{
    b_mods = 0x00;
}

inline static void clear_b_mods_oneshot(void)
{
    b_mods &= 0xF0;
}

inline static void clear_b_mods_pressed(void)
{
    b_mods &= 0x0F;
}

inline static bool is_b_mods_active(b_mod b)
{
    return !!(((b_mods >> 4) & b) || (b_mods & b));
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    if (record->event.pressed)
    {
        switch (keycode)
        {
        case KC_NO:
            clear_b_mods();
            unregister_code(KC_LCTL);
            unregister_code(KC_LSFT);
            unregister_code(KC_LALT);
            unregister_code(KC_LGUI);
            return true;
        case _BSLS: // LALT(JP_YEN)
            if (is_b_mods_active(B_MOD_CTL))
                register_code(KC_LCTL);
            if (is_b_mods_active(B_MOD_SFT))
                register_code(KC_LSFT);
            register_code(KC_LALT);
            if (is_b_mods_active(B_MOD_GUI))
                register_code(KC_LGUI);
            register_code(keycode);
            if (is_b_mods_active(B_MOD_GUI))
                unregister_code(KC_LGUI);
            unregister_code(KC_LALT);
            if (is_b_mods_active(B_MOD_SFT))
                unregister_code(KC_LSFT);
            if (is_b_mods_active(B_MOD_CTL))
                unregister_code(KC_LCTL);
            clear_b_mods_oneshot();
            return true;
        case KC_A ... KC_EXSEL:
            if (is_b_mods_active(B_MOD_CTL))
                register_code(KC_LCTL);
            if (is_b_mods_active(B_MOD_SFT))
                register_code(KC_LSFT);
            if (is_b_mods_active(B_MOD_ALT))
                register_code(KC_LALT);
            if (is_b_mods_active(B_MOD_GUI))
                register_code(KC_LGUI);
            register_code(keycode);
            if (is_b_mods_active(B_MOD_GUI))
                unregister_code(KC_LGUI);
            if (is_b_mods_active(B_MOD_ALT))
                unregister_code(KC_LALT);
            if (is_b_mods_active(B_MOD_SFT))
                unregister_code(KC_LSFT);
            if (is_b_mods_active(B_MOD_CTL))
                unregister_code(KC_LCTL);
            clear_b_mods_oneshot();
            return true;
        case B_CTL:
            press_b_mods(B_MOD_CTL);
            return false;
        case B_SFT:
            press_b_mods(B_MOD_SFT);
            return false;
        case B_ALT:
            press_b_mods(B_MOD_ALT);
            return false;
        case B_GUI:
            press_b_mods(B_MOD_GUI);
            return false;
        }
    }
    else
    {
        switch (keycode)
        {
        case _MO4_: // through
        case _MO5_:
            clear_b_mods_pressed();
            unregister_code(KC_LCTL);
            unregister_code(KC_LSFT);
            unregister_code(KC_LALT);
            unregister_code(KC_LGUI);
            return true;
        case B_CTL:
            release_b_mods(B_MOD_CTL);
            unregister_code(KC_LCTL);
            return false;
        case B_SFT:
            release_b_mods(B_MOD_SFT);
            unregister_code(KC_LSFT);
            return false;
        case B_ALT:
            release_b_mods(B_MOD_ALT);
            unregister_code(KC_LALT);
            return false;
        case B_GUI:
            release_b_mods(B_MOD_GUI);
            unregister_code(KC_LGUI);
            return false;
        }
    }
    return true;
};
