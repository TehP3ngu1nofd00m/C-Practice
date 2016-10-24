// Fahrenheit to Celsius
// File fahrenheit_to_celsius.c

#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 1000 */
main()
{
    int fahr, celsius;
    int upper, lower, step;

    /* Upper and lower limits
    and step size of table */
    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper) {
        celsius = (fahr-32) * 5/9;
        printf("%d\t%d\n", fahr,
               celsius);
        fahr += step;
    }
}
