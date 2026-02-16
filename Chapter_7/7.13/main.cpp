#include <iostream>
#include "FooLib.h"

int print(long)
{
	return 1;
}

int main()
{
	using namespace Foo;

	std::cout << a << '\n';
	std::cout << print(0) << '\n';

	return 0;
}