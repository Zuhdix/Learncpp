#include <iostream>

class Foo
{
private:
	int m_x{};
	int m_y{};

public:
	Foo() // default constructor
	{
		std::cout << "Foo constructed\n";
	}

	Foo(int x, int y) // jika Foo(int x=1, int y=2) yang mana itu default, maka f1 compile error: ambigu
		: m_x{ x }, m_y{ y }
	{
		std::cout << "Foo(" << m_x << ", " << m_y << ") constructed\n";
	}
};

int main()
{
	Foo f1{}; // Calls Foo() constructor
	Foo f2{ 2,8 }; // Calls Foo(int, int) constructor

	return 0;
}