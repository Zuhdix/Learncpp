#include <iostream>

template <typename T>
struct Pair
{
	T first{};
	T second{};
};

template <typename T>
constexpr T max(Pair<T> p)
{
	return (p.first < p.second ? p.second : p.first);
}

int main()
{
	Pair<int> p1{ 5,7 };
	std::cout << max<int>(p1) << " is larger\n"; // explicit call to max<int>

	Pair<double> p2{ 5.1, 9.9 };
	std::cout << max(p2) << "is larger\n diatas deduction\n"; // call to max<double> using template argument deduction (prefer this)

	std::cout << max<double>(p2) << " is larger\n"; // explicit way
	return 0;
}