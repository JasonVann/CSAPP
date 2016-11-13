#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(int argc, char** argv)
{
    pid_t pid;
    pid = fork();
    printf("%p - %d\n", &pid, pid);
    exit(0);
}
