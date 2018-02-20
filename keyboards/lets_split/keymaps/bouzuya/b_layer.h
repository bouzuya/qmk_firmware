#ifndef B_LAYER_H
#define B_LAYER_H

#include "action_layer.h"

bool b_layer_oneshot_is_on(uint8_t n);
void b_layer_oneshot_off(uint8_t n);
void b_layer_oneshot_on(uint8_t n);

bool b_layer_pressed_is_on(uint8_t n);
void b_layer_pressed_off(uint8_t n);
void b_layer_pressed_on(uint8_t n);

uint8_t b_layer_get_layer(uint8_t n);
void b_layer_set_layer(uint8_t n, uint8_t ln);

#endif
