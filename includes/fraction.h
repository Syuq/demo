#pragma once
#ifndef FRACTION_H
#include <bits/stdc++.h>

class Fraction
{
    int num, den ;
public:
    Fraction(int n, int d) : num(n), den(d) {}

    Fraction add(const Fraction&) const ;
    Fraction sub(const Fraction&) const ;
    Fraction mul(const Fraction&) const ;
    Fraction div(const Fraction&) const ;
    Fraction reduce(const Fraction&) const ;
    void show() const;
};

#endif
