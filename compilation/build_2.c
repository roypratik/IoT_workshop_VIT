int main() {
    int x = 10;
    int y = 30;
    int z = x+y;

    return z;
}


/* 1. Preprocessing: expanding the macros, removing comments*/

/*
gcc -E build_2.c -o build_2.i
*/

/* 2. Compilation: C code to Assemly code */

/* 
gcc -S build_2.c -o build_2.s
 */

/* 3. Assembly: Assembly code to object file */

/* 
gcc -c build_2.c -o build_2.o
 */

/* 4. Linking: Object file with libraries or oher object file to an executable */

/* 
gcc build_2.c -o build_2
 */

