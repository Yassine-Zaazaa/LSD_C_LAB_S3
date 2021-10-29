#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dichotomie(float (*f)(float), float a, float b, int n);
float dichotomie2(float (*f)(float), float a, float b, float e);
float newton(float (*f) (float), float (*g) (float), float a, int n);
float f(float x);

#endif