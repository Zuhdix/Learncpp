#include <iostream>

int foo()
{
	return 5;
}

int goo()
{
	return 6;
}

int main()
{
	std::cout << foo << '\n'; // print address bukan value nya
	int(*fcnPtr)() { &foo }; // point ke function foo
	fcnPtr = &goo; // fcnPtr now points to function goo

	// tipe harus match

	// function prototypes
	int foo();
	double goo();
	int hoo(int x);

	// function pointer initializers
	int (*fcnPtr1)() { &foo };    // okay
	int (*fcnPtr2)() { &goo };    // wrong -- return types don't match!
	double (*fcnPtr4)() { &goo }; // okay
	fcnPtr1 = &hoo;              // wrong -- fcnPtr1 has no parameters, but hoo() does
	int (*fcnPtr3)(int) { &hoo }; // okay


	// bisa tanpa &
	// function prototypes
	int foo();

	// function initializations
	int (*fcnPtr5)() { foo }; // okay, foo implicitly converts to function pointer to foo
	void* vPtr{ foo };       // not okay, though some compilers may allow
	int (*fcnptr)() { nullptr }; // okay
	return 0;
}