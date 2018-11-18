#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// Implement the function average that correctly completes the program so that it prints the average of numbers a and b
// What do you have to input to exit the while loop?

float average(int a, int b);

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Incorrect number of arguments\n");
        return 1;
    }

    int a = atof(argv[1]);
    int b = atof(argv[2]);

    printf("%.1f\n", average(a, b));
}

float average(int a, int b)
{
    return (a + b) / 2.0;
}
