// Example using compound counter syntax
// File - basic_counter2.c

// This program increases a counter from 1 to 5 then back to 1

#include <stdio.h>

int main()
{
    int ctr = 0;

    /* Adds/subtracts AFTER print statement.
    Counts from 0-4, then back to 0 */

    //printf("Counter is at %d.\n", ctr++);
    //printf("Counter is at %d.\n", ctr++);
    //printf("Counter is at %d.\n", ctr++);
    //printf("Counter is at %d.\n", ctr++);
    //printf("Counter is at %d.\n", ctr--);
    //printf("Counter is at %d.\n", ctr--);
    //printf("Counter is at %d.\n", ctr--);
    //printf("Counter is at %d.\n", ctr--);
    //printf("Counter is at %d.\n", ctr--);

    /* Adds/subtracts BEFORE print statement.
    Counts from 1-5, then back to 1 */
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", ++ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);
    printf("Counter is at %d.\n", --ctr);

    return 0;
}
