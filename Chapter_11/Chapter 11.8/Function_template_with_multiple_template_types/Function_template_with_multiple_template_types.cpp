#include <iostream>

template<typename T>
T max(T x, T y)
{
	return (x < y) ? y : x;
}

// cara ketiga
double max(double x, double y)
{
	return (x < y) ? y : x;
}
int main()
{
	// std::cout << max(2, 3.5); // error
	std::cout << max(static_cast<double>(2), 3.5); // cara pertama
	std::cout << max<double>(9, 3.9); // cara kedua

	return 0;
}

// C++ 20
auto max(auto x, auto y)
{
	return (x < y) ? y : x;
}

// SAMA DENGAN
template <typename T, typename U>
auto max(T x, U y)
{
	return (x < y) ? y : x;
}

// TAPI GAK BISA JADI INI, karena sifatnya yang auto
template <typename T>
T max(T x, T y) // two parameters of the same type
{
	return (x < y) ? y : x;
}