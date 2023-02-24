/**
 *  * C program to input and print array elements using pointers
 *   */

#include <stdio.h>

#define MAX_SIZE 100 // Maximum array size

int main() {
    int arr[MAX_SIZE];
    int N, i;
    int * ptr = arr; // Pointer to arr[0] 

    printf("Enter size of array: ");
    scanf("%d", &N);

    printf("Enter elements in array:\n");
    for (i = 0; i < N; i++) {
        // (ptr + i) is equivalent to &arr[i]
        scanf("%d", (ptr + i));   
     }

     printf("Array elements: \n");
     for (i = 0; i < N; i++) {
        // *(ptr + i) is equivalent to arr[i]
        printf("%d, ", *(ptr + i));
     }
     printf("\n\n");

     return 0;
}
