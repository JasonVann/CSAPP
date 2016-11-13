#include <stdlib.h>
#include <stdio.h>

const size_t HUGE = 1 * 1024 * 1024 * 1024;

int main(int argc, char** argv)
{
    char* buf = malloc(HUGE * HUGE);
    if (buf == NULL)
    {
        fprintf(stderr, "Failure to allocate huge buffer at %u\n", __LINE__);
        exit(1);
    }
    printf("Buf at %p\n", buf);
    exit(0);
}
