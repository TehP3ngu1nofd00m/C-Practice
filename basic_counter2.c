// Example using compound counter syntax
// File - basic_counter2.c

// This program increases a counter from 1 to 5 then back to 1

#include <stdio.h>

main()
{
    int ctr = 0;

    ctr += 1; // Increases counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr += 1; // Increases counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr += 1; // Increases counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr += 1; // Increases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr += 1; // Increases counter to 5
    printf("Counter is at %d.\n", ctr);
    ctr -= 1; // Increases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr -= 1; // Increases counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr -= 1; // Increases counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr -= 1; // Increases counter to 1
    printf("Counter is at %d.\n", ctr);

    return 0;
}
