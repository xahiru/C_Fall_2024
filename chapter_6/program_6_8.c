#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTALNUMBERS 10

int main()
{
    float randValue;

    int i;
    srand(time(NULL)); /* Initialize the random number generator */
    for (i = 0; i < TOTALNUMBERS; i++) // Loop runs TOTALNUMBERS times
    {
        randValue = (float)rand() / RAND_MAX; // Generates a random float in [0, 1]
        printf("Iteration %d: Random Value = %.2f\n", i + 1, randValue);
    }

    return 0;
}
