#include <stdio.h>

int main(void) {
    typedef struct { int x, y; } Point;
    Point p1;
    p1.x = 0;   p1.y = 123;
    
    Point p2 = { 77, -8 };
    printf("p2 at (%d,%d)\n", p2.x, p2.y);
}

