#include <stdio.h>

int main() {

    /* Initializing data types for variables. */
    int ones, tens;

    /* Takes user input, stores digits in ones, tens. */
    printf("Enter a two-digit number (i.e. 69): ");
    scanf("%1d%1d", &tens, &ones);

    /* Printing output in reverse. */
    printf("Output: %1d%1d", ones, tens);

    return 0;
}