#include <iostream>
using namespace std;

const int SIZE = 10;

template <class StackType> class Stack {
    StackType s[SIZE];
    int fill; // num elements in stack;
    
    public:
          Stack();
          void push(StackType elem);
          StackType pop();
	  int size();
};

template<typename T>
Stack<T>::Stack() {
	fill = 0;
}

template<typename T>
void Stack<T>::push(T elem) {
	if (fill == SIZE) return;
	s[fill] = elem;
	fill++;
}

template<typename T>
T Stack<T>::pop() {
	if (fill == 0) return 0;
	fill--;
	return s[fill];
}

template<typename T>
int Stack<T>::size() { return fill; }


int main() {
	Stack<char> s1;
	s1.push('a');
	s1.push('b');
	s1.push('c');
	
	int size = s1.size();
	for (int i = 0; i < size; i++) {
		cout << s1.pop();
	}
	cout << '\n';
}




