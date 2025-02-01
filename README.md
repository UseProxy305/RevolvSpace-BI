# Revolv Space Project
Repository for take home case study

## Time Spent : 
Including all this repository and documentation, it took me 50-60 minutes

## Tools:
    
    - VSCode: It has lots of helpful extensions libraries. One of them is defined below:  

    - PlatformIO : It provides a way for compiling projects among different environment. Also, it has default or custom libraries without modifying it. In this way, I did basically the same things for a possible CMake can.

    - ESP32 Module : Although I'd like to do this project with a STM32 uController, I don't have any available one with me. That's why I choose ESP32.

    
## Assumption I've made:

    - ESP32 is used for sake of simplicity
    - config.hpp => Configuration and limitation are defined there
    - GPIO.hpp & GPIO.cpp => GPIOx Class Structure (naming is done quickly)
    - LED.cpp & LED.hpp => LED Class Structure
    - main.cpp => Main algorithm for reading gpio and turning on and off the LED
    - I assume that there is an external button directly to the GPIO Number 5. Of course, other hardware components are connected properly, such as pull down or pull up resistors.

## Notes:

Due to time limitation, I've spent limited time on this project in terms of logging, naming variables, functions etc. 