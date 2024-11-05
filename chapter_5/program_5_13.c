#include <stdio.h>
#define MAXNUMS 5

int main() {
    /* This program computes the positive and negative sums of a set
       of MAXNUMS user-entered numbers */
    int i;
    float number;
    float postotal = 0.0f;
    float negtotal = 0.0f;

    for (i = 1; i <= MAXNUMS; i++) {
        printf("Enter a number (positive or negative): ");
        scanf("%f", &number);

        if (number > 0)
            postotal += number;
        else
            negtotal += number;
    }

    printf("\nThe positive total is: %.2f", postotal);
    printf("\nThe negative total is: %.2f\n", negtotal);

    return 0;
}
