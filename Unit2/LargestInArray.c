#include <stdio.h>
#include <cs50.h>

// Fix the errors in this code that prevent it from printing the largest element in array
// Assuming all values in array are positive

bool is_prime(int n);

int main(void)
{
    int array[] = {2, 5, 2, 27, 21, 1, 89, 27};
    // Eight elements in array
    int length = 7;

    int largest = -1;
    for(int i = 1; i <= length; i++)
    {
        if(largest < array[i])
        {
            largest = array[i];
        }
    }
    printf("%i\n", largest);
}
