#include <iostream>

int main()
{
	const int x{ 5 };
	const int* ptr{ &x }; // ptr is pointing to a "const int"

	std::cout << *ptr << '\n';

	const int y{ 8 };
	ptr = &y; // ptr now points at const int y

	std::cout << *ptr << " sekarang y\n";

	int z{ 9 }; // non const
	const int* ptr1{ &z }; // ptr points to a "const int"

	*ptr1 = 9; // gak bisa, ptr sendiri adalah const int

	z = 11; // baru ini bisa

	return 0;
}