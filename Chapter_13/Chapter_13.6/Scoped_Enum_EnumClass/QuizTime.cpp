#include <iostream>
#include <string_view>

enum class Animals
{
	pig,
	chicken,
	goat,
	cat,
	dog,
	duck,
};

constexpr std::string_view getAnimalName(Animals a)
{
	using enum Animals; // bring all Animals enumerators into current scope (C++20)
	switch (a)
	{
	case pig:		return "pig";
	case chicken:	return "chicken";
	case goat:		return "goat";
	case cat:		return "cat";
	case dog:		return "dog";
	case duck:		return "duck";
	default:		return "???";
	}
}

constexpr std::string_view printNumberofLegs(Animals a)
{
	using enum Animals;
	switch (a)
	{
	case pig:	return "4 legs";
	case goat:	return "4 legs";
	case cat:	return "4 legs";
	case dog:	return "4 legs";
	case chicken: return "2 legs";
	case duck:	return "2 legs";
	default:	return "???";
	}
}

int main()
{
	
	using enum Animals;
	std::cout << "A " << getAnimalName(cat) << " has " << printNumberofLegs(cat);

	return 0;
}