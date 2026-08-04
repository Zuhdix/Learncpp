#include <utility> // for std::pair

struct Foo
{
	std::pair <int, int> p1{ 1,2 }; // ok, template arguments explicitly specified
	std::pair p2{ 1,2 }; // compile error, CTAD can't be used in this context
};

int main()
{
	std::pair p3{ 1,2 }; // ok, CTAD can be used here
	return 0;
}

// error
#include <iostream>
#include <utility>

void print(std::pair p) // compile error, CTAD can't be used here
{
	std::cout << p.first << ' ' << p.second << '\n';
}

int main()
{
	std::pair p{ 1, 2 }; // p deduced to std::pair<int, int>
	print(p);

	return 0;
}

// cara lain
#include <iostream>
#include <utility>

template <typename T, typename U>
void print(std::pair<T, U> p)
{
	std::cout << p.first << ' ' << p.second << '\n';
}

int main()
{
	std::pair p{ 1, 2 }; // p deduced to std::pair<int, int>
	print(p);

	return 0;
}