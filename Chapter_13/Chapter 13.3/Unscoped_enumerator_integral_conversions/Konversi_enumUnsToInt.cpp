#include <iostream>

enum Pet // no specified base
{
	cat, // 0
	dog, // 1
	pig, // 2
	whale, // 3
};

int main()
{
	//Pet pet{ 2 }; //compile error: gak bisa implicit ke Pet
	//pet = 3; // compile error

	// caranya pake static_cast

	Pet pet{ static_cast<Pet>(2) }; // convert int 2 to a Pet
	std::cout << pet << '\n';

	pet = static_cast<Pet>(3); // pig evolved into a whale
	std::cout << pet << '\n';

	pet = static_cast<Pet>(999999999999999999); // UB (int gak muat kebanyakan gituu)
	std::cout << pet << '\n';

	return 0;
}