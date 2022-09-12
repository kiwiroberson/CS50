#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);

    //For each row
    for (int i = 0; i < n; i++)
    {
         //for each collumn
        for (int j = 0; j < n; j++)
            {//Print a Brick
            printf("#");
            }
         //Move to next row
            printf("\n");

    }
}