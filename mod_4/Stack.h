const int SIZE = 10;

template <class StackType> class Stack {
	StackType s[SIZE];
	int fill;
	
	public:
		Stack();
		void push(StackType elem);
		StackType pop();
		int size();
};



