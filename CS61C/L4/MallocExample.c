#include <stdlib.h> 

int main(void) {
    // array of 50 ints ...
    int *ip = (int*)malloc(50*sizeof(int));
    
    // typecast is optional
    double *dp = malloc(1000*sizeof(double));
}

