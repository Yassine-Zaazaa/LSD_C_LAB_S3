#include <stdio.h>
#include <stdlib.h>

float newton(float (*f) (float), float (*g) (float), float a, int n){
    for(int i=0; i<n; i++){
        a = a - (f(a) / g(a));
    }
    return a;
}