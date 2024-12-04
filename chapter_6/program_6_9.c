#include <stdio.h>
#include <stdlib.h>

#include <time.h>

int flip(int); /* prototype for flip function */
void percentages(int, int);
int main()
{
    int numTosses = 1000;
    int heads;

    heads = flip(numTosses);
    percentages(numTosses, heads);
    return 0;
}

// this method tosses the coin numTimes
// and returns the number of heads
int flip(int numTimes)
{
    int randValue;
    int heads = 0;
    int i;
    srand(time(NULL));
    for (i = 1; i <= numTimes; i++)
    {
        randValue = 1 + (int)rand() % 100;
        if (randValue > 50)
            heads++;
    }
    return (heads);
}

// this method calculates and displays
// the percentages of heads and tails
void percentages(int numTosses, int heads)
{
    int tails;
    float perheads, pertails;
    if (numTosses == 0)
        printf("There were no tosses, so no percentages can be calculated.\n");
    else
    {
        tails = numTosses - heads;
        printf("Number of coin tosses: $d\n", numTosses);
        printf("Heads:sdTails: gd\n", heads, tails);
        perheads = (float)heads / numTosses * 100.0;
        pertails = (float)(numTosses - heads) / numTosses * 100.0;
        printf("Heads came up $6.2f percent of the time.\n", perheads);
        printf("Tails came up $6.2f percent of the time.\n", pertails);
    }
}
