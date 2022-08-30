#include <cs50.h>
#include <stdio.h>

int main (void )

{
    int z=2;
    int points = get_int("How many points did you lose?\n");

    if (points < z)
    {
        printf("You lost fewer points than me\n");
    }
    else if (points >z)
    {
        printf("you lost more points than me\n");
    }
    else
    {
        printf("you got the same points as me\n");
    }

}