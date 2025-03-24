RGB_MATRIX_EFFECT(DEFAULT)
RGB_MATRIX_EFFECT(GAME)
RGB_MATRIX_EFFECT(LOWER)
RGB_MATRIX_EFFECT(RAISE)
// Step 2.
// Define effects inside the `RGB_MATRIX_CUSTOM_EFFECT_IMPLS` ifdef block
#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

// e.g: A simple effect, self-contained within a single method
static bool DEFAULT(effect_params_t* params) {
  RGB_MATRIX_USE_LIMITS(led_min, led_max);

  for (uint8_t i = led_min; i < led_max; i++) {
    rgb_matrix_set_color(i, 80,80,80);
    // if (HAS_FLAGS(g_led_config.flags[i], LED_FLAG_UNDERGLOW)) {
    //     rgb_matrix_set_color(i, 80,80,80);
    // } else {
    //     rgb_matrix_set_color(i, 0,0,0);
    // }
  }
  return rgb_matrix_check_finished_leds(led_max);
}

static bool GAME(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    rgb_matrix_set_color(14, 180,0,0);
    rgb_matrix_set_color(20, 180,0,0);
    rgb_matrix_set_color(21, 180,0,0);
    rgb_matrix_set_color(22, 180,0,0);
    return rgb_matrix_check_finished_leds(led_max);
}

static bool RAISE(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = 6; i <= 11; i++) {
        rgb_matrix_set_color(i, 0,0,80);
    }
    rgb_matrix_set_color(49, 0,0,80);
    rgb_matrix_set_color(50, 0,0,80);
    for (uint8_t i = 41; i <= 45; i++) {
        rgb_matrix_set_color(i, 0,0,80);
    }
    for (uint8_t i = 54; i <= 57; i++) {
        rgb_matrix_set_color(i, 0,0,80);
    }
    for (uint8_t i = 60; i <= 63; i++) {
        rgb_matrix_set_color(i, 0,0,80);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

static bool LOWER(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);
    for (uint8_t i = 54; i <= 57; i++) {
        rgb_matrix_set_color(i, 0,0,80);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
