#include <stdio.h>

int main(void) {
    int x[] = { 2, 4, 6, 8, 10 };
    int *p = x;
    int **pp = &p;
    (*pp)++;
    (*(*pp))++;
    printf("%d\n", *p);
}

