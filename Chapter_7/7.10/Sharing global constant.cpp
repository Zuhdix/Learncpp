#include "constant.h"

#include <iostream>


int main()
{
	std::cout << "Enter a radius: ";
	double radius{};
	std::cin >> radius;

	std::cout << "The circumference is: " << 2 * radius * constant::pi << '\n';

	return 0;
}
