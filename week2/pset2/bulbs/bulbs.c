#include <cs50.h>
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    string s = get_string("What is your message? ");
    int n = strlen(s);

    for(int i = 0; i < n; i++)
    {
        int j = s[i];
        int a = j / 64;
        j = j - a;
        int b = j / 32;
        j = j - b;
        int c = j / 16;
        j = j - c;
        int d = j / 8;
        j = j - d;
        int e = j / 4;
        j = j - e;
        int f = j / 2;
        j = j - f;
        int g = j;
    }

    printf()
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
