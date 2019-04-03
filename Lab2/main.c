#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Allocate static memory
    char* pSource;
    char* pDestination;
    pSource = (char*)calloc(1024, sizeof(char));
    pDestination = (char*)malloc(1024);


    //Initialize the first array with some values
    int i;
    for(i = 0; i < 1024; i++)
    {
        pSource[i] = i;
    }


    //Copy the values from the source to destination
    //Start measuring time here
    //alt_timestamp_start()
    //alt_u64 start = alt_timestamp_start();
    for(i = 0; i < 1024; i++)
    {
        pDestination[i] = pSource[i];
        printf("%d ", pDestination[i]);
    }
    //alt_u64 finish = alt_timestamp_start();
    //printf("%d", ((finish - start)/alt_timestamp_freq()))
    //Finish measuring

    free(pSource);
    free(pDestination);


    return 0;
}
