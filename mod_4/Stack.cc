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








