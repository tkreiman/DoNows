#include <stdio.h>
#include <cs50.h>
#include <string.h>

struct Assignment
{
    string category;
    float grade;
};

#define HWCategory "HW"
#define TestCategory "Test"

int main(void)
{
    // 5 different assignments
    int nAssignments = 5;

    // Creating the assignments
    struct Assignment a1;
    a1.category = HWCategory;
    a1.grade = 92.3;

    struct Assignment a2;
    a2.category = HWCategory;
    a2.grade = 72.1;

    struct Assignment a3;
    a3.category = HWCategory;
    a3.grade = 85;

    struct Assignment a4;
    a4.category = TestCategory;
    a4.grade = 96.8;

    struct Assignment a5;
    a5.category = TestCategory;
    a5.grade = 83.2;

    struct Assignment assignments[] = {a1, a2, a3, a4, a5};

    float totalHW = 0;
    float totalTest = 0;
    int numHW = 0;
    int numTest = 0;

    for(int i = 0; i < nAssignments; i++)
    {
        if(strcmp(HWCategory, /* your code here*/) == 0)
        {
            totalHW += /* your code here*/;
            numHW++;
        }
        else if (strcmp(TestCategory, /* your code here*/) == 0)
        {
            totalTest += /* your code here*/;
            numTest++;
        }
    }

    printf("Average for HW: %f\nAverage for Test: %f\n", totalHW / (float)numHW, totalTest / (float)numTest);

}
