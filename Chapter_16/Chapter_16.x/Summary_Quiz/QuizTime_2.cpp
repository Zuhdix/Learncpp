#include <iostream>
#include <vector>
#include <cassert>
#include <string_view>

namespace Items
{
	enum Types : unsigned int
	{
		health_potion,
		torch,
		arrow,
		max_items,
	};
}

int countTotalItems(const std::vector<int>& inventory)
{
	int sum{ 0 };
	for (auto e : inventory)
		sum += e;
	return sum;
}

using sv = std::string_view;
void printInventory(const std::vector<int>& inventory, const std::vector<sv>& nameSingular, const std::vector<sv>& namePlural)
{
	for (std::size_t i{ 0 }; i < inventory.size(); ++i)
	{
		if (inventory[i] > 1)
		{
			std::cout << "You have " << inventory[i] << ' ' << namePlural[i] << "\n";
		}
		else {
			std::cout << "You have " << inventory[i] << ' ' << nameSingular[i] << "\n";
		}
	}
}

int main()
{
	std::vector<int> inventory{1, 5, 10};
	std::vector<std::string_view> nameSingular{ "health potion", "torch", "arrow" };
	std::vector<std::string_view> namePlural{ "health potions", "torches", "arrows" };

	assert(std::size(inventory) == Items::max_items && "Total harus sama");

	printInventory(inventory,nameSingular, namePlural);
	std::cout << "You have " << countTotalItems(inventory) << " total items\n";


	return 0;
}