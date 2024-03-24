#include <stdio.h>

int main() {
  int i = 10;

  void *pi = &i;

  printf("pi: %p, &i: %p\n", pi, &i);
  // printf("*pi: %d\n", *pi); this fails, can't dereference a void pointer without cast
  printf("*pi: %d\n", *((int *)pi));

  return 0;
}
