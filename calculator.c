#include <cs50.h>
#include <stdio.h>

int main(void)

{
    //Prompt user for x
    long x = get_long("x: ");
    //Prompt user for y
    long y = get_long("y: ");
    // Add x and y
    long z = x + y;
    //Print z
    printf("%li\n", z);

}