#include <stdio.h>

int main(void) {
    int a = 77;  // declare and initialize a
    printf("1 a = %d\n", a);
    int *p = &a; // pointer to a
    printf("2 address of a = %p\n", p);
    int b = *p;  // "dereference" p
    printf("3 b = %d\n", b);
    printf("4 address of b = %p\n", &b);
    *p = -5;     // assignment via pointer
    printf("5 a = %d\n", a);
    printf("6 b = %d\n", b);
    *(&b) = 32;
    printf("7 b = %d\n", b);
}

