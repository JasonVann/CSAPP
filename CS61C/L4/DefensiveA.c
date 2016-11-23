#include <stdlib.h>
#include <stdio.h>

int main(void) {
    int* a = malloc(sizeof(int));
    // ...
    free(a);  // a no longer exists!
    int* b = malloc(sizeof(int));
    *b = 128;
    *a = 55;  // ERROR!
    printf("a=%d,  b=%d (==128!)\n",
            *a, *b);
}

