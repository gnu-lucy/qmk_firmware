RGB_MATRIX_EFFECT(transgender_flag)

#ifdef RGB_MATRIX_CUSTOM_EFFECT_IMPLS

bool transgender_flag(effect_params_t* params) {
    RGB_MATRIX_USE_LIMITS(led_min, led_max);

    rgb_matrix_set_color(0, 0x80, 0x80, 0x80);
    rgb_matrix_set_color(1, 0xff, 0x00, 0x00);
    rgb_matrix_set_color(2, 0xff, 0x00, 0x00);
    rgb_matrix_set_color(3, 0xff, 0x8e, 0x00);
    rgb_matrix_set_color(4, 0xff, 0x8e, 0x00);
    rgb_matrix_set_color(5, 0xff, 0xef, 0x00);
    rgb_matrix_set_color(6, 0xff, 0xef, 0x00);
    rgb_matrix_set_color(7, 0x00, 0x50, 0x10);
    rgb_matrix_set_color(8, 0x00, 0x50, 0x10);
    rgb_matrix_set_color(9, 0x00, 0x3c, 0xc8);
    rgb_matrix_set_color(10, 0x00, 0x3c, 0xc8);
    rgb_matrix_set_color(11, 0x4e, 0x00, 0x5a);
    rgb_matrix_set_color(12, 0x4e, 0x00, 0x5a);
    rgb_matrix_set_color(13, 0x80, 0x80, 0x80);
    rgb_matrix_set_color(14, 0x80, 0x80, 0x80);

    for (uint8_t i = 15; i < 30; i++) {
        rgb_matrix_set_color(i, 0x2d, 0xcb, 0xff);
    }
    for (uint8_t i = 30; i < 45; i++) {
        rgb_matrix_set_color(i, 0xff, 0x7d, 0x97);
    }
    for (uint8_t i = 45; i < 59; i++) {
        rgb_matrix_set_color(i, 0xff, 0xff, 0xff);
    }
    for (uint8_t i = 59; i < 72; i++) {
        rgb_matrix_set_color(i, 0xff, 0x7d, 0x97);
    }
    for (uint8_t i = 72; i < led_max; i++) {
        rgb_matrix_set_color(i, 0x2d, 0xcb, 0xff);
    }
    return rgb_matrix_check_finished_leds(led_max);
}

#endif // RGB_MATRIX_CUSTOM_EFFECT_IMPLS
