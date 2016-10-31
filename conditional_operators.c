// Is divisible by 2-9 test
// File conditional_operators.c

#include <stdio.h>

    /* This program takes user input of 1-100 and
    sees if it is divisible by numbers 2-9 using
    conditional operators */

int main()
{
    int number;
    printf("Pick a number between 0 and 100.\n");
    scanf(" %d", &number);

    printf("\n%d %s divisible by 2.\n", number, (number % 2 == 0) ? ("is") : ("is not"));
    printf("%d %s divisible by 3.\n", number, (number % 3 == 0) ? ("is") : ("is not"));
    printf("%d %s divisible by 4.\n", number, (number % 4 == 0) ? ("is") : ("is not"));
    printf("%d %s divisible by 5.\n", number, (number % 5 == 0) ? ("is") : ("is not"));
    printf("%d %s divisible by 6.\n", number, (number % 6 == 0) ? ("is") : ("is not"));
    printf("%d %s divisible by 7.\n", number, (number % 7 == 0) ? ("is") : ("is not"));
    printf("%d %s divisible by 8.\n", number, (number % 8 == 0) ? ("is") : ("is not"));
    printf("%d %s divisible by 9.\n", number, (number % 9 == 0) ? ("is") : ("is not"));

    return 0;
}
