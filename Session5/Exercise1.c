/**
  * This C program finds the maximum, minimum, and average of a given list
  */

#include <stdio.h>
#define MAX_SIZE 100

int main()
{
    int arr[MAX_SIZE]; // Declare an array of MAX_SIZE
    int i, N;
    int min = MAX_SIZE; // Minimum value in array
    int max = 0; // Maximum value in array
    float avg = 0; // Average value of array

    /* Input array size */
    printf("Enter size of array: ");
    scanf("%d", &N);

    /* Input elements in array */
    printf("Enter %d elements in the array : ", N);
    for(i = 0; i < N; i++)
    {
        /* Adding each element into array */
        scanf("%d", &arr[i]);

        /* Checking if element is new min value */
        if (arr[i] < min)
        {
            min = arr[i];
        }

        /* Checking if element is new max value */
        if (arr[i] > max)
        {
            max = arr[i];
        }

        /* Finding sum of all elements in array */
        avg += arr[i];
    }

    /* Calculating average of sum in array */
    avg /= N;

    /*
     * * Print all elements of array
     **/
    printf("\nElements in array are: [");
    for(i = 0; i < N; i++)
    {
        if (i < N - 1)
        {
            printf("%d, ", arr[i]);
        }
        else
        {
            printf("%d", arr[i]);
        }
    }

    printf("] Max = %d", max);
    printf(" Min = %d", min);
    printf(" Avg = %f", avg);

    printf("\n\n");
    return 0;
}