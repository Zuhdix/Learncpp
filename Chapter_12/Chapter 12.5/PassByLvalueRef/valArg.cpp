#include <iostream>

void printValue(int& y)
{
	std::cout << y << '\n';
}

void addOne(int y) // y is a copy of x
{
	++y; // this modifies the copy of x, not the actual object x
}

void addTwo(int& y)
{
	y+=2; // actual object of x
}

int main()
{
	int x{ 5 };
	std::cout << "value = " << x << '\n';

	addOne(x);
	std::cout << "value = " << x << '\n'; // x has not been modified

	addTwo(x);
	addTwo(x);
	std::cout << "value = " << x << '\n'; // this is modified print 9

	const int z{ 8 };
	addOne(z);  // copy object
	addTwo(z);	// ini baru error pass by ref

	std::cout << "value = " << z << '\n';

	// printValue(z); // error: z is a non-modifable lvalue

	return 0;
}