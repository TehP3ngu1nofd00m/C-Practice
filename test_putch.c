// File - test_putch.c

#include <stdio.h>
#include <string.h>

int main()
{
    int first;
    int last;

    first = getch();

    putch(first);

    last = getch();

    putch(last);
}
