#include "mpconfigport.h"
#include "mphalport.h"

#define BUZZER_PIN GPIO_NUM_26

void NF_CUBE_ESP32S3_board_startup(void) {
    /* call default board startup handler */
    boardctrl_startup();
    /* silence the buzzer */
    mp_hal_pin_input(BUZZER_PIN);
}
