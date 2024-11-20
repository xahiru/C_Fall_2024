#include <stdio.h>

int main() {
    int i, j;

    // Start of outer loop
    for (i = 1; i <= 5; i++) {
        printf("\ni is now %d\n", i);

        // Start of inner loop
        for (j = 1; j <= 4; j++) {
            printf(" j = %d", j);
        }
        // End of inner loop
    }
    // End of outer loop

    return 0;
}
