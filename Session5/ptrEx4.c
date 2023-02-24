#include <stdio.h>

void swapFunction(int *i, int *j) {
    int t = *i; /* t is a temporary variable that stores the value of i */
    *i = *j;    /* i is assigned the value of j */
    *j = t;     /* j is assigned the value of t (initially, the value of i) */
}

int main() {
    int i = 4, j = 5;
    printf("The current value of i = %d, and the current value of j = %d prior to swap \n", i, j);
    swapFunction(&i, &j); /* swap function is called passing the addresses of variables i and j */
    printf("The current value of i = %d, and the current value of j = %d after the swap \n", i, j);
    return 0;
}
