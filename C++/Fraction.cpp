#include "Fraction.h"
#include <bits/stdc++.h>

int gcd(int numer, int denom) {
  int result;
  while (denom != 0) {
    result = numer % denom;
    numer = denom;
    denom = result;
  }
  return numer;
}

int lcm(int a, int b) {
  return (a / gcd(a,b)) * b;
}

Fraction simplify (Fraction a) {
  int cd;
  cd = gcd(a.numer, a.denom);
  a.numer /= cd;
  a.denom /= cd;
  return a;
}

Fraction add_fractions (Fraction a, Fraction b) {
  Fraction sum;
  int lcmd;
  a = simplify(a);
  b = simplify(b);
  lcmd = lcm(a.denom, b.denom);
  sum.numer = (lcmd / a.denom * a.numer) + (lcmd / b.denom * b.numer);
  sum.denom = lcmd;
  return simplify(sum);
}

Fraction subtract_fractions (Fraction a, Fraction b) {
  Fraction sum;
  int lcmd;
  a = simplify(a);
  b = simplify(b);
  lcmd = lcm(a.denom, b.denom);
  sum.numer = (lcmd / a.denom * a.numer) - (lcmd / b.denom * b.numer);
  sum.denom = lcmd;
  return simplify(sum);
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

Fraction multiply_fractions (Fraction a, Fraction b) {
  Fraction sum;
  a = simplify(a);
  b = simplify(b);
  swap(&a.numer, &b.numer); // another round of simplifications to avoid (minimize) overflows below
  a = simplify(a);
  b = simplify(b);
  sum.numer = (a.numer * b.numer);
  sum.denom = (a.denom * b.denom);
  return sum;
}

Fraction divide_fractions (Fraction a, Fraction b) {
  swap(&b.numer, &b.denom);
  return multiply_fractions(a, b);
}
