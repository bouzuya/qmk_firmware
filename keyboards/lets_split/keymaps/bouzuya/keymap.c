// "Let's Split" keymap v18
#include "lets_split.h"
#include "b_keycode.h"
#include "b_layer.h"
#include "b_mod.h"

#define L0 0
#define L1 1
#define L2 2
#define L3 3
#define L4 4
#define L5 5

enum custom_keycodes
{
    B_RST = SAFE_RANGE,
    B_M_C,
    B_M_S,
    B_M_A,
    B_M_G,
    B_L_0,
    B_L_1,
    B_L_2,
    B_L_3,
    B_L_4,
    B_L_5
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer0
    // .----------------------------------.              ,----------------------------------.
    // | Q    | W    | E    | R    | T    |              | Y    | U    | I    | O    | P    |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // | A    | S    | D    | F    | G    |              | H    | J    | K    | L    | L3   |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // | Z    | X    | C    | V    | B    |              | N    | M    | ,    | .    | /    |
    // `--------------------+------+------+------.,------+------+------+--------------------'
    //                      | L4   | L1   | SP   || L2   | L1   | L5   |
    //                      `--------------------'`--------------------'
    [L0] = KEYMAP(
        _Q___, _W___, _E___, _R___, _T___, RESET, XXXXX, _Y___, _U___, _I___, _O___, _P___,
        _A___, _S___, _D___, _F___, _G___, XXXXX, XXXXX, _H___, _J___, _K___, _L___, B_L_3,
        _Z___, _X___, _C___, _V___, _B___, XXXXX, XXXXX, _N___, _M___, _COMM, _DOT_, _SLSH,
        _LSFT, _RSFT, XXXXX, B_L_4, B_L_1, _SPC_, B_L_2, B_L_1, B_L_5, XXXXX, XXXXX, XXXXX),

    // Layer1
    // ,----------------------------------.              ,----------------------------------.
    // | 1    | 2    | 3    | 4    | 5    |              | 6    | 7    | 8    | 9    | 0    |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // | :    | ;    | ,    | -    | .    |              | Left | Down | Up   |Right |      |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // | /    | @    | [    | \    | ]    |              | ^    | _    |      |      |      |
    // `--------------------+------+------+------.,------+------+------+--------------------'
    //                      |      |      |      ||      |      |      |
    //                      `--------------------'`--------------------'
    [L1] = KEYMAP(
        _1___, _2___, _3___, _4___, _5___, RESET, XXXXX, _6___, _7___, _8___, _9___, _0___,
        _COLN, _SCLN, _COMM, _MINS, _DOT_, XXXXX, XXXXX, _LEFT, _DOWN, _UP__, _RGHT, _____,
        _SLSH, _AT__, _LBRC, _BSLS, _RBRC, XXXXX, XXXXX, _CIRC, _UNDS, _NOOP, _NOOP, _NOOP,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),

    // Layer2
    // ,----------------------------------.              ,----------------------------------.
    // | F1   | F2   | F3   | F4   | F5   |              | F6   | F7   | F8   | F9   | F10  |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // | F11  | F12  | F13  | F14  | F15  |              |      |      |      |      |      |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // | F16  | F17  | F18  | F19  | F20  |              |      |      |      |      |RESET |
    // `--------------------+------+------+------.,------+------+------+--------------------'
    //                      |      |      |      ||      |      |      |
    //                      `--------------------'`--------------------'
    [L2] = KEYMAP(
        _F1__, _F2__, _F3__, _F4__, _F5__, RESET, XXXXX, _F6__, _F7__, _F8__, _F9__, _F10_,
        _F11_, _F12_, _F13_, _F14_, _F15_, XXXXX, XXXXX, _NOOP, _NOOP, _NOOP, _NOOP, _____,
        _F16_, _F17_, _F18_, _F19_, _F20_, XXXXX, XXXXX, _NOOP, _NOOP, _NOOP, _NOOP, RESET,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),

    // Layer3
    // ,----------------------------------.              ,----------------------------------.
    // | Esc  |      | End  |      |      |              |      |      | Tab  |      |      |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // | Home |      | Del  |      |      |              | BS   | Kana |      | Eisu |      |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // |      |      |      |      |      |              |      |Enter |      |      |      |
    // `--------------------+------+------+------.,------+------+------+--------------------'
    //                      |      |      |      ||      |      |      |
    //                      `--------------------'`--------------------'
    [L3] = KEYMAP(
        _ESC_, _NOOP, _END_, _NOOP, _NOOP, RESET, XXXXX, _NOOP, _NOOP, _TAB_, _NOOP, _NOOP,
        _HOME, _NOOP, _DEL_, _NOOP, _NOOP, XXXXX, XXXXX, _BSPC, _KANA, _NOOP, _EISU, _____,
        _NOOP, _NOOP, _NOOP, _NOOP, _NOOP, XXXXX, XXXXX, _NOOP, _ENT_, _NOOP, _NOOP, _NOOP,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),

