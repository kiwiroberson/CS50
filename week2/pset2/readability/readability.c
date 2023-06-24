#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get sample Sentence, save as variable.
    string p = get_string("Text: ");

    //Loop to count passage length in characters
    int  i = 0;

    //NUMBER OF WORDS
    int numspace = 1;

    //NUMBER OF SENTENCES
    int numperiod = 0;


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
    int numletters100word = ((i - numspace - numperiod)*100 / numspace);


    //number of sentences per 100 words
    int numsentencesper100word = ((numperiod*100) / numspace);

    int L = numletters100word;
    int S = numsentencesper100word;

    int index = 0.0588 * L - 0.296 * S - 15.8;


     //printf("numletters100word: %i numsentencesper100word:%i\n", numletters100word, numsentencesper100word);
     //printf("characters: %i, fullstops:%i, words:%i\n", i, numperiod, numspace);
     printf("Grade %i \n", index);



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