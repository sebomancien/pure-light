#include "driver/gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include <stdio.h>

void app_main(void)
{
    gpio_set_direction(GPIO_NUM_9, GPIO_MODE_INPUT);
    gpio_set_pull_mode(GPIO_NUM_9, GPIO_PULLUP_ONLY);
    gpio_set_direction(GPIO_NUM_8, GPIO_MODE_OUTPUT);

    while (1) {
        if (gpio_get_level(GPIO_NUM_9)) {
            gpio_set_level(GPIO_NUM_8, 0);
        } else {
            gpio_set_level(GPIO_NUM_8, 1);
        }

        vTaskDelay(10);
    }
}
