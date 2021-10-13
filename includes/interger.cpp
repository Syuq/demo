#include <bits/stdc++.h>

//void findPrimeSequence(int N, int *primes) {
  //if (N > 0) {
  //}
//}

bool IsNumber(int *primes, int n) {
  int *lenght = primes + n, *postion = primes;

  if (lenght == 0)
    return false;
  if (*postion == '0')
    return false;
  for (int i = 0; i < n; i++) {
    if (primes[i] < '0' || primes[i] > '9')
      return false;
  }
  return true;
}

bool isPrime(int n) {
  int flag = 0;
  for (int i = 2; i <= (n / 2); ++i) {
    if (n % i == 0)
      flag = 1;
    break;
  }
  if (flag == 1)
    return false;
  return true;
}

bool isPalindrom(int n) {
  int temp, r, sum = 0;
  for (temp = n; n != 0; n = n / 10) {
    r = n % 10;
    sum = sum * 10 + r;
  }
  if (temp == sum)
    return true;
  return false;
}

int gcd(int a, int b) {
  if (b == 0)
    return a;
  return gcd(b, a % b);
}

int lcm(int a, int b) { return a * b / gcd(a, b); }

int factorial(int n) {
  if (n == 1)
    return 1;
  return n * factorial(n - 1);
}
