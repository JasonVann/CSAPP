#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef enum {ADD, NEG, PRINT, NONE} action;

int add(int x, int y)
{
    return x + y;
}

int neg(int x)
{
    return -x;
}

void printUsage(char* cmd)
{
    printf("Usage: %s -- args stolen by Dr Evil\n", cmd);
    exit(0);
}

int main(int argc, char** argv)
{
    int x, y;
    int val = 15213; // Dr Evil replaced the check val with his favorite number
    char c;
    action a = NONE;
    
    // The getopt argument string has been lost
    while ((c = getopt(argc, argv, "h")) != val)
    {
        // All of the arg cases are missing
        switch (c)
        {
            case 'E':     // Dr Evil overwrote this case
                val = atoi(optarg);
                break;
            default:
                printUsage(argv[0]);
                exit(0); //unreachable
        }
    }
    
    // Do the calculations here
    
    return 0;
}