// More loop practice
// File for_loop.c

#include <stdio.h>
#include <string.h>

/* This program asks the user what movies they watched
and asks the user to rank them on a scale of 1-10. It
then displays the user's favorite and least favorite
movies. */

int main()
{
    int ctr, numMovies, rating, favRating, leastRating;
    char movieName[40], favorite[40], least[40];

    // Set favRating to 0 so that the logical test
    // will keep the highest ranked movie. Same
    // for the leastRating.

    favRating = 0;
    leastRating = 10;

    // Asks user how many movies they saw this year
    // and makes sure the number is valid

    do
    {
        printf("How many movies have you seen this year? ");
        scanf(" %d", &numMovies);

        //Checks to see if number is valid
        if (numMovies < 1)
        {
            printf("You haven't watched any movies?!?\nTry again.\n\n");
        }
    }
    while (numMovies < 1);

    for (ctr = 1; ctr <= numMovies; ctr++)
    {
        // Gets name of movie and user's rating

        printf("\nWhat was the name of the movie? (one word only!!) ");
        scanf(" %s", movieName);
        printf("Rate the movie on a scale of 1-10. ");
        scanf(" %d", &rating);

        // Check whether it's their favorite movie so far
        if (rating > favRating)
        {
            strcpy(favorite, movieName);
            favRating = rating;
        }

        // Check to see if it's their least favorite so far
        if (rating < leastRating)
        {
            strcpy(least, movieName);
            leastRating = rating;
        }
    }

    printf("\nYour favorite movie was %s.\n", favorite);
    printf("\nYour least favorite movie was %s.\n", least);

    return 0;
}
