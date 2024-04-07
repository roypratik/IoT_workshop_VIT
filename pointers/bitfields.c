#include <stdio.h>
#include <stdint.h>

// Define a structure representing an 8-bit register with bitfields
typedef struct {
    volatile uint8_t bit0 : 1;
    volatile uint8_t bit1 : 1;
    volatile uint8_t bit2 : 1;
    volatile uint8_t bit3 : 1;
    volatile uint8_t bit4 : 1;
    volatile uint8_t bit5 : 1;
    volatile uint8_t bit6 : 1;
    volatile uint8_t bit7 : 1;
} Register;

int main() {
    // Create an instance of the Register structure
    Register reg = {0};  // Initialize all bits to 0
    
    // Create a pointer to the register
    Register *regPtr = &reg;

    // Manipulate bits using the pointer
    regPtr->bit0 = 1;  // Set bit 0
    regPtr->bit7 = 1;  // Set bit 7

    // Print the value of the register to verify the changes
    uint8_t *regValue = (uint8_t *)regPtr;
    printf("Register value: 0x%02X\n", *regValue);

    return 0;
}
