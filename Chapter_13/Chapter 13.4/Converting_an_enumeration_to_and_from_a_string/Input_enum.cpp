#include <iostream>
#include <string_view>

enum Pet
{
	cat, // 0
	dog,
	pig,
	whale, // 3
};

constexpr std::string_view getPetName(Pet pet)
{
	switch (pet)
	{
	case cat:	return "cat";
	case dog:	return "dog";
	case pig:	return "pig";
	case whale:	return "whale";
	default:	return "???";
	}
}

int main()
{
	//Pet pet{ pig };
	//std::cin >> pet; // compile error: std::cin doesn't know hot to input a Pet

	std::cout << "Enter a pet (0=cat, 1=dog, 2=pig, 3=whale): ";
	int input{};
	std::cin >> input; // input an integer

	if (input < 0 || input > 3)
		std::cout << "You entered an invalid pet\n";
	else
	{
		Pet pet{ static_cast<Pet>(input) }; // static_cast our integer to a Pet
		std::cout << "You entered: " << getPetName(pet) << '\n';
	}

	return 0;
}
