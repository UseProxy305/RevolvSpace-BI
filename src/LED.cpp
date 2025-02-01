/*
** LED Class Source File
*/
#include "config.hpp"
#include "LED.hpp"

LED::LED(uint8_t pinNumber) {
    for (;;) {
        if ((pinNumber > LED_PIN_NUMBER_MAX) || (pinNumber < LED_PIN_NUMBER_MIN)) {
            mPinNumber = LED_PIN_NUMBER_DEFAULT;
            Serial.println("Pin Number Selection Out of range: set as default");
        } else {
            mPinNumber = pinNumber;
        }

        pinMode(mPinNumber, OUTPUT);
        digitalWrite(mPinNumber, LOW);
        delay(100);
        if (LOW != digitalRead(mPinNumber)){
            Serial.println("Couldn't start with turned off LED");
        }
        break;
    }
}

void LED::turnOn() {
    digitalWrite(this->mPinNumber, HIGH);
};

void LED::turnOff() {
    digitalWrite(this->mPinNumber, LOW);
};

bool LED::isTurnedOn() {
    return (HIGH == digitalRead(this->mPinNumber));
};

void LED::toggle() {
    uint8_t isTurned = isTurnedOn();
    for (;;) {
        if (true == isTurned) {
            digitalWrite(this->mPinNumber, LOW);
            break;
        }
        else {
            digitalWrite(this->mPinNumber, HIGH);
            break;
        }
        break;
    }

}