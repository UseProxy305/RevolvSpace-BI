/**
*       Main File for the project
*       Done by Berkay Ipek
*
*
*/

/* Includes */
#include "config.hpp"
#include "LED.hpp"
#include "GPIO.hpp"

/* Definitions */

/* Declarations */

/* Variables */

LED ledHandle(LED_PIN_NUMBER_DEFAULT);
GPIOx button(GPIO_PIN_NUMBER_DEFAULT, INPUT);

/* Functions */

void setup() {  
    /* Console initialize */
    Serial.begin(UART_MONITOR_BAUD_RATE);
}

void loop() {
    delay(10); // For safety purposes
    bool buttonState = false;
    bool newButtonState;

    while(true) {
        newButtonState = button.read();
        if (newButtonState && !buttonState) {
            ledHandle.toggle();
        }
        buttonState = newButtonState;
        delay(100); // To prevent debouncing effect 
    }

}
