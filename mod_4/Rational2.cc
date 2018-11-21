#include <iostream>
#include "Rational2.h"

Rational::Rational(int i1, int i2) { 
    a = i1;
    b = i2;
}

Rational Rational::operator+(Rational& r) {
    int newa, newb;
    // common denominator
    if (this->b == r.b) { 
        newa = this->a + r.a;
        newb = r.b;
    } else {
        // get common denominator
        newb = this->b * r.b;
        newa = (this->a * r.b) + (r.a * this->b);
    }
    Rational newR(newa, newb);
    return newR;
}

Rational Rational::operator-(Rational& r) {
    // simply negate numerator and add
    // but store in different Rational so don't change r
    Rational newR(-r.a, r.b);
    return operator+(newR);
}

Rational Rational::operator*(Rational& r) {
    int newa = this->a * r.a;
    int newb = this->b * r.b;
    Rational newR(newa, newb);
    return newR;
}

Rational Rational::operator/(Rational& r) {
    // simply swap a and b in r (reciprocal)
    // but in different Rational so we don't 
    // modify r
    Rational newR(r.b, r.a);
    // and multiply
    return operator*(newR);
}

int main () {
    return 0;
}
    
