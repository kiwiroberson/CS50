#include <cs50.h>
#include <stdio.h>

int main (void)
{
    //Prompt user to agree

    char c = get_char ("Do you Agree?\n");

    //check whether user agreed

    if (c == 'y')
    {
        printf("Agreed.\n");
    }
    else if (c == 'n')
    {
        printf("Disagree.\n");
    }


}