#include <stdio.h>

#define TRUE 1

int main() {
    int month;

    while (TRUE) {
        printf("\nEnter a month between 1 and 12: ");
        scanf("%d", &month);

        if (month >= 1 && month <= 12) // Corrected the range check
            break;

        printf("Error - the month you entered is not valid.\n");
    }

    printf("The month accepted is %d\n", month);
    return 0;
}
