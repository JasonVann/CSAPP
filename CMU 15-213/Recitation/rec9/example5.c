#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int status = 0, ret = 0;
    pid_t pid = fork();
    if (pid == 0)
    {
        pid = fork();
        exit(getpid());
    }
    ret = waitpid(-1, &status, 0);
    printf("Process %d exited with %d\n", ret, status);
    ret = waitpid(-1, &status, 0);
    printf("Process %d exited with %d\n", ret, status);
}
