#include <stdlib.h> 
#include <stdio.h>

int main(void) {
    double *dp = malloc(100*sizeof(double));
    // ... do something with *dp ...
    // ...
    // Give memory back when done!
    free(dp);   // free knows it's 100 doubles    
}

