#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::cout << "How many names would you like to enter? ";
	std::size_t length{};
	std::cin >> length;

	std::string* totalNames{ new (std::nothrow) std::string[length] {} };

	if (!totalNames)   // ← cek apakah alokasi gagal
	{
		std::cerr << "Memory allocation failed!\n";
		return 1;      // keluar program
	}

	for (std::size_t i{ 0 }; i < length; ++i)
	{
		std::cout << "Enter name #" << i + 1 << ": ";
		std::cin >> std::ws;
		std::getline(std::cin, totalNames[i]);
	}

	std::sort(totalNames, totalNames + length);
	std::cout << "\n\nHere is your sorted list: \n";
	
	for (std::size_t i{ 0 }; i < length; ++i)
	{
		std::cout << "Name #" << i + 1 << ": " << totalNames[i] << '\n';
	}

	delete[] totalNames;
	totalNames = nullptr;

	return 0;
}