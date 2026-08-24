#include <iostream>
#include <cmath>

class Point
{
private:
	double m_x{};
	double m_y{};

public:
	Point(double x, double y) : m_x{ x }, m_y{ y } {}

	friend double distance(const Point& x, const Point& y);

	void print() const
	{
		std::cout << "(" << m_x << ", " << m_y << ")";
	}

};

double distance(const Point& x, const Point& y)
{
	//return std::sqrt(std::pow((x.m_x - y.m_x), 2) + 
	//	std::pow((x.m_y - y.m_y), 2));

	return std::sqrt(
		((x.m_x - y.m_x) * (x.m_x - y.m_x)) +
		((x.m_y - y.m_y) * (x.m_y - y.m_y))
	);
}

// cara lain
double distance(const Point& p1, const Point& p2)
{
	return std::sqrt(
		((p1.m_x - p2.m_x) * (p1.m_x - p2.m_x)) +
		((p1.m_y - p2.m_y) * (p1.m_y - p2.m_y))
	);
}

int main()
{
	Point p1{ 0.0, 0.0 };
	Point p2{ 3.0, 4.0 };

	std::cout << "Distance: " << distance(p1, p2) << '\n';

	return 0;
}