#include <stdio.h>

int main() {
    typedef enum {red, green, blue} Color;
    Color pants = green;
    switch (pants) {
        case red:
            printf("red pants are hip\n");  break;
        case green:
            printf("green pants are weird\n");  break;
        default:
            printf("yet another color\n");
    }
    printf("pants = %d\n", pants);
}

