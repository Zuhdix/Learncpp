#include <iostream>
#include <string>
#include <string_view>
#include <vector>

template <typename T, typename V>
bool isValuInArray(const std::vector<T>& arr, const V& value)
{
	for (const auto& element : arr)
	{
		if (element == value)
		{
			return true;
		}
	}

	return false;
}


int main()
{
	std::vector<std::string_view> names{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };

	std::cout << "Enter a name: ";
	std::string input{};
	std::cin >> input;

	bool found{ isValuInArray(names, input) };

	if (found)
		std::cout << input << " was found.\n";
	else
		std::cout << input << " was not found.\n";

	return 0;
}