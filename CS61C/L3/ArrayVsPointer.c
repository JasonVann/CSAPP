#include <stdio.h>

int main(void) {
    // array indexing
    int a[] = { 10, 20, 30 };
    printf("a[1]=%d, *(p+1)=%d, p[2]=%d\n", 
            a[1], *(a+1), *(&a[2]));
    // pointer arithmetic
    int *p = a;
    p++;  
    *p = 22;  
    p[1] = 33;  
    p[-1] = 11;
    for (int i=0;  i<3;  i++) 
        printf("a[%d] = %d, ", i, a[i]);
}

