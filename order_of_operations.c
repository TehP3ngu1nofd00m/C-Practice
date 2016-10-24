// Order of operations practice
// File - order_of_operations.c

/* This program calculates the average of four grades and does basic math */

#include <stdio.h>

main()
{
    int grade1, grade2, grade3, grade4;
    float averageGrade, gradeDelta, percentDiff;

    /* The student got 88s on the first and third tests, so a multiple assignment statement works. */
    grade1 = grade3 = 88;

    grade2 = 79;

    // The user needs to enter the fourth grade
    printf("What did you get on the fourth test?");
    printf(" (an integer between 0-100)");
    scanf(" %d", &grade4);

    averageGrade = (grade1+grade2+grade3+grade4)/4;

    printf("Your average grade is %.1f.\n", averageGrade);

    gradeDelta = 95 - averageGrade;
    percentDiff = 100 * ((95-averageGrade) / 95);
    printf("Your grade is %.1f points lower than the ", gradeDelta);
    printf("top grade in the class (95)\n");
    printf("You are %.1f percent behind ", percentDiff);
    printf("that grade!\n\n\n");

    return 0;
}
