// Assigning variables--assigning_variables.c

#include <stdio.h>

main()
{
    char answer;
    int quantity;
    float price;
    float discount_price;
    float totalAmount;

    answer = 'B';
    quantity = 24;
    price = 7.95;
    discount_price = 9.95 * .65; // 35% discount
    totalAmount = discount_price * quantity; // two variables used in mathematical expression
}
