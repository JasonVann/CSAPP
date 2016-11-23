#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *upcase(char *str) {
    char *res = malloc(strlen(str));  // free?
    char *dp = res;
    while (*str) {
        char c = *str++;        
        if (c >= 'a' && c <= 'z') c += 'A' - 'a';
        *dp++ = c;
    }
    *dp = 0;
    return res;
}

int main(void) {
    char str[] = "Nice weather today!";
    printf("str= %s\n", str);
    printf("up = %s\n", upcase(str));
}

