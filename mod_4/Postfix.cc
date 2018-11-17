#include <iostream>
#include <string>
#include "Rational.h"
#include "Stack.h"

using namespace std;

bool isNumber(char c);
bool isOperator(char c);
Rational operation(char op, Rational r1, Rational r2);

Rational postfix() {
    cout << "Postfix Expression: " << endl;
    string expr;
    getline(cin, expr);
    
    Rational res(0, 0);
    Stack<int> stk;
    Stack<Rational> stk2;
    bool space = false;
    bool rational = false;

    for (int i = 0; (unsigned) i < expr.length(); i++) {
         if (expr[i] == ' ') {
             space = true;
	     if (rational) {
		Rational r(stk.pop(), stk.pop());
		stk2.push(r);
	     }
             continue;
         }
         
         if (isNumber(expr[i])) {
             int num = 0;
             while ((unsigned) i < expr.length() && isNumber(expr[i])) {
                   // Go from left to right add each digit
                   num = 10*num + (expr[i] - '0');
                   i++;
             }
	     i--;
	     stk.push(num);
	  }
	  
	  if (!space && expr[i] == '/') {
	     rational = true;
	     continue;
	  }
	  
	  if (space && isOperator(expr[i])) {
	     stk2.push(operation(expr[i], stk2.pop(), stk2.pop()));
	  }
             
    }
    return stk2.pop();
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
    Rational res = postfix();
    res.print();
}
