#include <iostream>
#include <array>

// An alias template for a two-dimensional std::array
template <typename T, std::size_t Row, std::size_t Col>
using Array2d = std::array<std::array<T, Col>, Row>;

// klo buat param, template harus di tulis lagi
template <typename T, std::size_t Row, std::size_t Col>
void printArray(const Array2d<T, Row, Col> &arr)
{
	for (const auto& arow : arr) // get each array row
	{
		for (const auto& e : arow) // get each element of the row
			std::cout << e << ' ';

		std::cout << '\n';
	}
}

int main()
{
	// Define 2d array of int with 3 rows and 4 columns
	Array2d<int, 3, 4> arr{ {
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12}} };

	printArray(arr);

	return 0;
}