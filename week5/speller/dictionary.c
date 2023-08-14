// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

//start counter for size function
int size_counter = 0;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int index = hash(word);


    node *cursor = table[index];

    if(cursor == NULL)
    {
        return false;
    }

    while (cursor->next != NULL)
    {
        if (strcasecmp(cursor->word, word) == 0)
        {
        free(cursor);
        return true;
        }
        else
        {
            cursor = cursor->next;
        }
    }
    free(cursor);
    return false;

}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // open dictionary file
    FILE *file = fopen(dictionary, "r");
    if(file == NULL)
    {
        fclose(file);
        return false;
    }


    //read strings from file
    //as loop

    char word[46];
    while (fscanf(file, "%s", word) != EOF)
    {
        //create a new node to store current word and allocate memory
        node *tmp  = malloc(sizeof(node));
        //copy word into node
        if (tmp != NULL)
        {
            strcpy(tmp->word, word);

            //hash function to find location for node
            int index = hash(word);

            //insert word into linked list
            //set pointers in correct order
            tmp->next = table[index];
            table[index] = tmp;
            size_counter++;

        }
        else
        {
            fclose(file);
            free(tmp);
            return false;
        }
    }

//true of able to load, false if not
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return size_counter;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        node *cursor = table[i];

        while (cursor->next != NULL)
        {
            node *tmp = cursor;
            cursor = cursor->next;
            free(tmp);
        }
        free(table[i]);

    }
    return true;
}
