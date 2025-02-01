/*
** GPIO Class Header File
*/
#ifndef REVLOV_GPIO_H
#define REVLOV_GPIO_H

#if 0
I am not going to use this one since it will take 32 bits
typedef enum GPIOStatus {
    OUTPUT,
    INPUT
} GPIOStatus_t;
#endif /* 0 */

class GPIOx {
    private:
        uint8_t mPinNumber;
    public:
        GPIOx(uint8_t pinNumber, uint8_t mode);
        // ~GPIOx();
        int read();
        // void write(); // Not going to be used 
};

#endif /* REVLOV_GPIO_H */