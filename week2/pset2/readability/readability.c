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
    double index = 0;
    do
    {
        if (p[i] == 32)
        {
            numspace++;
        }

        if ((p[i] == 46)||(p[i] == 33)||(p[i] == 63))
        {
            numperiod++;
        }

        i++;
    }
    while(p[i] != 0000);

    int L = i / numspace;
    int S = i / numperiod * 100;

     printf("space: %i period:%i\n", numspace, numperiod);
    printf("i: %i L:%i, S:%i\n", i, L, S);

    //index = 0.0588 * L - 0.296 * S - 15.8;

   // printf("Passage Length: %i Characters\n", i);
    //printf("Space number: %i Characters\n", numspace);
    //printf("period number: %i Characters\n", numperiod);
    //printf("Index: %f \n", index);

    //Loop to count number of spaces in passage.
    //Then calculate average word length.
    //average number of letters per 100 words in the text

    //Loop to count number of ful stops in passage.
    //Then calculate average sentence length.
    //average number of sentences per 100 words in the text

    //Calculation - index = 0.0588 * L - 0.296 * S - 15.8





}