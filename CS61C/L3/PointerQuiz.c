#include <stdio.h>

int main(void) {
    int a = 3, b = -7;
    int *pa = &a, *pb = &b;
    *pb = 5;
    if (*pb > *pa) a = *pa - b;
    printf("a=%d b=%d\n", a, b);
}

