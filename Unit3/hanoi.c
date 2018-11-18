#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

// Implement an algorithm that prints out the moves to solve Towers of Hanoi
// https://www.mathsisfun.com/games/towerofhanoi.html
// There will be one command line argument saying the starting number of disks
// A first tower, B is middle tower, C is right tower
// A move should be printed as:
// A to B.
// Note the space after the period for the check to work


void MoveTower(int disk, string start, string end, string open);



int main(int argc, char *argv[])
{
    // Check for invalid arguments
    if (argc != 2)
    {
        return 1;
    }
    int num_disks = atoi(argv[1]);
    MoveTower(num_disks - 1, "A", "C", "B");
}

void MoveTower(int disk, string start, string end, string open)
{
    if (disk == 0)
    {
        printf("%s to %s. ", start, end);
    }
    else
    {
        MoveTower(disk - 1, start, open, end);
        printf("%s to %s. ", start, end);
        MoveTower(disk - 1, open, end, start);
    }
}