#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int SZ = 10;
    int *p = malloc(SZ*sizeof(int));
    int *end = &p[SZ];
    while (p < end) *p++ = 0;
    free(p);    
}

