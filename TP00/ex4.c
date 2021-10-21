#include "header.h"

void print_nth_byte(int n, int m){
    if(m > 4 || m < 1){
        printf("n should be between 1 and 4\n");
    }
    int v =  (m-1) * 8;
    for(int i = 0; i < v; i++){
        n = n >> 1;
    }
    for(int i = 7; i >= 0; i--){
        (n >> i & 1) ? printf("1") : printf("0");
    }
    printf("\n");
}
