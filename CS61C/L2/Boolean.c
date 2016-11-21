#include <stdio.h>

int main(void) {
    typedef int boolean;
    const boolean false = 0;
    const boolean true = 1;
    boolean b = 5>7;
    printf("b = %s\n", b ? "true" : "false");
}

