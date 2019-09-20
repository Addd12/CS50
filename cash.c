#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float n;
    do
    {
        n = get_float("Amount of change in $: ");
    }
    while (n < 0);
    
    int cents = round(n * 100);
    
    int count = 0;
    
    while (cents >= 25)
    {
        count++;
        cents = cents - 25;
        if (cents < 25)
        {
            break;
        }
    }
    
    while (cents >= 10)
    {
        count++;
        cents = cents - 10;
        if (cents < 10)
        {
            break;
        }
    }
    
    while (cents >= 5)
    {
        count++;
        cents = cents - 5;
        if (cents < 5)
        {
            break;
        }
    }
    
    while (cents >= 1)
    {
        count++;
        cents = cents - 1;
        if (cents < 1)
        {
            break;
        }
    }
    printf("Total coins: %i\n", count);
    
}
