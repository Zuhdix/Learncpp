#include <array>
#include <functional> // for std::reference_wrapper
#include <iostream>

int main()
{
	int x{ 1 };
	int y{ 2 };
	int z{ 3 };

	std::array<std::reference_wrapper<int>, 3> arr{ x, y, z };

	arr[1].get() = 5; // modify the object in array element 1

	std::cout << arr[1] << y << '\n';

	// Berbagai cara menggunakan wrapper

	int x{ 5 };

	std::reference_wrapper<int> ref1{ x };        // C++11
	auto ref2{ std::reference_wrapper<int>{ x } }; // C++11

	// pake ref dan cref (lebih sering digunakan karena simple)
	int x{ 5 };
	auto ref{ std::ref(x) };   // C++11, deduces to std::reference_wrapper<int>
	auto cref{ std::cref(x) }; // C++11, deduces to std::reference_wrapper<const int>

	// pake CTAD
	std::reference_wrapper ref1{ x };        // C++17
	auto ref2{ std::reference_wrapper{ x } }; // C++17

	return 0;
}