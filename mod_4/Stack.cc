#include <iostream>
#include "Rational.h"
#include "Stack.h"

using namespace std;

template <typename T>
Stack<T>::Stack() {
	fill = 0;
}

template <typename T>
void Stack<T>::push(T* elem) {
	if (fill == SIZE) return;
	s[fill] = *elem;
	fill++;
}

template <typename T>
T* Stack<T>::pop() {
	if (fill == 0) return 0;
	fill--;
	return &s[fill];
}

template <typename T>
int Stack<T>::size() { return fill; }

//int main() {
//	Stack<Rational> s1;
//	Rational r1(3, 2);
//	Rational r2(4, 3);
//	Rational r3(1, 7);
//	s1.push(&r1);
//	s1.push(&r2);
//	s1.push(&r3);
//
//	int size = s1.size();
//	for (int i = 0; i < size; i++) {
//		s1.pop()->print();
//	}
//	cout << '\n';
//}








