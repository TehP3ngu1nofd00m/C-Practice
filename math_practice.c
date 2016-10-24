// Practice with mathematical operators in C
// File - math_practice.c

#include <stdio.h>

main()
{
    // Dividing integers vs floats

    float a = 19.0;
    float b = 5.0;
    float floatAnswer;

    int x = 19.0;
    int y = 5.0;
    int intAnswer;

    /* Dividing float variables. Answer is 3.8 */
    floatAnswer = a / b;
    printf("%.1f divided by %.1f equals %.1f.\n", a, b, floatAnswer);

    /* Dividing integer variables. Answer is 3 */
    intAnswer = x / y;
    printf("%d divided by %d equals %d.\n", x, y, intAnswer);

    /* This answer is 3, since int variable truncates and doesn't round up. */
    intAnswer = a / b;
    printf("%.1f divided by %.1f equals %d.\n", a, b, intAnswer);

    /* Modulus operator gives only the remainder, which is 4 in this case */
    intAnswer = x % y;
    printf("%d modulus (remainder of) %d equals %d.\n", x, y, intAnswer);

    return 0;
}
