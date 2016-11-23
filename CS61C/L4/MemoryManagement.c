#include <stdio.h>
#include <stdlib.h>

int static_data = 55;

void f(char c) {
    int local_data = 4;
    int *heap_data 
        = malloc(50*sizeof(int));
}

int main(void) {
    int local_data;
    char more_local_data = 'X';
    f(more_local_data);
}

