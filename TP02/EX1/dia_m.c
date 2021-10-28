#include "header.h"

float **dia_m(float **A, int n){
    float **RES = (float **)malloc(2 * sizeof(float *));
    for(int i = 0; i<2; i++){
        RES[i] = (float *)malloc(n * sizeof(float));
    }
    int k = 0;
    int h = 0;
    for(int i =0; i<n; i++){
        for(int j =0; j<n; j++){
            if(i == j){
                RES[0][k] = A[i][j];
                k++;
            }
            if(i + j == n - 1){
                RES[1][h] = A[i][j];
                h++;
            }
        }
    }
    return RES;
}