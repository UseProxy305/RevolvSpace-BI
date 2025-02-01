/*
** LED Class Header File
*/
#ifndef REVLOV_LED_H
#define REVLOV_LED_H

class LED {
    private:
        uint8_t mPinNumber;
    public:
        LED(uint8_t pinNumber); // Constructor Method
        //~LED(); Destructor method
        void turnOn();
        void turnOff();
        bool isTurnedOn();
        void toggle();
};

#endif /* REVLOV_LED_H */