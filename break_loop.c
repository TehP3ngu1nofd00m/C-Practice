// File - break_loop.c

/* This program asks the user to input test grades for 25 students
and then computes the average. If fewer than 25 students took the
test, the user can enter -1 as a grade and break the loop, so only
entered grades will count towards the average */

#include <stdio.h>

int main()
{
    int numTest;
    float stTest, avg, total = 0.0;

    for (numTest = 0; numTest < 25; numTest++)
    {
        printf("\nWhat is the next student's test score? ");
        scanf(" %f", &stTest);
        if (stTest < 0.0)
        {
            break;
        }

        total += stTest;
    }

    avg = total / numTest;
    printf("\nThe average is %.1f%%.\n", avg);

    return 0;
}
