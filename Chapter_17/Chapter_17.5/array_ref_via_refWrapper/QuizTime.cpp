#include <array>
#include <functional>
#include <iostream>

int main()
{
	int a{ 1 };
	int b{ 2 };
	int c{ 3 };

	std::array <std::reference_wrapper<int>, 3> arr{ a, b, c };

	arr[1].get() = 20;

	std::cout << a << ' ' << b << ' ' << c << '\n';

	return 0;
}