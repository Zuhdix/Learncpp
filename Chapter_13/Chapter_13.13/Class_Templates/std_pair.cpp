#include <iostream>
#include <utility> // std::pair

template <typename T, typename U>
void print(std::pair<T, U> p)
{
	// the members of std::pair have predefined names 'first' and 'second'
	std::cout << '[' << p.first << ", " << p.second << ']';
}

int main()
{
	// std::pair adalah template class di header utility
	std::pair<int, double> p1{ 1, 9.1 }; // a pair holding an int and a double
	std::pair<double, int> p2{ 2.3, 8 }; // a pair holding a double and an int
	std::pair<int, int> p3{ 3, 6 };

	print(p2);

	return 0;
}