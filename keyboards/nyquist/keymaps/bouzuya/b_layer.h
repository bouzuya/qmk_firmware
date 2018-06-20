#ifndef B_LAYER_H
#define B_LAYER_H

#include "action_layer.h"

#ifndef B_LAYER_LAYER_COUNT
#define B_LAYER_LAYER_COUNT 32
#endif

bool b_layer_oneshot_is_on(uint8_t n);
void b_layer_oneshot_off(uint8_t n);
void b_layer_oneshot_on(uint8_t n);

bool b_layer_pressed_is_on(uint8_t n);
void b_layer_pressed_off(uint8_t n);
void b_layer_pressed_on(uint8_t n);

bool b_layer_is_on(uint8_t n);

void b_layer_clear_layer_state(uint8_t n);
uint32_t b_layer_get_layer_state(uint8_t n);
void b_layer_set_layer_state(uint8_t n, uint32_t ls);

#endif
