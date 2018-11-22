5
5
6
7

Why?
-foo1 is ineffectual because x is passed in by value and nothing is returned. Thereforea copy of x is used in the x local variable in foo1. That local variable is incremented but at function's end that x local variable of foo1 is discarded.
-foo2 used a pass by reference to x which does have an effect even though no value is returned because within the function, x is the actual x frome outside foo2 rather than a mere copy. Therefore, when the function increments x, it goes to the memory address of x and changes the value there.
-foo3 uses pointers to x to increment x. Here too, the function is actually effectual  because the x being incremented within foo3 is not just a copy but the actually x at its memory address. Therefore, when foo3 increments x, it goes to the memory address pointed to by *x and increments x there, which is permanent.
