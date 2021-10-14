#include <bits/stdc++.h>
#include "includes/interger.h"
#include "includes/fraction.h"

int main() {
  int n = 444;
   if(isPalindrom(n) == true)
     printf("ok\n"); 
   int a=27,b=9;
   cout << "value gcd :"<< gcd(a,b) << endl;

   if(isPrime(n) == true)
     printf("n is prime\n");

   cout << "value lcm :" << lcm(a,b) << endl;

  cout << "factorial 3: " << factorial(3) << endl;


  int num1=1, den1=500, num2=2, den2=1500, den3, num3;
    addFraction(num1, den1, num2, den2, num3, den3);
    printf("%d/%d + %d/%d is equal to %d/%d\n", num1, den1,
                                   num2, den2, num3, den3);

  return 0;
}
