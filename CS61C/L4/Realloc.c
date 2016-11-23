#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a = malloc(10*sizeof(int));
    int *b = a;
    b[0] = 1;
    // increase size
    a = realloc(a, 1000*sizeof(int));
    int *c = malloc(10*sizeof(int));    
    c[0] = 2;
    printf("%d, %d, %d\n", a[0], b[0], c[0]);
    b[0] = 3;
    printf("%d, %d, %d\n", a[0], b[0], c[0]);

    printf("a = %p\n", a);
    printf("b = %p\n", b);
    printf("c = %p\n", c);
}

