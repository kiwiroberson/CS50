#include <cs50.h>
#include <stdio.h>

int main (void )

{
    int points = get_int("How many points did you lose?\n");

    if (points < 2)
    {
        printf("You lost fewer points than me\n");
    }
    else if (points >2)
    {
        printf("you lost more points than me\n");
    }
    else
    {
        printf("you got the same points as me\n");
    }

}