#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("How many numbers? ");
  int N;
  scanf("%d", &N);

  int* nums = malloc( N*sizeof(int) );
  for( int i = 0; i < N; i++ )
    scanf("%d", &nums[i]);

  for( int i = N-1; i >= 0; i-- )
    printf("%d ", nums[i]);
  printf("\n");

  free(nums);
  
  return 0;
}