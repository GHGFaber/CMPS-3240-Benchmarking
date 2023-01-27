#include <stdio.h>
#include <stdlib.h>

void dgemm(int N, double *a, double *b, double *c) {
    for (int i=0;  i<N;  i++)
        for (int j=0;  j<N;  j++) {
            double cij = 0;
            for (int k=0;  k<N;  k++)
                //     a[i][k]  * b[k][j]
                cij += a[i+k*N] * b[k+j*N];
            // c[i][j]
            c[i+j*N] = cij;
        }
}

int main( void ){
    //set up
    const int N = 1024;
    //int A = 32;
    double *a = (double *) malloc(N*N * sizeof(double) );

    double *b = (double *) malloc(N*N * sizeof(double) );

    double *c = (double *) malloc(N*N * sizeof(double) );

    //calling algo

    dgemm(N, a, b, c); 
    //freeing memory
    free(a);
    free(b);
    free(c);

    return 0;
}
