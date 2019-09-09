#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //prompts the user to enter the height
        n = get_int("Please enter the number of blocks: ");
    } 
    while (n < 1 || n > 8); //check if the input is valid
    
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i; j > 1; j--)
        {
           printf(" "); //prints spaces until the condition is met   
        }
       
        for (int j = 0; j < i+1; j++)
        {
           printf("#"); //prints hashes until the condition is met   
        }
        printf("\n");
    }
}
