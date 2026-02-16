#include <iostream>

int main()
{
	/*constexpr bool inBigClassroom{ false };
	constexpr int classSize{ inBigClassroom ? 30 : 20 };

	std::cout << "The class size is: " << classSize << '\n';*/

	/*int x{ 2 };
	std::cout << ((x < 0) ? "negative" : "non-negative");*/

	int x{ 5 };
	std::cout << ((x != 5) ? "true" : "false");

	return 0;
}