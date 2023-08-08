#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    //check type of entry valid
    if (!fopen(argv[1], "r"))
        {
            printf("please enter valid filename\n");
            return 1;
        }
    //open memory card into memory with fopen
    FILE *file = fopen(argv[1], "r");







    //repeat until end of card
    while(fread(buffer, 1, 512, *file) == BLOCK_SIZE)
    {
        malloc()
        fread(buffer, 512, 1, *file)



        //read 512bytes into buffer array
        //look for begining of JPEG with fread - (look for: 0xff 0xd8 0xff 0xe0...0xef)

            //if first jpeg write to 000.jpeg

            //else close previous jpeg and start new
        //if already found continue writing in old jpeg

    //close remaining files

    }
return 0;
}