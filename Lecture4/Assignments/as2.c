#include <stdio.h>

int main(void) {
    int i = 0; // test var
    printf("While Loop:\n");
    while (i < 10) {
        printf("%d ", i);
        i++;
    }

    i = 0; // test var
    printf("\nFor Loop:\n");
    for (; i < 10;) {
        printf("%d ", i);
        i++;
    }

    i = 0; // test var
    printf("\nDo-While Loop:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i < 10);

    return 0;
}