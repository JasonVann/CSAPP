#include <stdio.h>

void next_el(int **h) {
    *h = *h + 1;
}

int main(void) {
    int A[] = { 10, 20, 30 };
    int *p = A;
    next_el(&p);
    printf("*p = %d\n", *p);        
}

