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
    Rational r;
    return r;
}

bool isNumber(char c) {
     if (c >= '0' && c <= '9') return true;
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
    postfix(expr);
    cout << "hi";
}
