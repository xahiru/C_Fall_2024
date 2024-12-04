#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTALNUMBERS 10

int main()
{
    int randValue;

    int i;
    srand(time(NULL)); /* Initialize the random number generator */
    // srand(100); /* Initialize the random number generator */
    for (i = 0; i < 10; i++) // Loop runs TOTALNUMBERS times
    {
        randValue = 20 + ((int)rand() % (30-20 +1)); // Generates a random float in [0, 1]
        printf("Iteration %d: Random Value = %d\n", i + 1, randValue);
    }

    return 0;
}
