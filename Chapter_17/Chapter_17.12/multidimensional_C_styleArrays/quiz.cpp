#include <iostream>

int main()
{
	int arr[3][4]{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12} };

	for (std::size_t col{ 0 }; col < std::size(arr[0]); ++col)
	{
		for (std::size_t row{ 0 }; row < std::size(arr); ++row)
		{
			std::cout << arr[row][col] << ' ';
		}
		std::cout << '\n';
	}

	return 0;
}