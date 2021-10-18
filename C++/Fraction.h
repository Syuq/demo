#pragma once
#ifndef FRACTION_H
#include <bits/stdc++.h>

typedef struct {
    int numer;
    int denom; 
} Fraction;

int gcd(int numer, int denom); 

int lcm(int a, int b); 

Fraction simplify (Fraction a); 

Fraction add_fractions (Fraction a, Fraction b); 

Fraction subtract_fractions (Fraction a, Fraction b); 

void swap(int *a, int *b); 

Fraction multiply_fractions (Fraction a, Fraction b); 

Fraction divide_fractions (Fraction a, Fraction b); 

#endif

