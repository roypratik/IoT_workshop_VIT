#include <stdio.h>
#include <stdlib.h>

#define REQUEST 1 * 1024 * 1024 * 1024

int main() {
  int *p;

  for (int i = 0; i < 1000000; i++) {
    p = (int *)malloc(REQUEST);
    printf("i:%d: p: %p\n", i, p);
    if (p == NULL)
      return -1;
  }

  return 0;
}
