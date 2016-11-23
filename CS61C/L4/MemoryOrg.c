#include <stdio.h>
#include <stdlib.h>

int global = 1;

int twice(int i) { return 2*i; }

int main(void) {
    int stack = 2;
    int *heap = malloc(sizeof(int));  
    *heap = 3;
    int (*code)(int);  // pointer to "int func(int) {}"
    code = twice;
    printf("global  = %d, &global= %p\n", global, &global);
    printf("stack   = %d, &stack = %p\n", stack, &stack);
    printf("*heap   = %d, heap   = %p\n", *heap, heap);
    printf("code(4) = %d, code   = %p\n", twice(4), twice);
}

