#include <stdio.h>
#include <omp.h>

void main () {	 
    const int NUM_THREADS = 1000;
    const long num_steps = 100000; 
    double step = 1.0/((double)num_steps); 
    double sum[NUM_THREADS];
    for (int i=0; i<NUM_THREADS; i++) sum[i] = 0;
    double pi = 0;
    omp_set_num_threads(NUM_THREADS);
#pragma omp parallel
    {
        int id = omp_get_thread_num();
        for (int i=id; i<num_steps; i+=NUM_THREADS) {
            double x = (i+0.5) *step; 
            sum[id] += 4.0*step/(1.0+x*x); 
        }
        pi += sum[id];
    }
    printf ("pi = %6.12f\n", pi);
}

