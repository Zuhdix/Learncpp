#include <iostream>

int main()
{
	int x{ 5 };

	// int* ptr; // an uniniialized pointer (holds a garbage address)
	// int* ptr2{}; // a null pointer (next lesson)

	int* ptr3{ &x }; // a pointer initialized with the address of variable x

	std::cout << ptr3 << '\n'; // cetak alamat
	// use dereference operator to print the value at the address that ptr is holding (which is x's address)
	std::cout << *ptr3 << '\n'; // cetak nilai x nya

	return 0;
}