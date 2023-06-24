#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    // Get sample Sentence, save as variable.
    string p = get_string("Text: ");

    //Loop to count passage length in characters
    int  i = 0;

    //NUMBER OF WORDS
    float numspace = 1;

    //NUMBER OF SENTENCES
    float numperiod = 0;


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


    // NUMBER OF LETTERS PER 100 WORD
    float numletters100word = ((i - numspace - numperiod) * 100 / numspace);


    //number of sentences per 100 words
    float numsentencesper100word = ((numperiod * 100) / numspace);

    float L = numletters100word;
    float S = numsentencesper100word;

    float indexf = 0.0588 * L - 0.296 * S - 15.8;

    indexf = round(indexf);
    int index = indexf;

     //printf("numletters100word: %i numsentencesper100word:%i\n", numletters100word, numsentencesper100word);
     //printf("characters: %i, fullstops:%i, words:%i\n", i, numperiod, numspace);

    if(index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        if ( index < 1)
        {
            printf("Before Grade 1\n");
        }
        else
        {
            printf("Grade %i\n", index);
        }
    }



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