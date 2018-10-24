#include <stdio.h>
#include <cs50.h>

// Fix the errors in this code that prevent it from printing all the elements in array

bool is_prime(int n);

int main(void)
{
    int array[] = {2, 5, 2, 27, 21, 1, 89, 27};
    // Eight elements in array
    int length = 8;

    for(int i = 1; i <= length; i++)
    {
        printf("%i\n", array[i]);
    }
}
