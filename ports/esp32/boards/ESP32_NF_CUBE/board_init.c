#include "mpconfigport.h"
#include "mphalport.h"

#include <esp_task_wdt.h>

#define BUZZER_PIN GPIO_NUM_26

void esp_task_wdt_isr_user_handler(void) {
    gpio_set_level(1, 0);
    gpio_set_level(2, 0);
}

void NF_CUBE_ESP32S3_board_startup(void) {
    /* call default board startup handler */
    boardctrl_startup();
    /* silence the buzzer */
    mp_hal_pin_input(BUZZER_PIN);
}
