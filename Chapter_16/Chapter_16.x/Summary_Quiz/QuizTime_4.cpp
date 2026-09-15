#include <iostream>
#include <vector>
#include <utility>
#include <cassert>
#include <limits>

template <typename T>
std::pair<std::size_t, std::size_t> findMinMax(const std::vector<T>& arr)
{
	assert(!arr.empty() && "findMinMax: array cannot be empty");
	std::size_t minIndex{ 0 };
	std::size_t maxIndex{ 0 };

	for (std::size_t i{ 1 }; i < arr.size(); ++i)
	{
		if (arr[i] < arr[minIndex])
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
	for (std::size_t i{ 0 }; i < arr.size(); ++i)
	{
		std::cout << arr[i];
		if (i + 1 < arr.size())
		{
			std::cout << ", ";
		}

	}
	std::cout << "):\n";
}

std::vector<int> getNumber()
{
	constexpr int stopSentinel{ -1 };
	std::cout << "Enter numbers to add (use -1 to stop): ";
	int input{};
	std::vector<int> number{};

	while (std::cin >> input)
	{
		if (input == stopSentinel)
			break;

		if (!std::cin)
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		number.push_back(input);
	}

	return number;
}

int main()
{
	std::vector<int> userData{ getNumber()};

	if (userData.empty())
	{
		std::cout << "Your array must have value!!!\n";
		return 0;
	}

	printVector(userData);

	//auto number{ findMinMax(userData) };
	//std::cout << "The min element has index " << number.first << " and value " << userData[number.first] << '\n';
	//std::cout << "The max element has index " << number.second << " and value " << userData[number.second] << '\n';

	// Structured binding (C++17): jelas & bebas dari kekeliruan first/second
	auto [minIndex, maxIndex] { findMinMax(userData) };
	std::cout << "The min element has index " << minIndex << " and value " << userData[minIndex] << '\n';
	std::cout << "The max element has index " << maxIndex << " and value " << userData[maxIndex] << '\n';

	return 0;
}