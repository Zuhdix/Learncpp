#include <iostream>

namespace constants
{
	constexpr double pi{ 3.14159 };
}

double convertToRadians(double degrees)
{
	return degrees * constants::pi / 180;
}

int main()
{
	std::cout << "Enter a number of degrees: ";
	using UnitsMeasure = double;
	
	UnitsMeasure degrees{};
	std::cin >> degrees;

	UnitsMeasure radians{ convertToRadians(degrees) };
	std::cout << degrees << " degree is " << radians << " radians.\n";


	return 0;
}