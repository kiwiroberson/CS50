#include <cs50.h>
#include <stdio.h>

int main (void)

{

// ask for starting population end ending population

    int i = get_int("Starting Population? ");
    int j = get_int ("End Population? ");
    int c = 0;
    int n=0;
//run loop while n < end population

    while ( n < 100)
    {
       //loop for: n gets n + n/3 - n/4, then add one to counter
        n = i;
        n = n + n/3;
        n = n - n/4;
        c++;
    }
    printf("Years: \n");

//print  counter as output

}