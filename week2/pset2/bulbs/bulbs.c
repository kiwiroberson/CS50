#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string s = get_string("What is your message? ");
    int n = strlen(s);

    for(int i = 0; i < n; i++)
    {
        int j = s[i];
        int z[8];
        for(int k = 7, l = 0; k > 0; k--, l++)
        {
            int m = pow(2,k);
            z[l] = j / m;
            j = j - z[l]*m;

        }



        for(int t = 0; t < 7; t++)
        {
            if (z[t] == 0)
            {
                // Dark emoji
                printf("\U000026AB");
            }
            else if (z[t] == 1)
            {
                // Light emoji
                printf("\U0001F7E1");
            }

        }
        printf("\n");


    }

}


