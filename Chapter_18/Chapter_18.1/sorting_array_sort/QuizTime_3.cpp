#include <iostream>
#include <algorithm>
#include <utility>

int main()
{
	int arr[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	constexpr int length{ static_cast<int>(std::size(arr)) };

	for (int startIndex{ 0 }; startIndex < length - 1; ++startIndex)
	{
		for (int index{ 0}; index < length - 1; ++index)
		{
			if (arr[index] > arr[index + 1])
			{
				std::swap(arr[index], arr[index + 1]);
			}
		}
	}

	for (int index{ 0 }; index < length; ++index)
	{
		std::cout << arr[index] << ' ';
	} std::cout << '\n';

	return 0;
}