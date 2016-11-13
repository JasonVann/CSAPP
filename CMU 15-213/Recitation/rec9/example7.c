#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    pid_t pid;
    char* tgt = "child";
    pid = fork();
    if (pid == 0) {
         pid = getppid(); // Get parent pid
         tgt = "parent";
    }
    kill(pid, 9);
    printf("Sent SIGKILL to %s:%d\n", tgt,pid);
    exit(0);
}

