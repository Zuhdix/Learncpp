#include <iostream>

struct Pair
{
	int first{};
	int second{};
};

//struct Pair // compile error: erroneous redefinition of Pair
//{
//	double first{};
//	double second{};
//};

constexpr int max(Pair p) // pass by value because Pair is small
{
	return (p.first < p.second ? p.second : p.first);
}

//constexpr double max(Pair p) // compile error: overloaded function differs only by return type
//{
//	return (p.first < p.second ? p.second : p.first);
//}

int main()
{
	Pair p1{ 5,6 };
	std::cout << max(p1) << " is larger\n";

	return 0;
}