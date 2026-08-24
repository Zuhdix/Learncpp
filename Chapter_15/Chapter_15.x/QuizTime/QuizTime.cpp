#include "Random.h"
#include <iostream>
#include <string>
#include <string_view>

class Monster
{
public:
	enum Type
	{
		dragon,
		goblin,
		ogre,
		orc,
		skeleton,
		troll,
		vampire,
		zombie,
		maxMonsterTypes,
	};

private:
	Type m_type{};
	std::string m_name{};
	std::string m_roar{};
	int m_hitPoints{};

public:
	Monster(Type type, std::string_view name, std::string_view roar, int hitPoints)
		: m_type{ type }, m_name{ name }
		, m_roar{ roar }, m_hitPoints{ hitPoints }
	{
	}

	constexpr std::string_view getTypeString() const
	{
		switch (m_type)
		{
		case dragon:	return "dragon";
		case goblin:	return "goblin";
		case ogre:		return "ogre";
		case orc:		return "orc";
		case skeleton:	return "skeleton";
		case troll:		return "troll";
		case vampire:	return "vampire";
		case zombie:	return "zombie";
		default:		return "???";
		}
	}

	void print() const
	{
		if (m_hitPoints > 0)
			std::cout << m_name << " the " << getTypeString() << " has " << m_hitPoints << " hit points and says " << m_roar << ".\n";
		else
			std::cout << m_name << " the " << getTypeString() << " is dead.\n";
	}

};

namespace MonsterGenerator
{
	std::string_view getName(int name)
	{
		switch (name)
		{
		case 0: return "Hirua";
		case 1:	return "Blaviken";
		case 2: return "Blarg";
		case 3: return "Touma";
		case 4: return "Narto";
		case 5: return "Faar";
		default: return "???";
		}
	}

	std::string_view getRoar(int roar)
	{
		switch (roar)
		{
		case 0: return "HOORR";
		case 1: return "AUUU";
		case 2: return "HAARGH";
		case 3: return "ROAR";
		case 4: return "HOOOOOWLL!";
		case 5: return "GRAAAWRRR";
		default: return "????";
		}
	}

	Monster generate()
	{
		Monster::Type type{ static_cast<Monster::Type>(Random::get(0, Monster::maxMonsterTypes -1 )) };
		std::string_view name{ getName(Random::get(0, 5)) };
		std::string_view roar{ getRoar(Random::get(0, 5)) };
		int hitPoint{ Random::get(1,100) };

		return Monster{ type, name, roar, hitPoint };
	}
}

int main()
{
	//Monster skeleton{ Monster::skeleton, "Bones", "*rattle*", 4 };
	//skeleton.print();

	//Monster vampire{ Monster::vampire, "Nibblez", "*hiss*", 0 };
	//vampire.print();

	Monster m{ MonsterGenerator::generate() };
	m.print();

	return 0;
}