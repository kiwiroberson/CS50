#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for hopw many stairs

    int n=0;

    while(n<1)
    {
        n = get_int("How many floors? ");
    }

    while(n>8)
    {
        n = get_int("How many floors? ");
    }

    //print on repeat removing one from number each time

    for (int i=0; i<n; i++)
    {
         for(int k=n; k>0; k--)
        {
        printf(" ");
        }
        for(int j=0; j<i+1; j++)
        {
        printf("#");
        }
        printf("\n");

    }

}