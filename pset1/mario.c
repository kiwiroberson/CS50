#include <cs50.h>
#include <stdio.h>

int main (void)
{
    int s = 6;
    for (int i = 0; i < s; i++)
    {
       for (int j = 0; j <s; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}