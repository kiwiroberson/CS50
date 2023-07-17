#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        //Compare strings 'name' and candidate name field, if mathing increment vote tally, and state true
        //if no match state false.
        if(strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes++;
            return true;
        }

    }
    return false;
}


// Print the winner (or winners) of the election
void print_winner(void)
{
    joint winners



    for (int i = 0; i < candidate_count; i++)
    {
        for j = 0; j < candidate_count - i; j++)
        {
            if (candidates[i].votes < candidates[i + 1].votes)
            {
            //declare swap array
            candidate swap[1];
            //swap candidates[i] and i + 1
            swap[0] = candidates[i];
            candidates[i] = candidates[i + 1];
            candidates[i + 1] = swap[0];
            }
        }








    }

//first checks number of joint winners, then prints all with that number of wins

    for (int l = 0; l < k; l++)
    {
    printf("%s\n", winners[l]);
    }
    return;
}