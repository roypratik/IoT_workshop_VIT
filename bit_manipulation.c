#include <stdio.h>

int main() {
    unsigned int x = 0b1010; // Binary representation: 1010

    // Setting the 2nd bit (0-indexed)
    x |= (1 << 2); // x now becomes 1110

    // Clearing the 3rd bit
    x &= ~(1 << 3); // x now becomes 0110

    // Toggling the 1st bit
    x ^= (1 << 1); // x now becomes 0100

    // Checking if the 2nd bit is set
    if (x & (1 << 2)) {
        printf("2nd bit is set.\n");
    } else {
        printf("2nd bit is not set.\n");
    }

    printf("Resulting value: %u\n", x); // Display the resulting value

    return 0;
}
