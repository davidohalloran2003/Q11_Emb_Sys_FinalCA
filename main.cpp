#include "mbed.h"

// Initialise the digital input and output
DigitalIn button(PC_13);   // Blue button connected to PC_13
DigitalOut led1(LED1);     // LED1
DigitalOut led2(LED2);     // LED2

int main() {
    // Set initial states
    led1 = 1;  // LED1 is ON
    led2 = 0;  // LED2 is OFF
    int flag = 0;

    while (1) {
        if (button == 0) {  // Button is pressed (assuming active low)
            if (flag == 0) {
                flag = 1;  // Set flag to 1
                led1 = !led1;  // Toggle LED1
                led2 = !led2;  // Toggle LED2
            }
        } else {
            flag = 0;  // Reset flag when button is not pressed
        }
    }
}