#include <iostream>

int main()
{
	int x{ 5 };
	int* ptr{ &x };

	std::cout << *ptr << '\n'; // valid

	{
		int y{ 7 };
		ptr = &y;

		std::cout << *ptr << '\n';// valid

	} // y out of scope, and ptr is now dagnling

	std::cout << *ptr << '\n'; // UB from dereferencing a dangling pointer

	return 0;
}