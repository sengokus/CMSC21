/* Prints int and float values in various formats */

#include <stdio.h>

int main(void)
{
    /* Declaring variables to types int, float */
    int i;
    float x;

    /* Assigning variables */
    i = 40;
    x = 839.21f;

    /* Printing output, adding spaces if the variable requires more than minimum amount of space */
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
    printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

    return 0;
}
