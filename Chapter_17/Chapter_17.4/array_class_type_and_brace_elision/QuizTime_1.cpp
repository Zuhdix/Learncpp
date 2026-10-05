#include <array>
#include <iostream>
#include <string_view>

struct Item
{
	std::string_view name{};
	int gold{};
};

int main()
{
	constexpr std::array<Item, 4> items{
		{
			{"sword", 5},
			{"dagger", 3},
			{"club", 2},
			{"spear", 7},
		}
	};

	for (const auto& i : items)
	{
		std::cout << "A " << i.name << " costs " << i.gold << " gold.\n";
	}

	return 0;
}