#include <stdbool.h>
#include <stdio.h>
#include "debug.h"
#include "timer.h"

#define GCC_VERSION (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)

debug_config_t debug_config = {
/* GCC Bug 10676 - Using unnamed fields in initializers
 * https://gcc.gnu.org/bugzilla/show_bug.cgi?id=10676 */
#if GCC_VERSION >= 40600
    .enable   = false,
    .matrix   = false,
    .keyboard = false,
    .mouse    = false,
    .reserved = 0
#else
    {
        false,  // .enable
        false,  // .matrix
        false,  // .keyboard
        false,  // .mouse
        0       // .reserved
    }
#endif
};

#if defined(RING_BUFFER) && !defined(NO_DEBUG)

#define RING_BUFFER_SIZE 60
static char *  ring_buffer[RING_BUFFER_SIZE];
static uint32_t ring_buffer_time[RING_BUFFER_SIZE];
static uint8_t ring_head = 0;
static uint8_t ring_tail = 0;

uint8_t _incr(uint8_t v) { return (v + 1) % RING_BUFFER_SIZE; }

void ring_buffer_print(void) {
    for (uint8_t i = ring_head; i != ring_tail; i = _incr(i)) {
        printf("%03lu.%03lu: %s\n", ring_buffer_time[i]/1000, ring_buffer_time[i]%1000, ring_buffer[i]);
    }
}

void ring_buffer_iterator(void (*fun)(const char *)) {
    char buffer[60];
    for (uint8_t i = ring_head; i != ring_tail; i = _incr(i)) {
        sprintf(buffer, "%03lu.%03lu: %s\n", ring_buffer_time[i]/1000, ring_buffer_time[i]%1000, ring_buffer[i]);
        (*fun)(buffer);
    }
}

void ring_buffer_insert(char *str) {
    ring_buffer[ring_tail] = str;
    ring_buffer_time[ring_tail] = timer_read32();
    if (_incr(ring_tail) == ring_head) {
        ring_head = _incr(ring_head);
    }
    ring_tail = _incr(ring_tail);
}

void ring_buffer_clear(void) { ring_head = ring_tail = 0; }

#endif
