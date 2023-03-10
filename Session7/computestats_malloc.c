#include <stdio.h>
#include <stdlib.h>

int main() {
  FILE* fin = fopen("numbers.txt", "r");
  int N;
  fscanf(fin, "%d", &N);

  int* nums = malloc( N*sizeof(int) );
  for( int i = 0; i < N; i++ )
    fscanf(fin, "%d", &nums[i]);

  // Average
  double sum = 0;
  int max = nums[0];
  for( int i = 0; i < N; i++ ) {
    sum += nums[i];
    if( max < nums[i] )
      max = nums[i];
  }

  printf("Average is %f\nMax is %d\n", sum/N, max);

  return 0;
}