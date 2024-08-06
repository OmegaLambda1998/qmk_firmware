#pragma once

//
// --- Disable Features ---
//

// Don't have Cherry MX Lock switches so no need to compile support
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

// Not using oneshot actions
#define NO_ACTION_ONESHOT

// Not using tapping keys
#define NO_ACTION_TAPPING

// At most 8 layers
#define LAYER_STATE_8BIT

//
// --- RGB Matrix Lighting ---
//
//#define RGB_MATRIX_ENABLE

// reactive effects respond to keyreleases (instead of keypresses)
//#define RGB_MATRIX_KEYRELEASES
// number of milliseconds to wait until rgb automatically turns off
//#define RGB_MATRIX_TIMEOUT 0
// turn off effects when suspended
#define RGB_MATRIX_SLEEP
// limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
//#define RGB_MATRIX_LED_PROCESS_LIMIT (RGB_MATRIX_LED_COUNT + 4) / 5
// limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalent to limiting to 60fps (increases keyboard responsiveness)
//#define RGB_MATRIX_LED_FLUSH_LIMIT 16
// limits maximum brightness of LEDs out of 255. If not defined maximum brightness is set to 255
//#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 200
// Sets the default enabled state, if none has been set
//#define RGB_MATRIX_DEFAULT_ON true
// Sets the default mode, if none has been set
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_TYPING_HEATMAP
// Sets the default hue value, if none has been set
//#define RGB_MATRIX_DEFAULT_HUE 0
// Sets the default saturation value, if none has been set
//#define RGB_MATRIX_DEFAULT_SAT 255
// Sets the default brightness value, if none has been set
//#define RGB_MATRIX_DEFAULT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
// Sets the default animation speed, if none has been set
//#define RGB_MATRIX_DEFAULT_SPD 127
// Sets the default LED flags, if none has been set
//#define RGB_MATRIX_DEFAULT_FLAGS LED_FLAG_ALL
// disables control of rgb matrix by keycodes (must use code functions to control the feature)
//#define RGB_MATRIX_DISABLE_KEYCODES
// Triggers RGB keypress events on key down. This makes RGB control feel more responsive. This may cause RGB to not function properly on some boards
//#define RGB_TRIGGER_ON_KEYDOWN
// Convert solid reactive effects to gradient reactive effects
#define RGB_MATRIX_SOLID_REACTIVE_GRADIENT_MODE

//// Static Effects
// Static single hue, no speed support
#undef ENABLE_RGB_MATRIX_SOLID_COLOR
// Static dual hue, speed is hue for secondary hue
#undef ENABLE_RGB_MATRIX_ALPHAS_MODS
// Static gradient top to bottom, speed controls how much gradient changes
#undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN
// Static gradient left to right, speed controls how much gradient changes
#undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT

//// Single Hue Animations
// Single hue brightness cycling animation
#undef ENABLE_RGB_MATRIX_BREATHING
// Single hue band fading saturation scrolling left to right
#undef ENABLE_RGB_MATRIX_BAND_SAT
// Single hue band fading brightness scrolling left to right
#undef ENABLE_RGB_MATRIX_BAND_VAL
// Single hue 3 blade spinning pinwheel fades saturation
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT
// Single hue 3 blade spinning pinwheel fades brightness
#undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL
// Single hue spinning spiral fades saturation
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT
// Single hue spinning spiral fades brightness
#undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL

//// Gradient Animations
// Full keyboard solid hue cycling through full gradient
#undef ENABLE_RGB_MATRIX_CYCLE_ALL
// Full gradient scrolling left to right
#undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT
// Full gradient scrolling top to bottom
#undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN
// Full gradient scrolling out to in
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN
// Full dual gradients scrolling out to in
#undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL
// Full gradient Chevron shapped scrolling left to right
#undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON
// Full gradient spinning pinwheel around center of keyboard
#undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL
// Full gradient spinning spiral around center of keyboard
#undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL
// Full gradient spinning around center of keyboard
#undef ENABLE_RGB_MATRIX_DUAL_BEACON
// Full tighter gradient spinning around center of keyboard
#undef ENABLE_RGB_MATRIX_RAINBOW_BEACON
// Full dual gradients spinning two halfs of keyboard
#undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS

//// Random Effects
// Full tighter gradient of first half scrolling left to right and second half scrolling right to left
#undef ENABLE_RGB_MATRIX_FLOWER_BLOOMING
// Randomly changes a single key's hue
#undef ENABLE_RGB_MATRIX_RAINDROPS
// Randomly changes a single key's hue and saturation
#undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS
// Hue shifts up a slight ammount at the same time, then shifts back
#undef ENABLE_RGB_MATRIX_HUE_BREATHING
// Hue shifts up a slight ammount in a wave to the right, then back to the left
#undef ENABLE_RGB_MATRIX_HUE_PENDULUM
// Hue shifts up a slight ammount and then back down in a wave to the right
#undef ENABLE_RGB_MATRIX_HUE_WAVE
// Single hue fractal filled keys pulsing horizontally out to edges
#undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL
// Pulsing RGB flow along LED wiring with random hues
#undef ENABLE_RGB_MATRIX_PIXEL_FLOW
// Randomly light keys with random hues
#undef ENABLE_RGB_MATRIX_PIXEL_RAIN
// Modification to breathing animation, offset's animation depending on key location to simulate a river flowing
#undef ENABLE_RGB_MATRIX_RIVERFLOW
// LEDs turn on and off at random at varying brightness, maintaining user set color
#undef ENABLE_RGB_MATRIX_STARLIGHT
// LEDs turn on and off at random at varying brightness, modifies user set hue by +- 30
#undef ENABLE_RGB_MATRIX_STARLIGHT_DUAL_HUE
// LEDs turn on and off at random at varying brightness, modifies user set saturation by +- 30
#undef ENABLE_RGB_MATRIX_STARLIGHT_DUAL_SAT

//// Framebuffered Effects
// How hot is your WPM!
//#undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// That famous computer simulation
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN

//// Reactive Effects
// Pulses keys hit to hue & value then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
// Static single hue, pulses keys hit to shifted hue then fades to current hue
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE
// Hue & value pulse near a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE
// Hue & value pulse near multiple key hits then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE
// Hue & value pulse the same column and row of a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS
// Hue & value pulse the same column and row of multiple key hits then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS
// Hue & value pulse away on the same column and row of a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS
// Hue & value pulse away on the same column and row of multiple key hits then fades value out
//#undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS
// Full gradient & value pulse away from a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SPLASH
// Full gradient & value pulse away from multiple key hits then fades value out
//#undef ENABLE_RGB_MATRIX_MULTISPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH
// Hue & value pulse away from a single key hit then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_SPLASH
// Hue & value pulse away from multiple key hits then fades value out
#undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH
