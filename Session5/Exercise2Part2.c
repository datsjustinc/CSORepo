/**
  * This C program copies input elements into a source array and
  * then appends elements from source array into destination array.
  */

#include <stdio.h>
#define MAX_SIZE 100 // Maximum array size

int main(int argc, char* argv[])
{
    int sourceArray[MAX_SIZE]; // capacity of sourceArray
    int sourceCount = 0; // size of sourceArray
    int * sourcePointer = sourceArray; // pointer to sourceArray[0]

    int destArray[MAX_SIZE] = {9, 5, 2, 7, 1}; // capacity of destArray
    int destCount = 5; // size of destArray
    int * destPointer = destArray; // pointer to destArray[0]

    // printing out original destArray
    printf("original destArray elements: \n[");
    for (int i = 0; i < destCount; i++)
    {
        if (i < destCount - 1)
        {
            printf("%d, ", *(destPointer + i));
        }
        else
        {
            printf("%d", *(destPointer + i));
        }
    }
    printf("]\n\n");

    // Reading input file and adding to sourceArray
    FILE *file = fopen(argv[1], "r");
    while(fscanf(file, "%d", (sourcePointer + sourceCount)) > 0){
        sourceCount += 1;
    }

    // printing out sourceArray
    printf("\nsourceArray elements: \n[");
    for (int i = 0; i < sourceCount; i++)
    {
        if (i < sourceCount - 1)
        {
            printf("%d, ", *(sourcePointer + i));
        }

        else
        {
            printf("%d", *(sourcePointer + i));
        }
    }
    printf("]\n\n");

    // adding sourceArray to destArray
    for (int i = 0; i < sourceCount; i++)
    {
        *(destPointer + destCount) = *(sourcePointer + i);
        destCount += 1;
    }

    // printing out updated destArray
    printf("\nupdated destArray elements: \n[");
    for (int i = 0; i < destCount; i ++)
    {
        if (i < destCount - 1)
        {
            printf("%d, ", *(destPointer + i));
        }
        else
        {
            printf("%d", *(destPointer + i));
        }
    }
    printf("]\n\n");

    return 0;
}