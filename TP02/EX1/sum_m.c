#include <stdio.h>
#include <stdlib.h>

float **sum_m(float **A, float **B, int n){
    float ** RES = (float **)malloc((n+1) * sizeof(float *));
    for(int i = 0; i < n; i++){
        RES[i] = (float *)malloc(n * sizeof(float)); 
    }
    for(int i = 0; i<n; i++){
        for(int j =0; j<n; j++){
            RES[i][j] = A[i][j] + B[i][j];
        }
    }
    return RES;
}