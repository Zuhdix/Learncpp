#include <iostream>
#include <vector>

int main()
{
	std::vector prime{ 2,3,5,7,11 };
	std::cout << "length: " << prime.size() << '\n'; // returns length as type 'size_type' (alias for 'std::size_t')

	std::cout << "length: " << std::size(prime); // c++17, returns length as type

	// karena unsigned jadi harus konversi ekplisit
	int length{ static_cast<int>(prime.size()) }; // static_cast return value to int
	std::cout << "length: " << length;

	return 0;
}