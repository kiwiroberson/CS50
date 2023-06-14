#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // ask user for hopw many stairs

    int i=0;


    while(i<1)
    {
        i = get_int("How many floors? ");
    }

    //print on repeat removing one from number each time

    for (int j=0; j<i; j++)
    {
        printf("#");
    }




}