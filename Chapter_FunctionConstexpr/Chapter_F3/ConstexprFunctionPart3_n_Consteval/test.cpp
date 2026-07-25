#include <iostream>

consteval int triple(int x) { return x * 3; }
constexpr int doubled(int x) { return x * 2; }

int main()
{
	constexpr int a{ 4 };
	int b{ 4 };

	std::cout << triple(a) << '\n'; // 12 compile-time
	std::cout << triple(3) << '\n'; // 9 compile-time
	std::cout << triple(b) << '\n'; // compiler error
	std::cout << doubled(a) << '\n'; // 8 compile-time
	std::cout << doubled(b) << '\n'; // 8 bisa karena constexpr punya as if rule
	std::cout << triple(doubled(a)) << '\n'; // 24 compile time bisa ini pembungkusan doang sih

	return 0;
}