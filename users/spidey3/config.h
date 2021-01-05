#pragma once

#define USB_POLLING_INTERVAL_MS 1

#define LED_DISABLE_WHEN_USB_SUSPENDED true
#define RGB_DISABLE_WHEN_USB_SUSPENDED true
#define RGBLIGHT_LAYERS
#define RGBLIGHT_MAX_LAYERS 17
#define RGBLIGHT_LAYER_BLINK
#define RGBLIGHT_LAYERS_OVERRIDE_RGB_OFF
#define RGBLIGHT_STARTUP_ANIMATION

#undef RGBLIGHT_ANIMATIONS
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_TWINKLE

#define UNICODE_TYPE_DELAY 5
#define UNICODE_SELECTED_MODES UC_MAC, UC_LNX, UC_WINC

#define SPI_DEBUG_SCAN_RATE

#undef MANUFACTURER
#define MANUFACTURER Window of Fire
