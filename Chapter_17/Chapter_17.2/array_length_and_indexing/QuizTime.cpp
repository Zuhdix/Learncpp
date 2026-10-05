#include <iostream>
#include <array>

int main()
{
	constexpr std::array arr{ 'h','e','l','l','o' };

	
	std::cout << "The length: " << std::ssize(arr) << '\n';
	std::cout << arr[1];
	std::cout << arr.at(1);
	std::cout << std::get<1>(arr);

	return 0;
}