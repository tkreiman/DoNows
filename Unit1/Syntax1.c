#include <stdio.h>
#include <cs50.h>

// What is the error with this program?
int main(void)
{
    // Get user input
    int userInput = get_int("Enter a number: ");

    for (i = 0; i < userInput; i++)
    {
        printf("%i\n", i);
    }
}