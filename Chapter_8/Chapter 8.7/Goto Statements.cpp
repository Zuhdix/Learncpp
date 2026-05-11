#include <iostream>
#include <cmath> // untuk fungsi sqrt()

int main()
{
	double x{};
tryAgain:	// ini statement label
	std::cout << "Enter a non-negative number: ";
	std::cin >> x;

	if (x < 0.0)
		goto tryAgain; // statement goto

	std::cout << "The square root of " << x << " is " << std::sqrt(x) << '\n';

	return 0;
}
