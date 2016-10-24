// Practice with logical operators
// file logical_operators.c

    /* Program that asks user for
    a last name. If it starts with
    a letter between P and Q, they
    will be sent to a special room
    for their tickets */

#include <stdio.h>

int main()
{
    char name[25];
    printf("What is your last name?");
    printf("(Please capitalize!!)");
    scanf(" %s", name);

    if ((name[0] >= 'P') && (name[0] <= 'S'))
    {
        printf("You must go to room 2532 for your tickets.\n");
    }
    else
    {
        printf("You can get your tickets here.\n");
    }

    return 0;
}
