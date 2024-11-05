#include <stdio.h>
int main() {
    // Define the cutoff value
    #define CUTOFF -1
    // Declare variables to store the grade and the total and initialize them
    float grade = 0.01;
    float total = 0.01;

    printf("\nTo stop entering grades, type in any negative number.\n\n");
    // Loop until the user enters a negative number
    while (grade > CUTOFF) {
        // Get the next grade from the user
        printf("Enter a grade: ");
        scanf("%f", &grade);
        // Add the grade to the total
        total = total + grade;
    }
    printf("last grade ender is %f\n", grade);
    // Print the total of the grades
    printf("The total of the grades is %f\n", total-grade);
    return 0;
}