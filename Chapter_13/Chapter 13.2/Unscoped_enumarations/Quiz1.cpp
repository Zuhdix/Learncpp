#include <iostream>

namespace Monster
{
	enum MonsterType
	{
		orc, goblin, troll, oger, skeleton,
	};
}

int main()
{
	Monster::MonsterType skullIsland{Monster::troll };

	std::cout << skullIsland;

	return 0;
}