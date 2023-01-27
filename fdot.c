#include <stdio.h>
#include <stdlib.h>


float fdot( int length, float *X, float *Y) {
    float sum = 0;
    for( int i = 0; i < length; i++ )
	sum+= X[i] * Y[i];
    return sum;
}

int main( void ){
    //set up
    const int N = 200000000;
    //int A = 32;
    float *X = (float *) malloc(N * sizeof(float) );

    float *Y = (float *) malloc(N * sizeof(float) );

    //int *Result = (int *) malloc(N * sizeof(int) );
    //calling algo

    float res = fdot( N, X, Y);
    //freeing memory
    free(X);
    free(Y);
    //free(Result);

    return 0;
}
