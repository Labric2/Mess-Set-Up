// ESP-IDF starter structure for this component.
// Keep the wiring from the pinout section, then move the read/write logic into app_main().

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void app_main(void) {
  printf("BME280 ESP32 Sensor Wiring and Code ready\n");
  while (true) {
    // Add component read/write code here.
    vTaskDelay(pdMS_TO_TICKS(1000));
  }
}