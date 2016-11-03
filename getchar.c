// File - getchar.c

// This program demonstrates the getchar() I/O function
// It takes a user input, stores it in a character array, then
// prints it backwards using the putchar() function

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char msg[25];

    printf("Type up to 25 characters and then press Enter...\n");
    for (i = 0; i < 25; i++)
    {
        msg[i] = getchar(); // Outputs a single character

        if (msg[i] == '\n') // This makes it so when you press enter, the loop breaks
        {
            i--;
            break;
        }
    }

    putchar('\n'); // One line break after loop is done

    for (; i >= 0; i--) // i == 24 from last for loop
    {
        putchar(msg[i]);
    }

    putchar('\n');

    return 0;
}
