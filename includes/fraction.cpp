#include <bits/stdc++.h>
#include "interger.h"
#include "fraction.h"

Fraction Fraction::add(const Fraction& another) const
{
    return Fraction(num*another.den + den*another.num, den*another.den);
}

Fraction Fraction::sub(const Fraction& another) const
{
    return Fraction(num*another.den - den*another.num, den*another.den);
}

Fraction Fraction::mul(const Fraction& another) const
{
    return Fraction(num*another.num, den*another.den);
}

Fraction Fraction::div(const Fraction& another) const
{
    return Fraction(num*another.den, den*another.num);
}

Fraction Fraction::reduce(const Fraction& another) const
{
    return Fraction(num / __gcd(num, den), den / __gcd(num, den));
}

void Fraction::show() const
{
    std::cout << num << "/" << den << endl ;
}
