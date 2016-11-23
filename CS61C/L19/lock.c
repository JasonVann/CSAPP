#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main(void) {
    omp_lock_t lock;
    omp_init_lock(&lock);
    
#pragma omp parallel
    {
        int id = omp_get_thread_num();
        
        // parallel section
        // ...
        
        omp_set_lock(&lock);        
        // start sequential section
        // ...
        printf("id = %d\n", id);
        
        // end sequential section
        omp_unset_lock(&lock);
        
        // parallel section
        // ...
        
    }
    omp_destroy_lock(&lock);
}

