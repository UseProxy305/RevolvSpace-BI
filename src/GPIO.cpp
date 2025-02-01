/*
** GPIO Class Source File
*/
#include "config.hpp"
#include "GPIO.hpp"

GPIOx::GPIOx(uint8_t pinNumber, uint8_t mode) {
    for (;;) {
        if ((pinNumber > GPIO_PIN_NUMBER_MAX) || (pinNumber < GPIO_PIN_NUMBER_MIN)) {
            mPinNumber = GPIO_PIN_NUMBER_DEFAULT;
            Serial.println("Pin Number Selection Out of range: set as default");
        } else {
            mPinNumber = pinNumber;
        }

        if ((OUTPUT != mode) || (INPUT != mode)) {
            mode = INPUT;
            Serial.println("Pin Mode Selection Out of range: set as default");
        }
        pinMode(mPinNumber, mode);
        break;
    }
}

int GPIOx::read() {
    return digitalRead(this->mPinNumber);
}
