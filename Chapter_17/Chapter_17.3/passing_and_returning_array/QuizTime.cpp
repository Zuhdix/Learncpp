#include <array>
#include <iostream>

template <typename T, auto N>
void printArray(const std::array<T, N>& arr)
{
	static_assert(N != 0);

	std::cout << "The array (";
	for (std::size_t i{ 0 }; i < N; ++i)
	{
		std::cout << arr[i];
		if (i + 1 < arr.size())
		{
			std::cout << ", ";
		}
	}

	std::cout << ") has length " << std::ssize(arr) << '\n';
}

int main()
{
	constexpr std::array arr1{ 1, 4, 9, 16 };
	printArray(arr1);

	constexpr std::array arr2{ 'h', 'e', 'l', 'l', 'o' };
	printArray(arr2);

	return 0;
}