#include <iostream>

namespace Company::Legacy::Math
{
	int add(int x, int y)
	{
		return x + y;
	}
	int multiply(int x, int y)
	{
		return x * y;
	}
}


int main()
{
	namespace CLM = Company::Legacy::Math;

	std::cout << CLM::add(1, 2) << '\n';
	std::cout << CLM::multiply(3, 4) << '\n';

	return 0;
}