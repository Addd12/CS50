#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Prompts the user to enter first name
    string name = get_string("Please enter your name: ");
    printf("Hello, %s!\n", name);
}
