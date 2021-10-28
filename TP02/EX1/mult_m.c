#include <stdio.h>
#include <stdlib.h>

float **mult_m(float **A, float **B, int n){
    int sum = 0;
    float ** RES = (float **)malloc((n+1) * sizeof(float *));
    for(int i = 0; i < n; i++){
        RES[i] = (float *)malloc(n * sizeof(float)); 
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0; k<n;k++){
                sum += A[i][k] * B[k][j];
            }
            RES[i][j] = sum;
            sum = 0;
        }
    }
    return RES;
} 