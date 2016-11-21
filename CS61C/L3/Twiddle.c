#include <stdio.h>

int twiddle1(int *xp, int *yp) {
    *xp += *yp;
    *xp += *yp;
    return *xp;
}

int twiddle2(int *xp, int *yp) {
    *xp += 2 * (*yp);
    return *xp;
}

int main(void) {
    int a, b;
    a=0;  b=2;  printf("%d ",  twiddle1(&a, &b));
    a=0;  b=2;  printf("%d ",  twiddle2(&a, &b));
    
    a=0;  b=2;  printf("%d ",  twiddle1(&b, &b));
    a=0;  b=2;  printf("%d\n", twiddle2(&b, &b));
}

