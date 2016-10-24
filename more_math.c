// This program asks the user for how many tires they want and price per tire
// It also adds the price up and calculates for sales tax
// File - more_math.c

#include <stdio.h>
// just in case sales tax changes
#define SALESTAX .07

main()
{
    int numTires;
    float tirePrice, beforeTax, netSales;

    printf("How many tires did you purchase? ");
    scanf(" %d", &numTires);
    printf("What was the cost per tire (enter in $XX.XX format)? ");
    scanf(" $%f", &tirePrice);

    /* Compute the price */

    beforeTax = tirePrice * numTires;
    netSales = beforeTax + (beforeTax * SALESTAX);

    printf("You spent $%.2f on your tires.\n\n\n", netSales);

    return 0;
}
