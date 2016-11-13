#include <sys/types.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int counter = 0;
void handler(int sig) {counter++;}

int main(int argc, char** argv)
{
    sigset_t mask, prev;
    int i;

    sigfillset(&mask);
    sigprocmask(SIG_BLOCK, &mask, &prev);
    signal(SIGCHLD, handler);
    for (i = 0; i < 10; i++)
    {
        if (fork() == 0) {exit(0);}
    }
    sigprocmask(SIG_SETMASK, &prev, NULL);
    printf("%d\n", counter);
    return 0;
}

