#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    pid_t pid = fork();
    if (pid == 0) { exit(getpid());}
    else
    {
        int status = 0;
        waitpid(pid, &status, 0);
        printf("0x%x exited with 0x%x\n", pid, WEXITSTATUS(status));
    }
    exit(0);
}

