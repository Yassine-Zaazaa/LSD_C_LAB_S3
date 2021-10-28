#include "header.h"

void print_m(float **A, int n){
    int row, column;
    for (row=0; row<n; row++)
     {
        for(column=0; column<n; column++)
            {printf("%lf     ", A[row][column]);}
            printf("\n");
     }
}

void print_m2(float **A, int r, int c){
    int row, column;
    for (row=0; row<r; row++)
     {
        for(column=0; column<c; column++)
            {printf("%lf     ", A[row][column]);}
            printf("\n");
     }
}

float ** alloc(int n){
    float **A = (float **)malloc(n * sizeof(float *));
    for(int i = 0; i < n; i++){
        A[i] = (float *)malloc(n * sizeof(float));
    }
    return A;
}

float ** free_m(float **A, int r){
    for(int i=0; i<r; i++){
        free(A[i]);
    }
    free(A);
}