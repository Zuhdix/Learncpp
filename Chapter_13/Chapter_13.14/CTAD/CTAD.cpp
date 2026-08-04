#include <utility> // for std::pair

int main()
{
	std::pair<int, int> p1{ 1, 2 }; // explicitly specify class template std::pair<int, int> (C++11 onward)
	std::pair p2{ 2,3 }; // // CTAD used to deduce std::pair<int, int> from the initializers (C++17)

	// salah
	std::pair<> p1{ 1, 2 };    // error: too few template arguments, both arguments not deduced
	std::pair<int> p2{ 3, 4 }; // error: too few template arguments, second argument not deduced

	// bisa pake literal suffix
	std::pair p1{ 3.4f, 5.6f }; // deduced to pair<float, float>
	std::pair p2{ 1u, 2u };		// deduced to pair<unsigned int, unsigned int>

	return 0;
}