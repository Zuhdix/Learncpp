#include <iostream>

class Fruit
{
public:
	// FruitType dipindah ke public dan jadi enum doang (harus di definisikan dulu paling atas)
	enum Type // klo scope jadi susah (Fruit::Type::apple) ribet, makannya enum ini unscoped
	{
		apple,
		banana,
		cherry
	};

private:
	Type m_type{};
	int m_precentageEaten{ 0 };

public:
	Fruit(Type type)
		: m_type{ type }
	{
	}

	Type getType() { return m_type; }
	int getPercentageEaten() { return m_precentageEaten; }

	bool isCherry() { return m_type == cherry; } // Inside members of Fruit, we no longer need to prefix enumerators with FruitType::
};

int main()
{
	// Note: Outside the class, we acces the enumerators via the Fruit:: prefix now
	Fruit apple{ Fruit::apple };

	if (apple.getType() == Fruit::apple)
		std::cout << "I am an apple";
	else
		std::cout << "I am not an apple";

	return 0;
}