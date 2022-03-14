#include <stdio.h>

int main() {

    /* Initializing data types for variables. */
    int ones, tens, hundreds;

    /* Takes user input, stores digits in ones, tens, hundreds. */
    printf("Enter a three-digit number (i.e. 421): ");
    scanf("%1d%1d%1d", &hundreds, &tens, &ones);

    /* Printing output in reverse. */
    printf("Output: %1d%1d%1d", ones, tens, hundreds);

    return 0;
}