// Happiness scale
// File - happiness.c

    /* This program asks the user
    how happy they are on a scale
    of 1-10, then prints a
    corresponding comment */

#include <stdio.h>

int main()
{
    int happy;

    printf("On a scale of 1 to 10, how happy are you?\n");
    scanf(" %d", &happy);

    printf("\n\n\n");

    /* 4 groups of the happiness
    scale will display different
    messages */

    if (happy >= 8) {
        printf("KYS ya fokin normie.\n");
    }
    else if (happy >= 5) {
        printf("REEEEEEEEEEEEEEEEEEEEEEEEEEEE\n");
    }
    else if (happy >= 3) {
        printf("You are at peak happiness for a robot.\n");
    }
    else {
        printf("Everything is normal.\n\nLife is suffering and we all die in the end.\n");
    }

    printf("\n\n\n");

    return 0;
}
