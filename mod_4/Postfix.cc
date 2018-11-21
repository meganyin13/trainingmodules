#include <iostream>
#include <string>
#include "Rational.h"
#include "Stack.h"
#include "Stack.cc"

using namespace std;

bool isNumber(char c);
bool isOperator(char c);
Rational operation(char op, Rational r1, Rational r2);

Rational postfix(string expr) {
    
    Rational res(0, 0);
    Stack<int> stk;
    Stack<Rational> stk2;
    bool space = false;
    bool rational = false;

    for (int i = 0; (unsigned) i < expr.length(); i++) {
         if (expr[i] == ' ') {
             space = true;
	     if (rational) {
		Rational r(*stk.pop(), *stk.pop());
		stk2.push(&r);
		rational = false;
		space = false;
	     }
             continue;
         }
	 cout << "hi " << expr[i] << endl;
         
         if (isNumber(expr[i])) {
             int num = 0;
             while ((unsigned) i < expr.length() && isNumber(expr[i])) {
                   // Go from left to right add each digit
                   num = 10*num + (expr[i] - '0');
                   i++;
             }
	     i--;
	     stk.push(&num);
	     continue;
	  }
	  
	  cout << "hi2 " << expr[i] << endl;

	  if (!space && expr[i] == '/') {
	     rational = true;
	     continue;
	  }

	  cout << "hi3 " << expr[i] << endl;
	  
	  if (isOperator(expr[i])) {
	     Rational t = operation(expr[i], *stk2.pop(), *stk2.pop());
	     t.print();
	     stk2.push(&t);
	  }

	  cout << "hi4 " << expr[i] << endl;
             
    }
    cout << "pop" << endl;
    return *stk2.pop();
}

bool isNumber(char c) {
     if (c > '0' && c <= '9') return true;
     return false;
}

bool isOperator(char c) {
     if (c == '+' || c == '-' || c == '*' || c == '/') return true;
     return false;
}

Rational operation(char op, Rational r1, Rational r2) {
    if (op == '+') return r1 + r2;
    if (op == '-') return r1 - r2;
    if (op == '*') return r1 * r2;
    return r1 / r2;
} 

int main() {
    std::string expr;
    cout << "Postfix Expression: ";
    std::getline(cin, expr);
    cout << expr << endl;
    Rational res = postfix(expr);
    res.print();
}
