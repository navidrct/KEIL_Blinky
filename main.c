/* Copyright (c) 2009 Nordic Semiconductor. All Rights Reserved.
 *
 * The information contained herein is property of Nordic Semiconductor ASA.
 * Terms and conditions of usage are described in detail in NORDIC
 * SEMICONDUCTOR STANDARD SOFTWARE LICENSE AGREEMENT.
 *
 * Licensees are granted free, non-transferable use of the information. NO
 * WARRANTY of ANY KIND is provided. This heading must NOT be removed from
 * the file.
 *
 */

/** @file
 *
 * @defgroup blinky_example_main main.c
 * @{
 * @ingroup blinky_example
 * @brief Blinky Example Application main file.
 *
 */

#include <stdbool.h>
#include <stdint.h>
#include "nrf_delay.h"
#include "nrf_gpio.h"
#include "boards.h"

/**
 * @brief Function for application main entry.
 */
int main(void)
{
    // Configure LED-pins as outputs.
    nrf_gpio_cfg_output(LED_0);
    nrf_gpio_cfg_output(LED_1);

    // LED 0 and LED 1 blink alternately.
    while (true)
    {
        nrf_gpio_pin_clear(LED_0);
        nrf_gpio_pin_set(LED_1);
				//man navid hastam
			//its not working right
			//i think i get it right
        nrf_delay_ms(500);
				//man navid ansari hastam
			//i did it right finaly

        nrf_gpio_pin_clear(LED_1);
        nrf_gpio_pin_set(LED_0);

        nrf_delay_ms(500);
    }
}
/** @} */
