#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::vector<std::string> words{ "peter", "juancok", "kalmadi", "sonya" };

	for (const auto& word : words)
		std::cout << word << ' ';

	std::cout << '\n';


	return 0;
}