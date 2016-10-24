// Example using long counter syntax
// File basic_counter.c

// This program increases a counter from 1 to 5 then back to 1

#include <stdio.h>

main()
{
    int ctr = 0;

    ctr = ctr + 1; // Increases counter to 1
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // Increases counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // Increases counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // Increases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr + 1; // Increases counter to 5
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // Decreases counter to 4
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // Decreases counter to 3
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // Decreases counter to 2
    printf("Counter is at %d.\n", ctr);
    ctr = ctr - 1; // Decreases counter to 1
    printf("Counter is at %d.\n", ctr);

    return 0;
}
