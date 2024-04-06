#include <stdio.h>

// Two simple functions to be pointed to
int add(int x, int y) {
    return x + y;
}

int subtract(int x, int y) {
    return x - y;
}

// Function taking a function pointer as an argument
void performOperation(int a, int b, int (*operation)(int, int)) {
    int result = operation(a, b);
    printf("Result: %d\n", result);
}

int main() {
    // Declaring and initializing function pointers
    int (*op1)(int, int) = add;
    int (*op2)(int, int) = subtract;

    // Calling functions through pointers
    printf("Addition: %d\n", op1(10, 5));
    printf("Subtraction: %d\n", op2(10, 5));

    // Passing function pointers to another function
    performOperation(20, 10, add);
    performOperation(20, 10, subtract);

    return 0;
}
