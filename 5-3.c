#include <stdio.h>

void function_1(int a) {
  printf("function_1(): a = %d\n", a);
}

void function_2(int b) {
  printf("function_2(): b = %d\n", b);
}
typedef void (*pf)(int);

int function1(int a) {

printf("%d", a);

}



int main() {
    pf p = function_1;
    p(10);

    void (*qf)(int);
    qf = &function_2;
    qf(20);

  typedef int (*function_ptr)(int);

  function_ptr x = function1;

  x(10);

    return 0;
}
