#include "header.h"

int PolyLagrange(int *X, int len, int x, int i){
    int res = 1;
    for(int j = 0; j < len; j++){
        if(j != i)
            res = res * ((x - X[j]) / (X[i] - X[j]));
    }
    return res;
}