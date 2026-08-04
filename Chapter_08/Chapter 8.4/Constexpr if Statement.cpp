#include <iostream>

int main()
{
	constexpr double gravity{ 9.8 };

	if constexpr (gravity == 9.8) {
		std::cout << "Gravity is normal.\n";
	}
	else
	{
		std::cout << "We are not on Earth.\n";
	}

	// seolah olah seperti ini

	/*
		int main()
	{
	constexpr double gravity{ 9.8 };

	std::cout << "Gravity is normal.\n";

	return 0;
	}
	
	*/

	return 0;
}