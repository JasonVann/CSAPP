#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const int SZ = 10;
    int *array = malloc(SZ*sizeof(int));
    for (int *p = array;  p<&array[SZ]; ) 
        *p++ = 0;
    free(array);    
}

