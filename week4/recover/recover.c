#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main(int argc, char *argv[])
{
typedef uint8_t BYTE;
BYTE a;

    //check type of entry valid

    //open memory card into memory with fopen
    FILE *file = fopen(argv[1], "r");
    if (file !=NULL)
    {

    //repeat until end of card

    int *buffer = malloc(512);
    buffer[0] = 0xff;
    buffer[1] = '\0';

    printf("%i\n", buffer);

    }

    else
    {
        printf("please enter valid filename\n");
        return 1;
    }
return 0;
}