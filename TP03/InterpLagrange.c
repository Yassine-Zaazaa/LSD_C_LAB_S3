#include "header.h"

int InterpLagrange(int *X, int len, float (*f)(float), int x){
    int res = 0;
    int Y[len];
    for(int i = 0; i < len; i++){
        Y[i] = f(X[i]);
        res = res + (PolyLagrange(X,len, x,i) * Y[i]);
    }
    return res;
}