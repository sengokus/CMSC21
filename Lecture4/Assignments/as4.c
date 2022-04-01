#include <stdio.h>

int main(void) {
    int n, y = 1;

    printf("n = ");
    scanf("%d", &n);

    printf("\n  n   2^n\n----------\n");
    for (int x = 0; x <= n; x++) {
        printf("%3d %4d\n", x, y);
        y *= 2;
    }

    return 0;
}