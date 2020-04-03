#include "b_mod.h"

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

// b_mod_oneshot

void b_mod_oneshot_clear(void)
{
    b_mod_oneshot_off(B_MOD_CTL);
    b_mod_oneshot_off(B_MOD_SFT);
    b_mod_oneshot_off(B_MOD_ALT);
    b_mod_oneshot_off(B_MOD_GUI);
}

bool b_mod_oneshot_is_on(b_mod_t b)
{
    return !!(b_mods & b);
}

void b_mod_oneshot_off(b_mod_t b)
{
    b_mods = (b_mods & 0xF0) | (b_mods & ~b);
}

void b_mod_oneshot_on(b_mod_t b)
{
    b_mods |= b;
}

// b_mod_pressed

void b_mod_pressed_clear(void)
{
    b_mod_pressed_off(B_MOD_CTL);
    b_mod_pressed_off(B_MOD_SFT);
    b_mod_pressed_off(B_MOD_ALT);
    b_mod_pressed_off(B_MOD_GUI);
}

bool b_mod_pressed_is_on(b_mod_t b)
{
    return !!(b_mods & (b << 4));
}

void b_mod_pressed_off(b_mod_t b)
{
    b_mods &= ~(b << 4);
}

void b_mod_pressed_on(b_mod_t b)
{
    b_mods |= (b << 4);
}

// b_mod

void b_mod_clear(void)
{
    b_mod_off(B_MOD_CTL);
    b_mod_off(B_MOD_SFT);
    b_mod_off(B_MOD_ALT);
    b_mod_off(B_MOD_GUI);
}

bool b_mod_is_on(b_mod_t b)
{
    return b_mod_oneshot_is_on(b) || b_mod_pressed_is_on(b);
}

void b_mod_off(b_mod_t b)
{
    b_mod_oneshot_off(b);
    b_mod_pressed_off(b);
}

void b_mod_on(b_mod_t b)
{
    b_mod_oneshot_on(b);
    b_mod_pressed_on(b);
}
