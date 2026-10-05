#include <iostream>

int main()
{
	int arr[3][4]{ // 3 baris 4 kolom
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12} };

	// doulbe for-loop with indices
	for (std::size_t row{ 0 }; row < std::size(arr); ++row)
	{
		for (std::size_t col{ 0 }; col < std::size(arr[0]); ++col)
		{
			std::cout << arr[row][col] << ' ';
		}
		std::cout << '\n';
	}

	// double ranged-based for
	for (const auto& arow : arr) // get each array row (baris)
	{
		for (const auto& e : arow) // get each element of the row
			std::cout << e << ' ';

		std::cout << '\n';
	}

	return 0;
}