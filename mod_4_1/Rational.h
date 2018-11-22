#ifndef _RATIONAL_
#define _RATIONAL_

class Rational {
    public:
	Rational();
        Rational(int i1, int i2);
        Rational operator+(Rational& r);
        Rational operator-(Rational& r);
        Rational operator*(Rational& r);
        Rational operator/(Rational& r);
        double value();
        void print();
	void setRational(int i1, int i2);
        int a, b;
};

#endif
