#include <stdio.h>

void foo(int *x, int *y) {  
    if ( *x < *y ) { 
        int t = *x; 
        *x = *y; 
        *y = t; 
    }
}

int main(void) {
    int a=3, b=1, c=5;
    foo(&a, &b);
    foo(&b, &c);
    printf("a=%d b=%d\n", a, b);
}

