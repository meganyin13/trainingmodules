cmake_minimum_required (VERSION 2.6)
project (postfix)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Werror" )
add_executable(postfix Postfix.cc Rational.cc Stack.cc)

