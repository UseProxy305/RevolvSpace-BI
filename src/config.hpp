/**
 * All Library dependencies and configuration will be here
 */
#ifndef REVLOV_CONFIG_H
#define REVLOV_CONFIG_H

#include <Arduino.h>
#include <esp32-hal-gpio.h>

/* UART Configuration */
#define UART_MONITOR_BAUD_RATE    115200

/* LED Configuration */
#define LED_PIN_NUMBER_DEFAULT 1
#define LED_PIN_NUMBER_MIN 1
#define LED_PIN_NUMBER_MAX 4

/* GPIO Configuration */
#define GPIO_PIN_NUMBER_DEFAULT 5
#define GPIO_PIN_NUMBER_MIN 1
#define GPIO_PIN_NUMBER_MAX 15

#endif /* REVLOV_CONFIG_H */