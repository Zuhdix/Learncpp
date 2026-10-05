#include <array>
#include <iostream>

int main()
{
	constexpr std::array<double, 365> maxTemperature{};

	constexpr std::array say{ 'h', 'e', 'l', 'l','o' };

	std::cout << say[1];

	return 0;
}