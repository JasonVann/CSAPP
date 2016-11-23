#include <stdio.h>
#include <math.h>

int *f() {
    int x = 5;
    return &x;
}

int main(void) {
    int *a = f();
    // ... some calculations ...
    double d = cos(1.57);
    // ... now use *a ...
    printf("a = %d\n", *a);
}

