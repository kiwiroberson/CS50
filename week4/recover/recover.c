#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if ( argc!)

    //check type of entry valid

    //open memory card into memory with fopen
    FILE *file = fopen(argv[1], "r");
    if (file !=NULL)
    {

    //repeat until end of card

    BYTE *buffer[512] = malloc(512);
    fread(*buffer, 1, 512, file);


    printf("%i\n", buffer[0]);

    free(buffer);
    }

    else
    {
        printf("please enter valid filename\n");
        return 1;
    }
return 0;
}