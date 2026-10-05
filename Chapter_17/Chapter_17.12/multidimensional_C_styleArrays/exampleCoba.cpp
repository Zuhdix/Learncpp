#include <iostream>

int main()
{
	int arr[][6]{
		{2, 3, 5, 7, 11, 13 },
		{17, 19, 23, 29, 31},
		{37, 41, 43, 47, 53},
		{1, 2, 3, 4, 5, 6},
		{7, 8, 9, 10, 11, 12}
	};

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