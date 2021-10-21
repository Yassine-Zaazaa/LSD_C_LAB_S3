#include "header.h"

void print_bits(unsigned char byte){
    for(int i = 7; i >= 0; i--){
        (byte >> i & 1) ? printf("1") : printf("0");
    }
    printf("\n");
}

