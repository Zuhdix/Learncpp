#include <array>
#include <iostream>

int main()
{
	constexpr std::array<int, 5> prime{ 2,3,5,7,11 };

	std::cout << prime[3]; // print index 3

	std::cout << prime[9]; // invalid index (UB)


	return 0;
}