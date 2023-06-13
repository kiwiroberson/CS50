#include <cs50.h>
#include <stdio.h>

int main (void)

{

// ask for starting population end ending population

    int i = get_int("Starting Population? ");
    int j = get_int ("End Population? ");
    int c = 0;
    int n = 0;
    int o = 0;
    int p = 0;
//run loop while n < end population

    while ( i < j)
    {
       //loop for: n gets n + n/3 - n/4, then add one to counter
        n = i/3;
        c++;
    }
    printf("Population: %i\n", n);
    printf("Years: %i\n", c);

//print  counter as output

}