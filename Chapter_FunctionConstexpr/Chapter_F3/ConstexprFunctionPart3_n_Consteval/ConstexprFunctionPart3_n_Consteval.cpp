#include <iostream>

consteval int greater(int x, int y) // fungsi sekarang consteval (pasti dievaluasi compile-time)
{
	return (x > y ? x : y);
}

int main()
{
	constexpr int g{ greater(5,6) }; // compile-time
	std::cout << g << '\n';

	std::cout << greater(7, 8) << "is greater\n"; // compile-time

	int x{9};
	std::cout << greater(x, 6) << " is greater\n"; // gagal, fungsi consteval harus di evaluasi saat compile-tiem

	return 0;
}