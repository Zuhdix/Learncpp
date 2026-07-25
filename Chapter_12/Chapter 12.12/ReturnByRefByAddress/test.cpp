#include <iostream>
#include <string>

const int& getNextId()
{
	static int s_x{ 0 };
	++s_x;
	return s_x;
}

int main()
{
	const int& a{ getNextId() }; // merujuk ke objeknya langsung yaitu 3
	const int b{ getNextId() }; // membuat salinan dan objek sendiri
	const int& c{ getNextId() }; // sama kaya a

	std::cout << a << '\n';
	std::cout << b << '\n';
	std::cout << c << '\n';

	return 0;
}