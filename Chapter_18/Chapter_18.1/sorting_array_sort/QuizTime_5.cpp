#include <iostream>
#include <algorithm>
#include <utility>

int main()
{
	int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
	constexpr int length{ static_cast<int>(std::size(array)) };

	for (int outer{ 0 }; outer < length - 1; ++outer)
	{
		bool swapped{ false };
		for (int index{ 0 }; index < length - 1 - outer; ++index)
		{
			if (array[index] > array[index + 1])
			{
				std::swap(array[index], array[index + 1]);
				swapped = true;
			}
		}

		if (!swapped)
		{
			std::cout << "Early termination on iteration " << outer << '\n';
			break;
		}
	}

	for (int index{ 0 }; index < length; ++index)
	{
		std::cout << array[index] << ' ';
	}

	return 0;
}