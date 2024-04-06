#include <stdio.h>
#include <stdlib.h>

int globalInitVar = 42;          // Initialized Data Segment
int globalUninitVar;             // Uninitialized Data Segment (BSS)

void function() {
    int stackVar = 10;           // Stack
    printf("Local variable on stack: %d\n", stackVar);
}

int main() {
    static int staticVar = 5;    // Initialized Data Segment
    int *heapVar = (int *)malloc(sizeof(int)); // Heap
    *heapVar = 20;               // Assigning value to the allocated memory

    printf("Global initialized variable: %d\n", globalInitVar);
    printf("Global uninitialized variable: %d\n", globalUninitVar);
    printf("Static variable: %d\n", staticVar);
    printf("Heap variable: %d\n", *heapVar);

    function();

    free(heapVar);               // Freeing heap memory
    return 0;
}
