#include <iostream> 
#include <cmath>	// for std::abs
#include <iostream> // for std::max

bool approximatelyEqualRel(double a, double b, double relEpsilon)
{
	return (std::abs(a - b) <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
	if (std::abs(a - b) <= absEpsilon)
		return true;

	return approximatelyEqualRel(a, b, relEpsilon);
}

int main()
{

	constexpr double a{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 };

	constexpr double relEps{ 1e-8 };
	constexpr double absEps{ 1e-12 };

	std::cout << std::boolalpha; // print true or false instead of 1 or 0

	std::cout << approximatelyEqualRel(a, 1.0, relEps) << '\n';
	std::cout << approximatelyEqualRel(a - 1.0, 0.0, relEps) << '\n';

	std::cout << approximatelyEqualAbsRel(a, 1.0, absEps, relEps) << '\n';
	std::cout << approximatelyEqualAbsRel(a - 1.0, 0.0, absEps, relEps) << '\n';

	return 0;
}