    // Layer4
    // ,----------------------------------.              ,----------------------------------.
    // |      |      | ____ |      |      |              |      |      |      |      |      |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // | Ctrl |Shift | Alt  | GUI  | ____ |              |      |      |      |      |      |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // |      |      |      |      |      |              |      |      |      |      |      |
    // `--------------------+------+------+------.,------+------+------+--------------------'
    //                      |      |      |      ||      |      |      |
    //                      `--------------------'`--------------------'
    [L4] = KEYMAP(
        _NOOP, _NOOP, B_RST, _NOOP, _NOOP, RESET, XXXXX, _____, _____, _____, _____, _____,
        B_M_C, B_M_S, B_M_A, B_M_G, B_RST, XXXXX, XXXXX, _____, _____, _____, _____, _____,
        _NOOP, _NOOP, _NOOP, _NOOP, _NOOP, XXXXX, XXXXX, _____, _____, _____, _____, _____,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),

    // Layer5
    // ,----------------------------------.              ,----------------------------------.
    // |      |      |      |      |      |              |      |      | ____ |      |      |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // |      |      |      |      |      |              | ____ | GUI  | Alt  |Shift | Ctrl |
    // |------+------+------+------+------|              |------+------+------+------+------|
    // |      |      |      |      |      |              |      |      |      |      |      |
    // `--------------------+------+------+------.,------+------+------+--------------------'
    //                      |      |      |      ||      |      |      |
    //                      `--------------------'`--------------------'
    [L5] = KEYMAP(
        _____, _____, _____, _____, _____, RESET, XXXXX, _NOOP, _NOOP, B_RST, _NOOP, _NOOP,
        _____, _____, _____, _____, _____, XXXXX, XXXXX, B_RST, B_M_G, B_M_A, B_M_S, B_M_C,
        _____, _____, _____, _____, _____, XXXXX, XXXXX, _NOOP, _NOOP, _NOOP, _NOOP, _NOOP,
        XXXXX, XXXXX, XXXXX, _____, _____, _____, _____, _____, _____, XXXXX, XXXXX, XXXXX),
};

// utils

static void debug_b_layer(void)
{
    dprint("[");
    for (uint8_t i = 0; i < 6; i++)
    {
        dprintf("%u", b_layer_get_layer(i));
        if (b_layer_oneshot_is_on(i))
            dprint("o");
        else
            dprint("_");
        if (b_layer_pressed_is_on(i))
            dprint("p");
        else
            dprint("_");
        if (i != 5)
            dprint(", ");
    }
    dprint("]");
}

static void debug_b_mod(void)
{
    dprint("(");
    if (b_mod_is_on(B_MOD_CTL))
        dprint("C");
    else
        dprint("_");
    if (b_mod_is_on(B_MOD_SFT))
        dprint("S");
    else
        dprint("_");
    if (b_mod_is_on(B_MOD_ALT))
        dprint("A");
    else
        dprint("_");
    if (b_mod_is_on(B_MOD_GUI))
        dprint("G");
    else
        dprint("_");
    dprint(")");
}

static void debug_b(void)
{
    dprintf("%u ", biton32(layer_state));
    debug_b_layer();
    dprint(" ");
    debug_b_mod();
    dprint("\n");
}

static void b_unregister_mod_if_is_off(b_mod_t b)
{
    if (b_mod_is_on(b))
        return;
    uint8_t mn = biton(b);
    uint8_t mod_keycode = mn + KC_LCTL;
    unregister_code(mod_keycode);
}

static void b_unregister_mod_all_if_is_off(void)
{
    b_unregister_mod_if_is_off(B_MOD_GUI);
    b_unregister_mod_if_is_off(B_MOD_ALT);
    b_unregister_mod_if_is_off(B_MOD_SFT);
    b_unregister_mod_if_is_off(B_MOD_CTL);
}

static void b_layer_update(void)
{
    dprintln("b_layer_update: ");
    debug_b();

    uint8_t cn = biton32(layer_state);
    uint8_t cbn = b_layer_get_layer(cn);
    b_layer_oneshot_off(cn);
    if (b_layer_is_on(cn))
    {
        // do nothing
    }
    else
    {
        b_layer_clear_layer(cn);
        b_mod_pressed_clear();
        b_unregister_mod_all_if_is_off();
        if (cn != cbn)
        {
            layer_move(cbn);
        }
    }

    debug_b();
}

