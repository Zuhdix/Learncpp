// nullify(ptr); gak memiliki efek ke variable ptr
#include <iostream>

// [[maybe_unused]] gets rid of compiler about ptr2 being set but not used
void nullify([[maybe_unused]] int* ptr2)
{
	ptr2 = nullptr; // Make the func param a null pointer
}

int main()
{
	int x{ 5 };
	int* ptr{ &x }; // ptr points to x

	std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");

	nullify(ptr);

	std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");

	return 0;
}

// sekarang nullify(ptr) memiliki efek ke variable ptrnya

#include <iostream>

void nullify(int*& refptr) // refptr is now a reference to a pointer
{
	refptr = nullptr; // Make the function parameter a null pointer
}

int main()
{
	int x{ 5 };
	int* ptr{ &x }; // ptr points to x

	std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");

	nullify(ptr);

	std::cout << "ptr is " << (ptr ? "non-null\n" : "null\n");
	return 0;
}