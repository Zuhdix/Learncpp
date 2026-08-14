#include <iostream>

class Foo
{
private:
	int m_x{};
	int m_y{};

public:
	Foo(int x, int y)
		:m_x{ x }, m_y{ y } // here's our member initialization list(mil)
	{
		std::cout << "Foo(" << x << ", " << y << ") constructed\n";
	}

	void print() const
	{
		std::cout << "Foo(" << m_x << ", " << m_y << ")\n";
	}
};

int main()
{
	Foo foo{ 6,7 };
	foo.print();

	return 0;
}
// rekomendasi pake gaya yang paling atas
// format yang valid juga
Foo(int x, int y) : m_x{ x }, m_y{ y }
{
}

// second
Foo(int x, int y) :
	m_x{ x },
	m_y{ y }
{
}

// third
Foo(int x, int y)
	: m_x{ x }
	, m_y{ y }
{
}