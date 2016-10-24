// Age calculator
// File - age_calc.c

    /* This program asks the user
    for their birth year and tells
    them how old they are. Also
    checks for leap years. */

#include <stdio.h>
#define CURRENTYEAR 2016

int main()
{
    int yearBorn, age;

    printf("What year were you born?\n");
    scanf(" %d", &yearBorn);

    /* Checks if year is valid */

    if (yearBorn > CURRENTYEAR) {
        printf("Really? You haven\'t been born yet?\n");
        printf("Please enter a valid year for your birthday.\n");
        scanf(" %d", &yearBorn);
    }

    age = CURRENTYEAR - yearBorn;

    /* checks to see if program will display negative age */

    if (age-1 < 0) {
        printf("You are 0 years old!");
    }

    else {
        printf("\nYou are either %d or %d years old.\n", age-1, age);
        printf("If you haven't had your birthday yet, you will turn %d this year!", age);
    }


    /* Test for leap year */

    if ((yearBorn % 4) == 0) {
        printf("\nYou were born on a leap year!--Sweet!\n");
    }

    return 0;
}
