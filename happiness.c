// Happiness scale
// File - happiness.c

/* This program asks the user how happy they are on a
    scale of 1-10, then prints a corresponding comment */

#include <stdio.h>

int main()
{
    int happy;

    printf("On a scale of 1 to 10, how happy are you?\n");
    scanf(" %d", &happy);

    printf("\n\n\n");

/* 4 groups of the happiness scale will
    display different messages */

    if (happy >= 8) {
        printf("Nice to know you're having a good day :)\n");
    }
    else if (happy >= 5) {
        printf("Things aren't so bad!\n");
    }
    else if (happy >= 3) {
        printf("Don't feel too sad.\n");
    }
    else {
        printf("Hope you feel better soon.\n");
    }

    printf("\n\n\n");

    return 0;
}