// process
static void b_process_reset_down(void)
{
    dprintln("b_process_reset_down: ");
    debug_b();

    for (uint8_t i = 0; i < 32; i++)
    {
        b_layer_oneshot_off(i);
        b_layer_pressed_off(i);
        b_layer_clear_layer(i);
    }
    layer_clear();

    b_mod_clear();
    b_unregister_mod_all_if_is_off();
}

static void b_process_reset_up(void)
{
    dprintln("b_process_reset_up: ");
    debug_b();

    // do nothing
}

static void b_process_layer_down(uint16_t keycode)
{
    dprintln("b_process_layer_down: ");
    debug_b();

    uint8_t tn = keycode - B_L_0;
    uint8_t cn = biton32(layer_state);
    uint8_t cbn = b_layer_get_layer(cn);
    b_layer_oneshot_on(tn);
    b_layer_pressed_on(tn);
    // repeat. e.g. L0 -> L1 -> L1
    if (cn != tn)
    {
        // loop. e.g. L0 -> L1 -> L3 -> L1
        if (tn == cbn)
        {
            b_layer_set_layer(cn, b_layer_get_layer(tn));
        }
        b_layer_set_layer(tn, cn);
        layer_move(tn);
    }

    debug_b();
}

static void b_process_layer_up(uint16_t keycode)
{
    dprintln("b_process_layer_up: ");
    debug_b();

    uint8_t tn = keycode - B_L_0;
    uint8_t cn = biton32(layer_state);
    uint8_t tbn = b_layer_get_layer(tn);
    b_layer_pressed_off(tn);
    if (b_layer_is_on(tn))
    {
        // do nothing
    }
    else
    {
        b_layer_clear_layer(tn);
        if (cn == tn)
        {
            layer_move(tbn);
        }
        else
        {
            b_layer_set_layer(cn, tbn);
        }
    }

    debug_b();
}

static void b_process_mod_down(uint16_t keycode)
{
    dprintln("b_process_mod_down: ");
    debug_b();

    uint8_t mn = keycode - B_M_C;
    b_mod_t mod = (1UL << mn);
    uint8_t mod_keycode = mn + KC_LCTL;
    b_mod_on(mod);
    register_code(mod_keycode);

    b_layer_update();

    debug_b();
}

static void b_process_mod_up(uint16_t keycode)
{
    dprintln("b_process_mod_up: ");
    debug_b();

    uint8_t mn = keycode - B_M_C;
    b_mod_t mod = (1UL << mn);
    b_mod_pressed_off(mod);
    b_unregister_mod_if_is_off(mod);

    debug_b();
}

static void b_process_others_down(uint16_t keycode)
{
    dprintln("b_process_others_down: ");
    debug_b();

    register_code(keycode);

    b_mod_oneshot_clear();
    b_unregister_mod_all_if_is_off();

    b_layer_update();

    debug_b();
}

static void b_process_others_up(uint16_t keycode)
{
    dprintln("b_process_others_up: ");
    debug_b();

    unregister_code(keycode);

    debug_b();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
    if (record->event.pressed)
    {
        switch (keycode)
        {
        case KC_NO:
            return false;
        case KC_A ... KC_EXSEL:
            b_process_others_down(keycode);
            return false;
        case B_RST:
            b_process_reset_down();
            return false;
        case B_M_C: // fall-through
        case B_M_S: // fall-through
        case B_M_A: // fall-through
        case B_M_G:
            b_process_mod_down(keycode);
            return false;
        case B_L_1: // fall-through
        case B_L_2: // fall-through
        case B_L_3: // fall-through
        case B_L_4: // fall-through
        case B_L_5:
            b_process_layer_down(keycode);
            return false;
        }
    }
    else
    {
        switch (keycode)
        {
        case KC_NO:
            return false;
        case KC_A ... KC_EXSEL:
            b_process_others_up(keycode);
            return false;
        case B_RST:
            b_process_reset_up();
            return false;
        case B_M_C: // fall-through
        case B_M_S: // fall-through
        case B_M_A: // fall-through
        case B_M_G:
            b_process_mod_up(keycode);
            return false;
        case B_L_1: // fall-through
        case B_L_2: // fall-through
        case B_L_3: // fall-through
        case B_L_4: // fall-through
        case B_L_5:
            b_process_layer_up(keycode);
            return false;
        }
    }
    return true;
};
