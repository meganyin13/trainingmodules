CXXFLAGS= "-std=c++11" "-Wall" "-Werror"
CXX = "g++"

Postfix.o: Rational.o Stack.o Postfix.cc
	g++ -std=c++11 -Wall -Werror -o Postfix Rational.o Stack.o Postfix.cc 

Stack.o: Stack.cc 
	g++ -std=c++11 -Wall -Werror -c Stack.h Stack.cc

Rational.o: Rational.cc
	g++ -std=c++11 -Wall -Werror -c Rational.h Rational.cc
 
