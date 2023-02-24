#include <stdio.h>

int main() {
    int y = 5;
    int *pt; /* when * is used, pt is considered as a pointer variable */
    pt = &y; /* pt holds the address of the variable y */
    printf("The value of y (as an int): %d \n", y); /* prints the value of y, which is 5 */
    printf("The address of y via pt: %p \n", pt); /* prints the address of y */
    return 0;
}
