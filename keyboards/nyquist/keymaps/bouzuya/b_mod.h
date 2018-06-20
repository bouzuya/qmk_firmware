#ifndef B_MOD_H
#define B_MOD_H

#include "action_layer.h"

typedef enum {
    B_MOD_CTL = 0b00000001,
    B_MOD_SFT = 0b00000010,
    B_MOD_ALT = 0b00000100,
    B_MOD_GUI = 0b00001000
} b_mod_t;

void b_mod_oneshot_clear(void);
bool b_mod_oneshot_is_on(b_mod_t b);
void b_mod_oneshot_off(b_mod_t b);
void b_mod_oneshot_on(b_mod_t b);

void b_mod_pressed_clear(void);
bool b_mod_pressed_is_on(b_mod_t b);
void b_mod_pressed_off(b_mod_t b);
void b_mod_pressed_on(b_mod_t b);

void b_mod_clear(void);
bool b_mod_is_on(b_mod_t b);
void b_mod_off(b_mod_t b);
void b_mod_on(b_mod_t b);;

#endif
