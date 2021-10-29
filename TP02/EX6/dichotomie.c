#include "header.h"

float dichotomie(float (*f)(float), float a, float b, int n){
    if(f(a) * f(b) > 0){
        exit(EXIT_FAILURE);
    }
    float res;
    for(int i = 0; i<n; i++){
        if(f((a+b)/2) > 0){
            b = (a+b)/2;
            res = b;
        }

        if(f((a+b)/2) < 0){
            a = (a+b)/2;
            res = a;
        }
        if(f((a+b)/2) == 0){
            res = (a+b)/2;
            return res;
        }
    }
    return res;
}
