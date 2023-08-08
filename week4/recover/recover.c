#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{

    int jpegcount = 0;
    int blockcount = 0;

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

    FILE *img = NULL;

    //read file and loop through 512byte blocks
    while (fread(buffer, 1, 512, file) == 512)
    {
    //look for jpeg starting signature
        if(buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer[3] & 0xf0) == 0xe0)
        {
            if(img != NULL)
            {
                fclose(img);
                blockcount = 0;
            }
            //allocate space for filename
            char filename[8];
            //write new filenames to memory
            sprintf(filename, "%03i.jpg", jpegcount);
            //create new filenames
            img = fopen(filename, "w");
            //write jpg data to filenames
            fwrite(buffer, sizeof(BYTE), 512, img);
            jpegcount++;
            blockcount++;
        

            for (int i = 0; i < 512; i++)
            {
                buffer[i] = 0;
            }

        }
        else if (img != NULL)
        {
            fwrite(buffer, sizeof(BYTE), 512, img);
            blockcount++;
        }
    }
    //free buffer memory
    free(buffer);
    fclose(file);

    //print number of jpegs found for testing
    printf("Photo number:%i\n", jpegcount);


return 0;
}