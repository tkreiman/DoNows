#include <stdio.h>
#include <cs50.h>

// What does this program supposed to accomplish?
// Where is the error in the program?
int main(void)
{
    // Get user input
    int userInput = get_int("Enter a number: ");

    for (int i = 0; i <= userInput; i++)
    {
        if (userInput % i == 0)
        {
            printf("%i\n", i);
        }
    }
}