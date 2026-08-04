#include <iostream>

template<typename T>
struct Pair
{
	T first{};
	T second{};
};

template<typename T>
void funcTemp(Pair<T> p)
{
	std::cout << '[' << p.first << ", " << p.second << ']';
}

void func(Pair<int> p)
{
	std::cout << '[' << p.first << ", " << p.second << ']';
}

int main()
{
	Pair<double> p1{ 2.3, 9.9 };
	func(p1); // gak bisa terjadi narrowing.

	return 0;
}