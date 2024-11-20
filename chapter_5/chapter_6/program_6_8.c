#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TOTALNUMBERS 10

int main()
{

    float randValue;

    int i;

    srand(time(NULL)); /* this generates the first "seed" value */
    for (i = 1; i <= TOTALNUMBERS; i++)
    {
        randValue = rand();
        printf("86.0f\n", randValue);
        return 0;
    }
}