#include <iostream>
#include <utility>

int main()
{
	int x{ 2 };
	int y{ 4 };

	std::cout << "Before swaap: x = " << x << ", y = " << y << '\n';
	std::swap(x, y); // swap values of x and y
	std::cout << "After swaap: x = " << x << ", y = " << y << '\n';

	return 0;
}