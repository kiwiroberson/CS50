#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string s = get_string("What is your message? );
    int n = strlen(s);

    for(i = 0; i < s; i++)
    {
        int j = s[i];
        int a = j / 64;
        j - a;
        int b = j / 32;
        j - b;
        int c = j / 16;
        j - c;
        int d = j / 8;
        j - d;
        int e = j / 4;
        j - e;
        int f = j / 2;
        j - f;
        int g = j;
    }
}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
}
