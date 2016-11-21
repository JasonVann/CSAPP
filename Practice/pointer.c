#include <stdio.h>

// Pointers can point to functions
int fun(int x, int *p)
{
    return x + *p;
}

int main()
{
    int (*fp)(int, int *);
 
    fp = fun;

    int y = 1;
    int result = fp(3, &y);

    printf("result: %d\n", result);
}
