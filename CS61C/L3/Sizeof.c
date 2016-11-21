#include <stdio.h>

int main(void) {
    double d;
    int array[5];
    struct { short a; char c; } s;
    
    printf("double: %2lu\n", sizeof(d));
    printf("array:  %2lu\n", sizeof(array));
    printf("s:      %2lu\n", sizeof(s));
}

