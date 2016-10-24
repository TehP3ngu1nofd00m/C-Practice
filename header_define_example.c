// Example for importing header file that was created to a program to use its defined constants.
// File - header_define_example.c

// This program prints out the names of 3 children and their ages
// It reuses the variable character array "childname" and the variable "age".

#include <stdio.h>
#include <string.h>
#include "header_define_example.h"

main()
{
    int age;
    char childname[14] = "Thomas";

    printf("\n%s have %d kids.\n", FAMILY, KIDS);

    age = 11;
    printf("The oldest, %s, is %d.\n", childname, age);

    strcpy(childname, "Christopher");
    age = 6;
    printf("The middle boy, %s, is %d.\n", childname, age);

    strcpy(childname, "Benjamin");
    age = 3;
    printf("The youngest, %s, is %d.\n", childname, age);

    return 0;
}
