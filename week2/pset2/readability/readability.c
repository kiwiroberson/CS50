#include <cs50.h>
#include <stdio.h>
#include <math.h>

int count_letters(string passage);
int count_words(string passage);
int count_sentences(string passage);


int main(void)
{
    // Get sample Sentence, save as variable.
    string p = get_string("Text: ");

    //Functions
   float lettercount = count_letters(p);
   float sentencecount = count_sentences(p);
   float wordcount = count_words(p);

    // NUMBER OF LETTERS PER 100 WORD
    float L = (lettercount * 100 / wordcount);

    //number of sentences per 100 words
    float S = ((sentencecount * 100) / wordcount);

    //Reading age calculaton
    float indexf = 0.0588 * L - 0.296 * S - 15.8;
    indexf = round(indexf);
    int index = indexf;

    //Print reading age

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

    //printf("Letters %i\n", lettercount);
    //printf("Words %i\n", wordcount);
    //printf("Sentence %i\n", sentencecount);
}


int count_letters(string p)
{
    int g = 0;
    int j = 0;
    while (p[j] != 0000)
    {
    if (((p[j] >= 65) && (p[j] <= 90)) || ((p[j] >= 97) && (p[j] <= 122)))
    {
        g++;
    }
    j++;
    }
    return g;
}

int count_words(string p)
{
    int g = 1;
    int j = 0;
    while (p[j] != 0000)
    {
    if (p[j]==32)
    {
        g++;
    }
    j++;
    }
    return g;
}

int count_sentences(string p)
{
    int g = 0;
    int j = 0;
    while (p[j] != 0000)
    {
    if ((p[j] == 46)||(p[j] == 33)||(p[j] == 63))
    {
        g++;
    }
    j++;
    }
    return g;
}