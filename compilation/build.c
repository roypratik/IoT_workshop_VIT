#include <stdio.h>

#define DEFINE_X 10
#define DEFINE_Y 20
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = DEFINE_X;
    int y = DEFINE_Y;
    int sum = add(x, y);

    if (sum > 15) {
        printf("Sum is greater than 15\n");
    } else {
        printf("Sum is 15 or less\n");
    }

    return 0;
}


/* 1. Preprocessing: expanding the macros, removing comments*/

/*
gcc -E build.c -o build.i
*/

/* 2. Compilation: C code to Assemly code */

/* 
gcc -S build.c -o build.s
 */

/* 3. Assembly: Assembly code to object file */

/* 
gcc -c build.c -o build.o
 */

/* 4. Linking: Object file with libraries or oher object file to an executable */

/* gcc build.c -o build
 */

