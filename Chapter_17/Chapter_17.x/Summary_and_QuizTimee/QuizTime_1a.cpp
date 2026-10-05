#include <array>
#include <iostream>

int main()
{
	std::array arr{ 0, 1, 2, 3 };
	
	for (std::size_t count{ 0 }; count < std::size(arr); ++count) // off by-one, fix jadi < donag
	{
		std::cout << arr[count] << ' ';
	}

	std::cout << '\n';

	return 0;
}