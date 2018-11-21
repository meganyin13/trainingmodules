#include <iostream>
#include "Rational.h"
#include "Stack.h"
#include "Stack.cc"

using namespace std;

int main() {
	Stack<Rational> s1;
	Rational r1(3, 2);
	Rational r2(4, 3);
	Rational r3(1, 7);
	s1.push(&r1);
	s1.push(&r2);
	s1.push(&r3);
	
	int size = s1.size();
	for (int i = 0; i < size; i++) {
		s1.pop()->print();
	}
	cout << '\n';
}

