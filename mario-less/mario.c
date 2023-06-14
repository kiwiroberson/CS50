#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for hopw many stairs

    int i=0;
    int c=0;


    while(i<1)
    {
        i = get_int("How many floors? ");
    }

    while(i>8)
    {
        i = get_int("How many floors? ");
    }

    //print on repeat removing one from number each time

    for (c=0; c<i; c++)
    {
        for(int d=0; d<i; d++)
        {
        printf("#");
        }
        printf("\n");

    }

}