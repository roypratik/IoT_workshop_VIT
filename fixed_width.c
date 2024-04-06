#include <stdio.h>
#include <stdint.h>

int main() {
    int32_t i = 1000;    // A 32-bit signed integer
    uint8_t j = 255;     // An 8-bit unsigned integer
    int8_t  k = -129;     // An 8-bit signed integer
    
    printf("32-bit int: %d\n", i);
    printf("8-bit unsigned int: %u\n", j);
    printf("8-bit signed int: %d\n", k);

    // Demonstrating the fixed size nature
    printf("Size of 32-bit int: %zu bytes\n", sizeof(i));
    printf("Size of 8-bit unsigned int: %zu bytes\n", sizeof(j));
    printf("Size of 8-bit signed int: %zu bytes\n", sizeof(k));

    return 0;
}
