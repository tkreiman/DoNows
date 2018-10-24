#include <stdio.h>
#include <cs50.h>

// Complete this function to sum the elemnts in an array
int sumArray(int a[], int length);

int main(void)
{
    int a1[] = {1, 2, 3, 4, 5};
    int a2[] = {2, 4, 6, 8, 10};
    int l1 = 5;
    int l2 = 5;

    if (sumArray(a1, l1) > sumArray(a2, l2))
    {
        printf("Array 1 somes to more");
    }
    else
    {
        printf("Array 2 sums to more");
    }

}




