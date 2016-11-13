#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int status;
    pid_t pid;
    if (fork() == 0)
    {
        pid = fork();
        printf("HC: %d\n", getpid());
        if (pid == 0) {exit(0);}
    }
    pid = wait(&status);
    printf("BT: %d\n", pid);
    exit(0);
}
