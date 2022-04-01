#include <stdio.h>

int main(void) {
    int days, weekday;

    /* Initializing the # of days in the month. */
    while (1) {
        printf("How many days in the month? Enter the number.\n   [1] 28\n   [2] 30\n   [3] 31\n[INPUT] ");
        scanf("%d", &days);

        if (days < 1 || days > 3) { // Input validation.
            printf("\nInvalid input! Enter 1, 2, or 3 only.\n");
        }
        else { // If valid, break.
            break;
        }
    }

    /* Initializing the start of the weekday. */
    while (1) {
        printf("\nWhich day of the week to start with? Enter the number.\n   [1] Sunday\n   [2] Monday\n   [3] Tuesday\n   [4] Wednesday\n   [5] Thursday\n   [6] Friday\n   [7] Saturday\n[INPUT] ");
        scanf("%d", &weekday);

        if (weekday < 1 || weekday > 7) { // Input validation.
            printf("\nInvalid input! Enter 1 to 7 only.\n");
        }
        else { // If valid, break.
            break;
        }
    }

    /* Initializing variable "days" using switch-case. */
    switch(days) {
        case 1:
            days = 28;
            break;
        case 2:
            days = 30;
            break;
        case 3:
            days = 31;
            break;
    }

    /* Printing standard calendar format of days of the week. */
    printf("\nSu Mo Tu We Th Fr Sa\n");
    for (int n = 1; n < weekday; n++) { // Prints spaces according to which weekday the calendar starts at.
        printf("   ");
    }

    for (int n = 1; n <= days; n++) { // Prints spaces between # of days of the month.
        printf("%2d ", n);

        if (n % 7 == ((8 - weekday) % 7)) { // Signifies end of row using (8 - weekday) % 7 and prints newline.
            printf("\n");
        }
    }
    return 0;
}