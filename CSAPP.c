// 2014-08-15
// Start studying Computer System: A progrmmer's Perspective
// Restarted on 2016-10-1

#include <stdio.h>
#include <string.h>

typedef unsigned char *byte_pointer;
//typedef double *byte_pointer;

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x){
    show_bytes((byte_pointer) &x, sizeof(int));
}

void show_pointer(void *x){
    show_bytes((byte_pointer) &x, sizeof(void *));
}

void inplace_swap(int *x, int *y){
  *y = *x ^ *y;
  *x = *x ^ *y;
  *y = *x ^ *y;
}

int main()
{
    printf("Hello, world\n");
    int i = 200 * 300 * 400 * 500;
    printf("i is %i\n",i);
    double d =  4 * 500;
    printf("d is %f\n", d);
    int ival = 12345;
    show_int(ival);
    
    show_pointer(&ival);
    const char *s = "abcdef";
    show_bytes((byte_pointer) s, strlen(s));

    int x = 100;
    int y = 200;
    inplace_swap(&x, &y);
    printf("x: %d\n", x);
    printf("y: %d\n", y);
    printf("x^x^y: %d\n", x^x^y);
    return 0;
}
