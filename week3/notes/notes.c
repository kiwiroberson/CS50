#include <stdio.h>
#include <cs50.h>

//Search algorithm

//linear search
//search each value from L-->R if found return treue
//binary search starts in middle


//make struct data types

//In searchng sorting data important to search quickly

    // selection sort
        //swap smallest number to start as you move along on sequential reads
        //proportional to n^2 in best and worst case
        //theta

    //bubble sort
        //largest numbers bubble up to the top
        //

    //Merge sort
        //Sort left half numbers,
            //Sort left half of that
                //Sort left half of that
                    //One number left
                    //Sort right half
                    //Merge
                //Sort right half
                //Merge
            //Sort right half
            //Merge
        //Sort right half
        //Merge
        //List fully sorted!
        //Actually this is the same step being undertaken recersivly.....
        //Runnning time of n Log n
        //Needs to use additonal memory space for sotring axillary array before merging.


Collatz conjecture

    //
 int i = 0
int collatz (integer)
    {
    if (n == 1)
    {
        return (0 + i)
    }
    if (n is even)
    {
        n = n / 2
    }
    else
    {
        n = 3 * n + 1
    }
    i++
    int collatz (n);
}

int Linear_search(doors)


int main(void)
{
    int door[1] = get_int("int: ");
    int x = Linear_search(doors);

    printf("%i\n", x);
}



int Linear_search(doors)
{

    while (i < 5);
    {
        if (doors[i] == 50)
        {
            return 1;
        }
        else
        {
            i++;
        }
    }
    return 0;
}

