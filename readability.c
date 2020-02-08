#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: "); //asks for user input

    int l = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isalnum(text[i])) //check if the character is a letter or number
        {
            l++;
        }
        else
        {
            continue;
        }
    }

    int w = 1;
    for (int i = 0; i < strlen(text); i++)
    {
        if (isspace(text[i])) //count the numer of words by detecting the spaces that separate them
        {
            w++;
        }
    }

    int s = 0;
    for (int i = 0; i < strlen(text); i++)
    {
        if (text[i] == '.' || text[i] == '!' || text[i] == '?') //checks punctuation to determine the number of sentences
        {
            s++;
        }
    }

    float lAvg = (float)l * 100 / (float)w; //calculate letters average
    float sAvg = (float)s * 100 / (float)w; //calculate sentences average
    float index = (0.0588 * lAvg) - (0.296 * sAvg) - 15.8;
    int grade = (int)round(index);

    if (grade > 16)
    {
        printf("Grade 16+\n");
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", grade);
    }
}