#include <stdio.h>

#define NUMSTUDENTS 20
#define NUMGRADES 4

int main() {
    int i, j;             // Loop counters for students and grades
    float grade, total, average; // Variables for grade input, total grades, and average grade

    // Start of outer loop for each student
    for (i = 1; i <= NUMSTUDENTS; i++) {
        total = 0; // Clear the total for this student

        // Start of inner loop for entering grades
        for (j = 1; j <= NUMGRADES; j++) {
            printf("Enter an examination grade for student %d: ", i);
            scanf("%f", &grade); // Input the grade for the current student
            total += grade; // Add the grade to the total
        } // End of the inner for loop

        average = total / NUMGRADES; // Calculate the average grade
        printf("\nThe average for student %d is %.2f\n\n", i, average); // Print the average
    } // End of the outer for loop

    return 0; // End of main function
}
