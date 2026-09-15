#include <iostream>
#include <vector>
#include <utility>
#include <cassert>

template <typename T>
std::pair<std::size_t, std::size_t> findMinMax(const std::vector<T>& arr)
{
	assert(!arr.empty() && "findMinMax: array cannot be empty");
	std::size_t minIndex{ 0 };
	std::size_t maxIndex{ 0 };

	for (std::size_t i{ 0 }; i < arr.size(); ++i)
	{
		if(arr[i] < arr[minIndex])
		{
			minIndex = i;
		}
		if (arr[i] > arr[maxIndex])
		{
			maxIndex = i;
		}
	}

	return { minIndex, maxIndex };
}

template <typename T>
void printVector(const std::vector<T>& arr)
{
	std::cout << "With array ( ";
	for (std::size_t i{ 1 }; i < arr.size(); ++i)
	{
		std::cout << arr[i];
		if (i + 1 < arr.size())
		{
			std::cout << ", ";
		}

	}
	std::cout << "):\n";
}

int main()
{
	std::vector v1{ 3, 8, 2, 5, 7, 8, 3 };

	auto [minIdx, maxIdx] = findMinMax(v1);
	printVector(v1);
	std::cout << "The min element has index " << minIdx << " and value " << v1[minIdx] << "\n";
	std::cout << "The max element has index " << maxIdx << " and value " <<  v1[maxIdx] << "\n";
	std::cout << '\n';

	std::vector v2{ 5.5, 2.7, 3.3, 7.6, 1.2, 8.8, 6.6 };
	printVector(v2);

	auto m2{ findMinMax(v2) };
	std::cout << "The min element has index " << m2.first << " and value " << v2[m2.first] << '\n';
	std::cout << "The max element has index " << m2.second << " adn value " << v2[m2.second] << '\n';

	return 0;
}