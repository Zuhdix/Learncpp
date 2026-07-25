#include <iostream>

enum Color
{
	black, // assigned 0
	red,
	blue,
	green,
	white,
	cyan,
	yellow,
	magenta, // assignded 7
};

int main()
{
	Color shirt{ blue };

	std::cout << "Your shirt is " << shirt << '\n'; // unscoped enum implicit ke integral

	return 0;
}