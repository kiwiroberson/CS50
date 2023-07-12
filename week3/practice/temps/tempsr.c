// Practice working with structs
// Practice applying sorting algorithms

#include <cs50.h>
#include <stdio.h>

#define NUM_CITIES 10

typedef struct
{
    string city;
    int temp;
}
avg_temp;

avg_temp temps[NUM_CITIES];

void sort_cities(void);
void bubble_run(void);

int l = 0;
int m = 0;
int j = 0;
int k = 0;

int main(void)
{
    temps[0].city = "Austin";
    temps[0].temp = 97;

    temps[1].city = "Boston";
    temps[1].temp = 82;

    temps[2].city = "Chicago";
    temps[2].temp = 85;

    temps[3].city = "Denver";
    temps[3].temp = 90;

    temps[4].city = "Las Vegas";
    temps[4].temp = 105;

    temps[5].city = "Los Angeles";
    temps[5].temp = 82;

    temps[6].city = "Miami";
    temps[6].temp = 97;

    temps[7].city = "New York";
    temps[7].temp = 85;

    temps[8].city = "Phoenix";
    temps[8].temp = 107;

    temps[9].city = "San Francisco";
    temps[9].temp = 66;

    sort_cities();

    printf("\nAverage July Temperatures by City\n\n");

    for (int i = 0; i < NUM_CITIES; i++)
    {
        printf("%s: %i\n", temps[i].city, temps[i].temp);

    }
      printf("runs1:%i runs2:%i\n", l, m);
}

// TODO: Sort cities by temperature in descending order
void sort_cities(void)
{
    //run loop NUM_CITIES times from 0 to
    if (j == NUM_CITIES)
    {
        return;
    }
    l++;
    j++;
    bubble_run();
    sort_cities();

}

void bubble_run(void)
{
    if (k == 10)
    {
        k = 0;
        return;
    }
    if (temps[k].temp < temps[k + 1].temp)
            {
                avg_temp  temporary_element[1];
                temporary_element[0] = temps[k];
                temps[k] = temps [k + 1];
                temps[k + 1] = temporary_element[0];
                k++;
            m++;
            bubble_run();
            }
else{
     k++;
            m++;
            bubble_run();
}

   }



