// File putchar.c

// This program prints a message on the screen using the putchar() I/O function

#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    char msg[] = "C is fun";

    for (i = 0; i < strlen(msg); i++)
    {
        putchar(msg[i]); // Outputs a single character at a time per loop
    }
    putchar('\n'); // One line break after loop is done

    return 0;
}
