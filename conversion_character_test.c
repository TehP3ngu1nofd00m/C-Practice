#include <stdio.h>

// playing with Conversion Characters
// conversion_character_test.c

main()
{
    printf("%s %d %f %c\n", "This is a string", 69, 420.69, '~');

    printf("%.20f\n", 10.12345678912345678912);

    /* outputs      10.12345678912345700000 */
    /* floating points go out to 15 decimal places, and estimates 15th decimal place */

// with 15 decimal places

    printf("%.15f\n", 8.000000000000004); /* outputs 8.000000000000004 */
    printf("%.15f\n", 8.000000000000005); /* outputs 8.000000000000005 */
    printf("%.15f\n", 8.000000000000006); /* outputs 8.000000000000005 */
    printf("%.15f\n", 8.000000000000007); /* outputs 8.000000000000007 */

    /* the 15th decimal place is rounded up when equal to or after 6 */


// with 16 decimal places

    printf("%.15f\n", 8.0000000000000064); /* outputs 8.000000000000007 */
    printf("%.15f\n", 8.0000000000000065); /* outputs 8.000000000000007 */
    printf("%.15f\n", 8.0000000000000066); /* outputs 8.000000000000007 */

    printf("%.15f\n", 8.0000000000000051); /* outputs 8.000000000000005 */
    printf("%.15f\n", 8.0000000000000052); /* outputs 8.000000000000005 */
    printf("%.15f\n", 8.0000000000000053); /* outputs 8.000000000000005 */

    printf("%.15f\n", 8.0000000000000049); /* outputs 8.000000000000005 */

// WITH 1's instead of 0's
// with 15 decimal places

    printf("%.15f\n", 8.111111111111114); /* outputs 8.111111111111114 */
    printf("%.15f\n", 8.111111111111115); /* outputs 8.111111111111114 */
    printf("%.15f\n", 8.111111111111116); /* outputs 8.111111111111116 */

// with 16 decimal places

    printf("%.15f\n", 8.1111111111111164); /* outputs 8.111111111111116 */
    printf("%.15f\n", 8.1111111111111165); /* outputs 8.111111111111116 */
    printf("%.15f\n", 8.1111111111111166); /* outputs 8.111111111111116 */

    printf("%.15f\n", 8.1111111111111151); /* outputs 8.111111111111116 */
    printf("%.15f\n", 8.1111111111111152); /* outputs 8.111111111111116 */
    printf("%.15f\n", 8.1111111111111153); /* outputs 8.111111111111116 */

    printf("%.15f\n", 8.1111111111111149); /* outputs 8.111111111111114 */

    /* apparently the 16th decimal place is irrelevant */

    return 0;
}
