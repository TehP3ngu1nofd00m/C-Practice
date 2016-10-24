// Logical operator example
// File - logical_operators2.c

#include <stdio.h>

    /* Asks user if printer
    is on. Gives them a
    prompt for what to do */

int main()
{
    char answer;

    printf("Is your printer on (Y/N)?\n");
    scanf(" %c", &answer);

    if ((answer == 'Y') || (answer == 'N'))
    {
        // If a correct answer if typed:
        if (answer == 'N')
        {
            printf("***Turn the printer on now.***\n");
        }
        else
        {
            printf("Then get back to work!\n");
        }
    }
    else
    {
        printf("You did not enter a Y or N.\n");
    }

    return 0;
}
