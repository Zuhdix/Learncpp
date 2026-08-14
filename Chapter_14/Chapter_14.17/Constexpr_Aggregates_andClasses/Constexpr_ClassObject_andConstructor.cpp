#include <iostream>

class Pair // Pair is no longer an aggregate
{
private:
	int m_x{};
	int m_y{};

public:
	constexpr Pair(int x, int y) : m_x{ x }, m_y{ y } {} // dikasih constexpr

	constexpr int greater() const
	{
		return (m_x > m_y ? m_x : m_y);
	}
};

constexpr int init()
{
	Pair p{ 5, 6 };    // requires constructor to be constexpr when evaluated at compile-time
	return p.greater(); // requires greater() to be constexpr when evaluated at compile-time
}

int main()
{
	constexpr Pair p{ 5,6 }; // compile error: p is not a literal type

	std::cout << p.greater();

	constexpr int g{ p.greater() };
	std::cout << g << '\n';

	constexpr int z{ init() }; // init() evaluated in compile-time context
	std::cout << z << '\n';

	return 0;
}