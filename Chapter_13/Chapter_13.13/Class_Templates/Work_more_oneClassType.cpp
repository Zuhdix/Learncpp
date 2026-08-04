#include <iostream>

template <typename T, typename U>
struct Pair
{
	T first{};
	U second{};
};

struct Point
{
	int first{};
	int second{};
};

template <typename T>
void print(T p) // type template param will match anything
{
	std::cout << '[' << p.first << ", " << p.second << ']'; // will only compile if type has first and second members
}

int main()
{
	Pair<double, int> p1{ 4.9, 22 };
	print(p1); // matches print(Pair<double, int>)

	std::cout << '\n';

	Point p2{ 9, 4 };
	print(p2); // matches print(Point)

	std::cout << '\n';

	return 0;
}

// Cara lain tapi tidak aman dan tidak readable
template <typename T, typename U>
struct Pair // defines a class type named Pair
{
	T first{};
	U second{};
};

template <typename Pair> // defines a type template parameter named Pair (shadows Pair class type)
void print(Pair p)       // this refers to template parameter Pair, not class type Pair
{
	std::cout << '[' << p.first << ", " << p.second << ']';
}