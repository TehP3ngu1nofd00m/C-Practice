// Switch case practice
// File - switch_case.c

/* This program makes a very simple
user interface and asks the user
what it wants to do. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;

    printf("What do you want to do?\n");
    printf("1. Add New Contact\n");
    printf("2. Edit Existing Contact\n");
    printf("3. Call Contact\n");
    printf("4. Text Contact\n");
    printf("5. Exit\n");

    do
    {
        printf("Enter your choice: ");
        scanf(" %d", &choice);
        switch (choice)
        {
            case (1): printf("\nWhat is the contact\'s name and number?\n");
                      break;
            case (2): printf("\nWhich contact do you want to change?\n");
                      break;
            case (3): printf("\nWho do you want to call?\n");
                      break;
            case (4): printf("\nWho do you want to text?\n");
                      break;
            case (5): exit(1); // Exits program early
            default:  printf("\n%d is not a valid choice.\n", choice);
                      printf("Try again. \n");
                      break;
        }
    } while ((choice < 1) || (choice > 5));

    return 0;
}
