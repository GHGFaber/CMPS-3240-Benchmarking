#include <stdio.h>
#include <stdlib.h>


void iaxpy( int length, int A, int *X, int *Y, int *Result ) {
    for( int i = 0; i < length; i++ )
	Result[i] = A * X[i] + Y[i];
}

int main( void ){
    //set up
    const int N = 200000000;
    int A = 32;
    int *X = (int *) malloc(N * sizeof(int) );

    int *Y = (int *) malloc(N * sizeof(int) );

    int *Result = (int *) malloc(N * sizeof(int) );
    //calling algo

    iaxpy( N, A, X, Y, Result);
    //freeing memory
    free(X);
    free(Y);
    free(Result);

    return 0;
}
