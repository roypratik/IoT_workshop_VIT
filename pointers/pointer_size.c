#include <stdio.h>

int main() {
    int *intPtr;
    char *charPtr;
    double *doublePtr;
    void *voidPtr;

    int *intArray[5]; // Array of 5 integer pointers
    char *charArray[10]; // Array of 10 character pointers

    printf("Size of integer pointer: %zu bytes\n", sizeof(intPtr));
    printf("Size of character pointer: %zu bytes\n", sizeof(charPtr));
    printf("Size of double pointer: %zu bytes\n", sizeof(doublePtr));
    printf("Size of void pointer: %zu bytes\n", sizeof(voidPtr));

    printf("Size of array of 5 integer pointers: %zu bytes\n", sizeof(intArray));
    printf("Size of each integer pointer in the array: %zu bytes\n", sizeof(intArray[0]));
    printf("Size of array of 10 character pointers: %zu bytes\n", sizeof(charArray));
    printf("Size of each character pointer in the array: %zu bytes\n", sizeof(charArray[0]));

    return 0;
}
