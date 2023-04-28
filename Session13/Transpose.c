#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>

/*
 * Compile: gcc -ggdb -Wall -pedantic -std=gnu99 -O3 Transpose.c -o Transpose
 */

/* Naive version */
void transpose( int n, int blocksize, int *dst, int *src ) {
    int i,j;
    for( i = 0; i < n; i++ )
        for( j = 0; j < n; j++ )
            dst[j+i*n] = src[i+j*n];
}

/* STEP 1: implement matrix tranposition using cache blocking */
/* Block version */
void block_transpose( int n, int blocksize, int *dst, int *src ) {
}

int main( int argc, char **argv ) {
    int n = 2000,i,j;
    int blocksize = 20; /* to do: find a better block size */

    /* allocate an n*n block of integers for the matrices */
    int *A = (int*)malloc( n*n*sizeof(int) );
    int *B = (int*)malloc( n*n*sizeof(int) );

    /* initialize A,B to random integers */
    srand48( time( NULL ) );
    for( i = 0; i < n*n; i++ ) A[i] = lrand48( );
    for( i = 0; i < n*n; i++ ) B[i] = lrand48( );

    /* measure performance */
    struct timeval start, end;

    gettimeofday( &start, NULL );
    transpose( n, blocksize, B, A );
    gettimeofday( &end, NULL );

	printf("\n\n**** Naive Approach ****\n\n");
    double seconds = (end.tv_sec - start.tv_sec) + 1.0e-6 * (end.tv_usec - start.tv_usec);
    printf( "%g milliseconds\n\n", seconds*1e3 );

    /* check correctness */
    for( i = 0; i < n; i++ )
        for( j = 0; j < n; j++ )
            if( B[j+i*n] != A[i+j*n] ) {
	        printf("Error!!!! Transpose does not result in correct answer!!\n");
	        exit( -1 );
            }
  
	/* STEP 2: add code to call the block_transpose() function and calculalate the 
	 * comparing the performance to matrix transposition not using cache blocking  
	 * (be sure to add check correctness for block_transpose)
	 */
  
    /* release resources */
    free( A );
    free( B );
    return 0;
}