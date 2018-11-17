#include <iostream>

class Rational {
    public:
        Rational (int i1, int i2);
        Rational operator+(Rational& r);
        Rational operator-(Rational& r);
        Rational operator*(Rational& r);
        Rational operator/(Rational& r);
        double value();
        void print();
        int a, b;
};

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

double Rational::value() {
   return a / b;
} 

void Rational::print() {
   std::cout << this->a << " / " << this->b << std::endl;
}

int main () {
    Rational r1(4,7);
    Rational r2(3,9);
    
    // Add them
    Rational res = r1 + r2;
    res.print();

    // Subtract them
    Rational res2 = r1 - r2;
    res2.print();

    // Multiply them
    Rational res3 = r1 * r2;
    res3.print();

    // Divide them
    Rational res4 = r1 / r2;
    res4.print();
}
    
