#include <stdio.h>

int main() {
    int value = 10;
    int *ptr = &value;  // Pointer initialization

    printf("Value of 'value': %d\n", value);
    printf("Address of 'value': %p\n", (void *)&value);
    printf("Value of 'ptr': %p\n", (void *)ptr);
    printf("Content at the address stored in 'ptr': %d\n", *ptr);

    // Modifying the value via the pointer
    *ptr = 20;
    printf("New value of 'value': %d\n", value);

    // Pointer arithmetic
    int array[5] = {1, 2, 3, 4, 5};
    int *arrayPtr = array;  // Point to the first element of the array
    printf("First element: %d\n", *arrayPtr);
    arrayPtr++;  // Move to the next integer
    printf("Second element: %d\n", *arrayPtr);

    return 0;
}
