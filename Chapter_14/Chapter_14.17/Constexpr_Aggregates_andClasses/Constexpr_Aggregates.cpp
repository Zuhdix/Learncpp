#include <iostream>

struct Pair
{
	int m_x{};
	int m_y{};

	constexpr int greater() const // can evaluate at compile-time or runtime
	{
		return (m_x > m_y ? m_x : m_y);
	}
};

int main()
{
	constexpr Pair p{ 5,6 }; // now constexpr
	std::cout << p.greater() << '\n'; // okay: p.greater() evaluates at runtime or compile time

	constexpr int g{ p.greater() }; // compile erro: p not constexpr (tadinya)
	std::cout << g << '\n'; // p.greater() must evaluate at compile-time

	return 0;
}