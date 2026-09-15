#include <iostream>
#include <vector>

int main()
{
	std::vector prime{ 2,3,5,7,11 };

	std::cout << prime[3] << '\n'; // okay: 3 converted from int to std::size_t, not a narrowing conversion

	constexpr int index{ 3 }; // constexpr
	std::cout << prime[index] << '\n'; // ok: constexpr index implicitly converted to std::size_t, not a narrowing conversion

	// non constexpr
	std::size_t indexSt{ 4 };
	std::cout << prime[indexSt] << '\n'; // operator[] expects an index of type std::size_t, no conversion required

	int indexSt{ 5 }; // non-constexpr + int
	std::cout << prime[indexSt] << '\n'; // possible warn: index implicitly converted to std::size_t, narrowing

	// alternatif index dari data()
	int index{ 3 };                          // non-constexpr signed value
	std::cout << prime.data()[index] << '\n'; // okay: no sign conversion warnings

	return 0;
}