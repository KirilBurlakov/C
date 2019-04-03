#include <stdio.h>
#include <stdlib.h>

int main()
{

    char* pSource;
    char* pDestination;
    pSource = (char*)calloc(1024, sizeof(char));
    pDestination = (char*)malloc(1024);

    int i;
    for(i = 0; i < 100; i++)
    {
        pSource[i] = i;
    }

    for(i = 0; i < 100; i++)
    {
        pDestination[i] = pSource[i];
        printf("%d ", pDestination[i]);
    }
    printf("Hello world!\n");
    return 0;
}
