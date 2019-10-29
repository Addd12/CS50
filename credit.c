#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long n;
    do
    {
        //prompts the user to enter the height
        n = get_long("Please enter your credit card number: ");
    }
    while (n < 0); //check if the input is valid
    
    int numberOfDigits = 0;
    long long checkNumber = n;
    
    while (checkNumber > 0)
    {
        checkNumber /= 10;
        numberOfDigits++; //returns the number of the digits
    }
    
    int sum = 0;
    int digit = 0;
    long a = 100;
    long b = 10;
    long c = 10;
    long d = 1;

    for (int i = 0; i < numberOfDigits; i++)
    {
        digit = 0;
        digit = ((n % a) / b) * 2; //makes the calculation starting from second to last

        if (digit > 9)
        {
            digit = (digit % 10) + (digit / 10); //adds the numbers of a two-digit number
        }

        sum += digit;
        
        if (a < n && b < n)
        {
            a *= 100;
            b *= 100;
        }
        else 
        {
            break;
        }
    }
    
    for (int j = 0; j < numberOfDigits; j++)
    {
        digit = 0;
        digit = (n % c) / d;

        sum += digit;

        if (c < n && d < n)
        {
            c *= 100;
            d *= 100;
        }
        else 
        {
            break;
        }
    }
    
    if (sum % 10 != 0)
    {
        printf("INVALID\n"); //checks if the result is invalid
    }
    else
    {
        if (((n / 10000000000000 == 34) || (n / 10000000000000 == 37)) && (numberOfDigits == 15))
        {
            printf("AMEX\n"); //if the condition is met, this line is printed
        }

        else if (((n / 100000000000000 >= 51) && (n / 100000000000000 <= 55)) && (numberOfDigits == 16))
        {
            printf("MASTERCARD\n"); //if the condition is met, this line is printed
        }

        else if (((n / 1000000000000 == 4) && (numberOfDigits == 13)) || ((n / 1000000000000000 == 4) 
                 && (numberOfDigits == 16)))
        {
            printf("VISA\n"); //if the condition is met, this line is printed
        }
        else
        {
            printf("INVALID\n");
        }
    }
}

