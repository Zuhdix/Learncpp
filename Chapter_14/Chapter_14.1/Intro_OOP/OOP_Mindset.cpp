#include <iostream>
#include <string_view>

struct Cat
{
	std::string_view name{ "cat" };
	int numLegs{ 4 };
};

struct Dog
{
	std::string_view name{ "dog" };
	int numLegs{ 4 };
};

struct Chicken
{
	std::string_view name{ "chicken" };
	int numLegs{ 2 };
};

struct Snake
{
	std::string_view name{ "snake" };
	int numLegs{ 0 };
};

int main()
{
	constexpr Cat animalCat{};
	std::cout << "a " << animalCat.name << "has " << animalCat.numLegs << " legs\n";

	constexpr Snake animalSnake{};
	std::cout << "a " << animalSnake.name << " has " << animalSnake.numLegs << " legs\n";
	return 0;
}