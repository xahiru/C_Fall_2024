#include <stdio.h>

int main() {
    float grade;
    float total = 0.01; // Note the initialization here

    printf("\nTo stop entering grades, press ctrl + Z on Windows or ctrl + D on UNIX operating systems.\n\n");
    printf("Enter a grade: ");

    // Loop to read grades until EOF
    while (scanf("%f", &grade) != EOF) {
        total += grade;
        printf("Enter a grade: ");
    }

    printf("\nThe total of the grades is %f\n", total);
    return 0;
}
