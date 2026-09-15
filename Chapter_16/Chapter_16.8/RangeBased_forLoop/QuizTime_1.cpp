#include <iostream>
#include <string>
#include <string_view>
#include <vector>

int main()
{
	std::vector<std::string_view> names{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
	
	std::cout << "Enter a name: ";
	std::string input{};
	std::cin >> input;

	bool found{ false };

	for (auto name : names)
	{
		if (input == name)
		{
			found = true;
			break;
		}
		
	}

	if (found)
		std::cout << input << " was found.\n";
	else
		std::cout << input << " was not found.\n";

	return 0;
}