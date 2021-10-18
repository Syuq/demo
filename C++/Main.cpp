#include "Fraction.h"
#include "Integer.h"
#include <bits/stdc++.h>

using namespace std;

int main() {
  int a, b, numers;
  Fraction f1, f2, f3, res;

  cout << "enter a,b: " << endl;
  cin >> a >> b;

  if (isPalindrom(a) == true)
    cout << "ok " << endl;

  if (isPrime(a) == true)
    printf("a is prime\n");

  cout << "factorial a: " << factorial(a) << endl;

  cout << "gcd(a,b)= " << gcd(a, b) << endl;
  cout << "lcm(a,b)= " << lcm(a, b) << endl;

  puts("-");

  cout << "enter first fraction: " << endl;
  cin >> f1.numer >> f1.denom;

  cout << "enter second fraction: " << endl;
  cin >> f2.numer >> f2.denom;

  cout << "enter number :" << endl;
  cin >> numers;

  f3.numer = numers;
  f3.denom = 1;

  f1 = simplify(f1);
  cout << "simplify f1 : " << f1.numer << " " << f1.denom << endl;
  f2 = simplify(f2);
  cout << "simplify f2 : " << f2.numer << " " << f2.denom << endl;

  res = add_fractions(f1, f2);
  cout << "add fraction: " << endl;
  cout << res.numer << "/" << res.denom << endl;

  res = subtract_fractions(f1, f2);
  cout << "sub fraction: " << endl;
  cout << res.numer << "/" << res.denom << endl;

  res = add_fractions(f1, f3);
  cout << "add fraction: " << endl;
  cout << res.numer << "/" << res.denom << endl;

  res = subtract_fractions(f1, f3);
  cout << "sub fraction: " << endl;
  cout << res.numer << "/" << res.denom << endl;

  res = multiply_fractions(f1, f2);
  cout << "mul fraction: " << endl;
  cout << res.numer << "/" << res.denom << endl;

  res = divide_fractions(f1, f2);
  cout << "div fraction: " << endl;
  cout << res.numer << "/" << res.denom << endl;

  return 0;
}
