#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get sample Sentence, save as variable.
    string p = get_string("What text would you like to grade? ");

    //Loop to count passage length in characters
    int  i = 0;
    int numspace = 0;
    int numperiod = 0;
    do
    {
        if (p[i] == 32)
        {
            numspace++;
        }

        if (p[i] == 46 | 33 | 63)
        {
            numperiod++;
        }

        i++;
    }
    while(p[i] != 0000);
    printf("Passage Length: %i Characters\n", i);
    printf("Space number: %i Characters\n", numspace);
    printf("period number: %i Characters\n", numperiod);

    //Loop to count number of spaces in passage.
    //Then calculate average word length.
    //average number of letters per 100 words in the text

    //Loop to count number of ful stops in passage.
    //Then calculate average sentence length.
    //average number of sentences per 100 words in the text

    //Calculation - index = 0.0588 * L - 0.296 * S - 15.8





}