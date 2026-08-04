#include <iostream>
#include <cmath>

struct Point
{
	double x{};
	double y{};
};

int main()
{
	Point p1{};
	p1.x = 3.0;
	p1.y = 4.0;

	Point p2{};
	p2.x = 0.0;
	p2.y = 0.0;

	double distance = std::sqrt(std::pow(p1.x - p2.x, 2) + std::pow(p1.y - p2.y, 2));
	std::cout << "Distance: " << distance << '\n';

	// masih kurang, coba liat notion 13.7.
}