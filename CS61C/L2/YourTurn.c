#include <stdio.h>

int main() {
    typedef enum { happy, sad, bored } Feeling;
    Feeling today = sad;
    
    if (today = happy) 
        printf("Great day! %d\n", today);
    else 
        printf("Leave me in peace %d\n", today);
}

