#include <vector>
#include <iostream>

int main()
{
	std::cout << "Enter the number of test scores: ";
	std::size_t length{};
	std::cin >> length;
	std::cout << '\n';

	std::vector<int> scores(length);

	for (std::size_t i{ 0 }; i < length; ++i)
	{
		std::cout << "Enter score " << i << ": ";
		std::cin >> scores[i];
	}

	return 0;
}