#include <stdio.h>
#include <cs50.h>

// Implement the function average that correctly completes the program so that it prints the average of numbers a and b
// What do you have to input to exit the while loop?

float average(int a, int b);

int main(void)
{
    int a = 1;
    int b = 1;
    while (a > 0 && b > 0)
    {
        a = get_int("Enter a number: ");
        b = get_int("Enter another number: ");

        printf("%f\n", average(a, b));
    }
}

