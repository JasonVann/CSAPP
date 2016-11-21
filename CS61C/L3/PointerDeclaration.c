#include <stdio.h>

int main(void) {
    int a;
    int *p;
    printf("a = %d,  &p = %p,  p = %p,  *p = %d\n", 
            a, &p, p, *p);
    return 0;
}

