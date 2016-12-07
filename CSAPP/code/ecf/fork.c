/* $begin fork */
#include "csapp.h"
#include <sys/wait.h>

int main() 
{
    pid_t pid;
    int x = 1;
    Fork();
    pid = Fork(); //line:ecf:forkreturn
    if (pid == 0) {  /* Child */
    printf("child : x=%d\n", ++x); //line:ecf:childprint
    exit(0);
    }

    /* Parent */
    printf("parent: x=%d\n", --x); //line:ecf:parentprint
    exit(0);
}
/* $end fork */
