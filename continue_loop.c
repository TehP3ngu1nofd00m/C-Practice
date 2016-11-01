// File - continue_loop.c

/* This program loops through 10 numbers and prints a message
depending on whether the number is odd or even. If it's odd,
it continues the loop and checked the next number. */

#include <stdio.h>

int main()
{
    int i;

    // loops through numbers 1 through 10

    for (i = 1; i <= 10; i++)
    {
        if ((i % 2) == 1) // odd #'s have remainder of 1
        {
            printf("I'm rather odd...\n");

            // jump to next iteration in loop
            // in order to keep iterating through 1-10

            continue;
        }

        printf("Even up!\n");
    }

    return 0;
}
