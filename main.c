#include <stdio.h>

int main() {
    /* delete line #5 and write your code in this function */
    char c = 'A';
    char * c_ptr = &c;

    printf(" c=%c p=%p c_ptr=%p c_ptr_addr=%p *c_ptr=%c \n",c, &c, c_ptr, &c_ptr, *c_ptr);
    return 0;
}