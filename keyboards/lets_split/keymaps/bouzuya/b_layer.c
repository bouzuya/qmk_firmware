#include "b_layer.h"
#include "util.h"

typedef struct
{
    uint32_t layer;
    // 0b00000000
    //   ^^^^^^^^
    //   |||+---- (unused)
    //   ||+----- oneshot
    //   |+------ pressed
    //   +------- (unused)
    uint8_t state;
} b_layer_state_t;

b_layer_state_t b_layers[B_LAYER_LAYER_COUNT] = {};

// b_layer_oneshot

bool b_layer_oneshot_is_on(uint8_t n)
{
    return !!(b_layers[n].state & 0b00100000);
}

void b_layer_oneshot_off(uint8_t n)
{
    b_layers[n].state &= ~0b00100000;
}

void b_layer_oneshot_on(uint8_t n)
{
    b_layers[n].state |= 0b00100000;
}

// b_layer_pressed

bool b_layer_pressed_is_on(uint8_t n)
{
    return !!(b_layers[n].state & 0b01000000);
}

void b_layer_pressed_off(uint8_t n)
{
    b_layers[n].state &= ~0b01000000;
}

void b_layer_pressed_on(uint8_t n)
{
    b_layers[n].state |= 0b01000000;
}

// b_layer oneshot and pressed

bool b_layer_is_on(uint8_t n)
{
    return b_layer_oneshot_is_on(n) || b_layer_pressed_is_on(n);
}

// b_layer layer

void b_layer_clear_layer(uint8_t n)
{
    b_layer_set_layer(n, 0);
}

uint8_t b_layer_get_layer(uint8_t n)
{
    return biton32(b_layers[n].layer);
}

void b_layer_set_layer(uint8_t n, uint8_t ln)
{
    b_layers[n].layer = 1UL << ln;
}
