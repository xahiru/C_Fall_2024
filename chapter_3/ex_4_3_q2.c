#include <stdio.h>

int main()
{
    int time = 0;
    float interest_rate = 0.0;

    printf("Please enter the time you want to keep the deposite\n");
    scanf("%d", &time);

    // printf("you entered %d years\n", time);

    if (time >= 5)
    {
        interest_rate = 0.045;
    }
    else if(time < 5 && time >= 4 )
    {
        interest_rate = 0.04;
    }
    else if(time < 4 && time >= 3 )
    {
        interest_rate = 0.035;
    }
    else if(time < 3 && time >= 2 )
    {
        interest_rate = 0.03;
    }
    else if(time < 2 && time >= 1 )
    {
        interest_rate = 0.025;
    }else{
        interest_rate = 0.02;

    }

    printf("The interest rate is %f\n", interest_rate);

    return 0;
}
