#include "header.h"

int main(){
    float **A = alloc(3);
    float **B = alloc(3);
    A[0][0] = 5;
    A[0][1] = 2;
    A[0][2] = 1;
    A[1][0] = 7;
    A[1][1] = 3;   
    A[1][2] = 4;
    A[2][0] = 2;
    A[2][1] = 10;
    A[2][2] = 9;
    B[0][0] = 4;
    B[0][1] = 3;
    B[0][2] = 9;
    B[1][0] = 2;
    B[1][1] = 0;
    B[1][2] = 0;
    B[2][0] = 1;
    B[2][1] = 5;
    B[2][2] = 6;
    float ** SUM = sum_m(A,B,3);
    print_m(SUM, 3);
    printf("\n\n\n");
    float ** MULT = mult_m(A,B,3);
    print_m(MULT, 3);
    printf("\n\n\n");
    float ** TRANS_SUM = trans_m(SUM, 3);
    print_m(TRANS_SUM, 3);
    printf("\n\n\n");
    float **DIA = dia_m(TRANS_SUM, 3);
    print_m2(DIA, 2, 3);
    free_m(A,3);
    free_m(B,3);
    free_m(SUM,3);
    free_m(MULT,3);
    free_m(TRANS_SUM,3);
    free_m(DIA, 2);
    return 0;
}