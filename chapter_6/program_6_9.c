#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int flip(int numTimes); /* prototype for flip function */
void percentages(int numTosses, int heads);

int main()
{
    int numTosses = 1000; // Number of tosses
    int heads;

    srand(time(NULL)); // Initialize random number generator
    heads = flip(numTosses);
    percentages(numTosses, heads);
    return 0;
}

// Tosses the coin numTimes and returns the number of heads
int flip(int numTimes)
{
    int randValue;
    int heads = 0;

    for (int i = 1; i <= numTimes; i++)
    {
        randValue = rand() % 2; // 0 for tails, 1 for heads
        if (randValue == 1)     // Increment heads count if it's 1
            heads++;
    }
    return heads;
}

// Calculates and displays the percentages of heads and tails
void percentages(int numTosses, int heads)
{
    int tails = numTosses - heads;
    float perheads = (float)heads / numTosses * 100.0;
    float pertails = (float)tails / numTosses * 100.0;

    if (numTosses == 0)
    {
        printf("There were no tosses, so no percentages can be calculated.\n");
    }
    else
    {
        printf("Number of coin tosses: %d\n", numTosses);
        printf("Heads: %d Tails: %d\n", heads, tails);
        printf("Heads came up %.2f percent of the time.\n", perheads);
        printf("Tails came up %.2f percent of the time.\n", pertails);
    }
}
