#include <stdio.h>
#include <cs50.h>

// What code do you have to add to the for loop so that the program prints all twin prime pairs under 100?
// Twin Prime Pair: 3, 5 or 5, 7 or 41,43 etc.

bool is_prime(int n);

int main(void)
{

    for (int i = 3; i < 100; i++)
    {
        // Add code here (using the function is_prime)
    }
}

bool is_prime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}