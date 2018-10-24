#include <stdio.h>
#include <cs50.h>

// Complete these functions so that the program works correctly
float fahrenheit(int a);
float triple(int n);


int main(void)
{
    for (int i = 0; i < 100; i++)
    {
        if(fahrenheit(i) > triple(i))
        {
            printf("Fahrenheit conversion of celsius is greater than three times celsius for %i C", i);
        }
        else
        {
            printf(":((( :((");
        }
    }
}



