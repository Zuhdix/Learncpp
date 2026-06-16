#include <iostream>

// tipe sama
template <typename T>
auto add(T x, T y)
{
	return x + y;
}

// dua nilai yang tidak sama, bisa juga pake auto C++20 (auto x, auto y)
template <typename T, typename U>
auto add(T x, U y)
{
	return x + y;
}

// bisa pake auto juga (auto x, auto y, auto z)
template <typename T, typename U, typename V>
auto add(T x, U y, V z)
{
	return x + y + z;
}

int main()
{
	std::cout << add(1.2, 3.6) << '\n'; // instantates and calls add<double>() > karena spesialisasi lebih diutamakan.
	std::cout << add(1.2, 7) << '\n';	// instantates and calls add<double, int>()
	std::cout << add(5, 4, 7) << '\n';	// instantates and calls add<int, int, int>()

	return 0;
}