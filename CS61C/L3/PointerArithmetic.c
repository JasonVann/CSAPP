#include <stdio.h>

int main(void) {
    char c[] = { 'a', 'b' };
    char *pc = c;
    pc++;
    printf("*pc=%c\n c=%p\npc=%p\npc-c=%ld\n", *pc, c, pc, pc-c);
    
    int i[] = { 10, 20 };
    int *pi = i;
    pi++;
    printf("*pi=%d\n i=%p\npi=%p\npi-i=%ld\n", *pi, i, pi, pi-i);
}

