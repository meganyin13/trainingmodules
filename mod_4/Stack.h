#ifndef _STACK_
#define _STACK_

const int SIZE = 10;

template <typename T> class Stack {
    T s[SIZE];
    int fill; // num elements in stack;
    
    public:
          Stack();
          void push(T* elem);
          T* pop();
	  int size();
};

#endif


