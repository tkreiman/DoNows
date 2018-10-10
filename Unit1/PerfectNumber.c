#include <stdio.h>
#include <cs50.h>

// What is the first number that this program prints out?
// Challenge: What's the second?
int main(void)
{

    for (int i = 1; i <= 1000; i++)
    {
        int sum = 0;
        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                sum += j;
            }
        }
        if (sum == i)
        {
            printf("%i\n", i);
        }
    }
}