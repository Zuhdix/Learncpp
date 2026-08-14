// Procedural Programming
#include <iostream>
#include <string_view>

enum AnimalType
{
	cat,
	dog,
	chicken,
	snake,
};

constexpr std::string_view animalName(AnimalType type)
{
	switch (type)
	{
	case cat:	return "cat";
	case dog:	return "dog";
	case chicken:	return "chicken";
	case snake:	return "snake";
	default:	return "???";
	}
}

constexpr int numLegs(AnimalType type)
{
	switch (type)
	{
	case cat:	return 4;
	case dog:	return 4;
	case chicken: return 2;
	case snake:	return 0;
	default:	return 0;
	}
}

int main()
{
	constexpr AnimalType animalCat{ cat };
	std::cout << "A " << animalName(animalCat) << " has " << numLegs(animalCat) << " legs\n";

	constexpr AnimalType animalSnake{ snake };
	std::cout << "A " << animalName(animalSnake) << " has " << numLegs(animalSnake) << " legs\n";

	return 0;
}