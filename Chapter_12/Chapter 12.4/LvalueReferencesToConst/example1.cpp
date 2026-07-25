#include <iostream>

int main()
{
	int x{ 5 }; // modifable lvalue
	const int& ref{ x }; // bind ke const reference pake modifable lvalue

	std::cout << ref << '\n';
	// ref = 7; // gak bisa, const reference non-modifable (x nya doang yang modifable)

	x = 6; // baru ini bisa;

	std::cout << x << '\n';
	std::cout << ref << '\n'; // ngerubah lewat x, klo lewat const ref gak bisa.
	return 0;
}