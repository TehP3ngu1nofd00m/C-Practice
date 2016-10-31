// Do ... While loop
// File - do_while_calc.c

#include <stdio.h>

/* This program multiply two numbers
together as long as the user keeps
inputing Y */

int main()
{
    float num1, num2, result;
    char choice;

    do
    {
        printf("Enter the first number to multiply: ");
        scanf(" %f", &num1);

        printf("Enter the second number to multiply: ");
        scanf(" %f", &num2);

        result = num1 * num2;
        printf("\n\n%.2f times %.2f equals %.2f.\n\n", num1, num2, result);

        printf("Do you want to multiply two more numbers? (Y/N)\n");
        scanf(" %c", &choice);

        // converts lowercase to uppercase - logical operator in while condition does this as well
        //if (choice == 'n')
        //{
        //    choice = 'N';
        //}
    }
    while (choice != 'N' && choice != 'n');

    return 0;
}
