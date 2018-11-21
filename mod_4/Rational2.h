class Rational {
    public:
        Rational(int i1, int i2);
	Rational operator+(Rational& r);
        Rational operator-(Rational& r);
        Rational operator*(Rational& r);
        Rational operator/(Rational& r);
	int a, b;
};
