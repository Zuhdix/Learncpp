#include <iostream>

const int& returnByConstReference()
{
	return 5; // returns const reference to temporary object
}

int main()
{
	const int& ref{ returnByConstReference };

	std::cout << ref; // UB

	return 0;
}

// another example

#include <iostream>

const int& returnByConstReference1(const int& ref)
{
	return ref;
}

int main()
{
	// case 1: direct binding
	const int& ref1{ 5 }; // extends lifetime
	std::cout << ref1 << '\n'; // okay

	// case 2: indirect binding
	const int& ref2{ returnByConstReference1(5)}; // binds to dangling reference
	std::cout << ref2 << '\n'; // UB

	return 0;
}