#include <cs50.h>
#include <stdio.h>

int main (void)

{

    // ask for starting population end ending population

    int i = 0;
    int j = 0;
    int c = 0;
    int n = 0;



    //Get start and end population, refuse start until above 9 >


    while (i < 9)
    {
        i = get_int("Start size: ");
    }
    while ( j < i)
    {
         j = get_int ("End size: ");
    }


    //run loop while n < end population
    while ( i < j)
    {
       //loop for: n gets n + n/3 - n/4, then add one to counter
        i += i / 12;
        c++;
    }

    //print  counter as output

    printf("Years: %i\n", c);


}