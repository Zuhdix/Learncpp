#include <iostream>

int main()
{
	int x{ 5 };
	int* ptr1{ &x }; // ptr initialized to point at x

	std::cout << *ptr1 << '\n'; // print the value at the address being pointed to (x's address)

	int y{ 8 };
	ptr1 = &y;	// change ptr to point at y

	std::cout << *ptr1 << '\n'; // print the value at the address being pointed to (y's address)

	int z{ 9 };
	int* ptr2{ &z }; // initialize ptr with address of variable z

	std::cout << z << '\n'; // print z
	std::cout << *ptr2 << '\n'; // print the value at the address.... (z's address)

	*ptr2 = 11; // The object at the address held by ptr (z) assigned value 11 (note that ptr is dereferenced here)

	std::cout << z << '\n';		
	std::cout << *ptr2 << '\n'; // print the value at the address that ptr is holding (z's address)


	return 0;
}