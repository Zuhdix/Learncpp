#include <iostream>

int foo(int n)
{
	return n + 10;
}

template<typename T>
int foo(T n)
{
	return n;
}

int main()
{
	std::cout << foo(1) << '\n'; // #1 OUTPUT 11

	short s{ 2 };
	std::cout << foo(s) << '\n'; // #2 OUTPUT 12 salah (output asli 2) foo<short>(short) manggil template gw lupa teorinya. gw ngintip variable lewat kursor (intelli sense) dan sadar.

	std::cout << foo<int>(4) << '\n'; // #3 OUTPUT 4

	std::cout << foo<int>(s) << '\n'; // #4 OUTPUT 2

	std::cout << foo<>(6) << '\n'; // #5 OUTPUT 6
}