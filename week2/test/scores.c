#include <stdio.h>

int main(void)
{
    int scores[3];

    scores[0] = 72;
    scores[1] = 73;
    scores[2] = 33;

    printf("Average: %f\n", (scores[1] + scores[2] + scores[3]) / (float) 3.0);

}
