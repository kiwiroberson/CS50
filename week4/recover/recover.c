#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{

    int c = 0;
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

    //allocate buffer memory
    BYTE *buffer = malloc(512);

    //read file and loop through 512byte blocks
    while (fread(buffer, 1, 512, file) == 512)
    {
    //look for jpeg starting signature
    if(buffer[0] == 0xff)
    {

    printf("%i\n", buffer[0]);
    c++;
    }


    }
    //free buffer memory
    free(buffer);

    //print number of jpegs found for testing
    printf("Photo number:%i\n", c);


return 0;
}