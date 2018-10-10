#include <stdio.h>
#include <cs50.h>

// What is the error in this program?
// The intended purpose is to print a box with dimensions 'dim'
// ie. Input 3 should yield
// ###
// ###
// ###
int main(void)
{
    int dim = get_int("Enter the dimensions of the box: ");

    for (int i = 0; i < dim; i++)
    {
        for (int j = 0; j < dim; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}