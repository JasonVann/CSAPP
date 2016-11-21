#include <stdio.h>
#include <string.h>

int len(char *s){
    return strlen(s);
}

void iptoa(char *s, int *p)
{
    int val = *p;
    sprintf(s, "%d", val);
}

int intlen(int x){
    int v;
    char buf[12];
    v = x;
    iptoa(buf, &v);
    
    printf("%s\n", buf);
    return len(buf);
}

int main()
{
    int a = 51234;

    printf("%d\n", intlen(a));
    printf("%d\n", a);
    return 0;
}
