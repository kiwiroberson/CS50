#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    if ( argc != 2)
    {
        printf("please enter one term only\n");
        return 1;
    }


    //check type of entry valid

    //open memory card into memory with fopen
    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        printf("please enter valid filename\n");
        return 1;
    }

    BYTE *buffer = malloc(512);

    fread(buffer, 1, 512, file);

    printf("%i\n", buffer[600]);

    free(buffer);





return 0;
}