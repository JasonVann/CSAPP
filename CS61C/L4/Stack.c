#include <stdio.h>
#include <stdlib.h>

void a() {
    int a_local = 0;
    b(a_local);
}

int b(int arg) {
    int b_local = 5;
    return 2*arg + b_local;    
}

int main(void) {
    a();
    b(7);
}

