#include <stdio.h>
#include <stdlib.h>
#define NUM_BYTES 1024


int main()
{
    /*TODO:
        1) Create the instances for 8, 16, 32, 64 - bit vars
        2) Use Altera vars

    */



    //Allocate static memory
    int* pSource;
    int* pDestination;
    // rand comment


    pSource = (int*)malloc(NUM_BYTES);
    pDestination = (int*)malloc(NUM_BYTES);

    //printf("%d", sizeof(pSource));

    //Initialize the first array with some values
    int i;
    for(i = 0; i < NUM_BYTES/sizeof(int); i++)
    {
        pSource[i] = i;
    }


    //Copy the values from the source to destination
    //Start measuring time here
    //alt_timestamp_start()
    //alt_u64 start = alt_timestamp_start();
    for(i = 0; i < NUM_BYTES/sizeof(int); i++)
    {
        pDestination[i] = pSource[i];
        printf("%d", pDestination[i]);
    }
    //alt_u64 finish = alt_timestamp();
    //printf("%d", ((finish - start)/alt_timestamp_freq()))
    //Finish measuring

    free(pSource);
    free(pDestination);


    return 0;
}
