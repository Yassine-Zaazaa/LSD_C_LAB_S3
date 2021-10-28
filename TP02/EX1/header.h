#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>

void print_m(float **A, int n);
float **sum_m(float **A, float **B, int n);
float **mult_m(float **A, float **B, int n);
float ** alloc(int n);
float **trans_m(float **A, int n);
float **dia_m(float **A, int n);

#endif