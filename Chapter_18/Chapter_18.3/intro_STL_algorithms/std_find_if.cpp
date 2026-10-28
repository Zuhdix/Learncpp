#include <algorithm>
#include <array>
#include <iostream>
#include <string_view>

// return true klo elemennya sama
bool containsNut(std::string_view str)
{
	// std::string_view return string_view::npos klo gak ketemu
	// the substring, Otherwise it returns the index where the substring occurs
	// in str.
	return str.find("nut") != std::string_view::npos;
}

int main()
{
	std::array<std::string_view, 4> arr{ "apple", "banana", "walnut", "lemon" };

	// Scan our array to see if any elements contain the "nut" substring
	auto found{ std::find_if(arr.begin(), arr.end(), containsNut)};

	if (found == arr.end())
	{
		std::cout << "NO nuts\n";
	}
	else
	{
		std::cout << "Found " << *found << '\n';
	}

	return 0;
}