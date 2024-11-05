#include <stdio.h>

int main() {
    int month;

    printf("\nEnter a month between 1 and 12: ");
    scanf("%d", &month);

    while (month < 1 || month > 12) {
        printf("Error - the month you entered is not valid.\n");
        printf("\nEnter a month between 1 and 12: ");
        scanf("%d", &month);
    }

    printf("The month accepted is %d\n", month);
    return 0;
}
