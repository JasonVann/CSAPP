#include <stdio.h>

void main () {	  
    const long num_steps = 10; 
    double step = 1.0/((double)num_steps); 
    double sum = 0.0;
    for (int i=0; i<num_steps; i++) {
        double x = (i+0.5) *step; 
        sum += 4.0*step/(1.0+x*x); 
    } 
    printf ("pi = %6.12f\n", sum);
}
