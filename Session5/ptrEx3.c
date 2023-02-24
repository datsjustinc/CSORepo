#include <stdio.h>

int main() {
    int x = 6; /* declare an int variable, initialize to 6 */
    int *pt;   /* declare the pointer pt using * */
    pt = &x;   /* pt holds the address of the variable x */
    printf("The value of x = %d \n", x);
    printf("The value of x (via pointer) = %d \n", *pt);
    printf("The address of x = %p \n", pt);
    *pt = 10;
    printf("The value of x (after reassigning it) = %d \n", x);
    printf("The value of x (after reassigning it) (via pointer) = %d \n", *pt);
    printf("The address of x (after reassigning it) = %p \n", pt);
    return 0;
}
