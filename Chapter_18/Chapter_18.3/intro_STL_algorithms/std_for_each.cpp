#include <algorithm>
#include <array>
#include <iostream>

void doubleNumber(int& i)
{
	i *= 2;
}

int main()
{
	std::array arr{ 1, 2, 3, 4 };

	std::for_each(arr.begin(), arr.end(), doubleNumber); // Before C++20
	std::ranges::for_each(arr, doubleNumber); // C++20

	for (int i : arr)
	{
		std::cout << i << ' ';
	}

	std::cout << '\n';

	return 0;
}