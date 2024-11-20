#include <stdio.h>

int main() {
    /* This program displays a table of numbers, their squares, and cubes */
    /* starting from the number 1. The final number in the table is input by the user */

    int num, final;

    printf("Enter the final number for the table: ");
    scanf("%d", &final);

    printf("\nNumber   Square   Cube\n");
    printf("-----------------------\n");

    for (num = 1; num <= final; num++) {
        printf("%3d      %7d     %6d\n", num, num * num, num * num * num);
    }

    return 0;
}
