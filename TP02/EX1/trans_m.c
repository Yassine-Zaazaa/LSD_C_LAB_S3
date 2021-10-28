#include "header.h"

float **trans_m(float **A, int n){
    float **RES = alloc(n);
    for(int i = 0; i<n;i++){
        for(int j =0;j<n;j++){
            RES[i][j] = A[j][i];
        }
    }
    return RES;
}