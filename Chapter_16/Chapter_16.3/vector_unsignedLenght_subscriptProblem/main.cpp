#include <iostream>

void foo(unsigned int)
{
}

int main()
{
	constexpr int s{ 5 };

	[[maybe_unused]] unsigned int u{ s }; // compile error: list init disallows narrowing conversion

	foo(s); // possible warning: copy init allows narrowing conversion

	return 0;
}