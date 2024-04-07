#include <stdio.h>
#include <stdint.h>

// Assume this is the address where the status register is mapped
#define STATUS_REGISTER_ADDRESS 0x40001000U

// Define a pointer to access the status register
// It's a pointer to a const volatile uint8_t, since it's a read-only 8-bit register
const volatile uint8_t * const statusRegister = (const volatile uint8_t * const) STATUS_REGISTER_ADDRESS;

int main() {
    // Reading the value of the status register
    uint8_t status = *statusRegister;

    // Checking the status of bit 0
    if (status & 0x01) {
        printf("Bit 0 is set.\n");
    } else {
        printf("Bit 0 is not set.\n");
    }

    // Note: We don't write to the status register since it's read-only

    return 0;
}
