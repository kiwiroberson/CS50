#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    //check type of entry valid

    //open memory card into memory with fopen
    FILE *file = fopen(argv[1], "r");
    if (file !=NULL)
    {







    //repeat until end of card
    char *buffer[]
    while(fread(buffer, 1, 512, *file) == 512)
    {




        //read 512bytes into buffer array
        //look for begining of JPEG with fread - (look for: 0xff 0xd8 0xff 0xe0...0xef)

            //if first jpeg write to 000.jpeg

            //else close previous jpeg and start new
        //if already found continue writing in old jpeg

    //close remaining files

    }
    }
    else
    {
        printf("please enter valid filename\n");
        return 1;
    }
return 0;
}