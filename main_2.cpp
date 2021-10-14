#include <bits/stdc++.h>
#include "includes/fraction.h"

int main()
{
    int n, d ;
    int lol=2;
    Fraction c(lol, 1);

    std::cout << "Enter first fraction : ";
    std::cin >> n >> d ;
    Fraction a(n, d);

    std::cout << "Enter second fraction : ";
    std::cin >> n >> d ;
    Fraction b(n, d);

    Fraction sum = a.add(b);
    std::cout << "Sum is : " ;
    sum.show();

    Fraction take_away= a.sub(b);
    std::cout << "Sub is : " ;
    take_away.show();

    Fraction multi= a.mul(b);
    std::cout << "Mul is : " ;
    multi.show();

    Fraction divide= a.div(b);
    std::cout << "Div is : " ;
    divide.show();

    Fraction addinte= c.add(a);
    std::cout << "Add a fraction with an integer: ";
    addinte.show();

    Fraction subinte= c.sub(a);
    std::cout << "Sub a fraction with an integer: ";
    subinte.show();

    Fraction redu= a.reduce(a);
    std::cout << "reduce num 1: ";
    redu.show();

    Fraction redu_2= b.reduce(b);
    std::cout << "reduce num 2: ";
    redu_2.show();

    return 0;
}
