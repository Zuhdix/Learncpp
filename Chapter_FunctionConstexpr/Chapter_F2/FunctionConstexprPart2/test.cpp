#include <iostream>

int helper(int x)
{
	return x + 1;
}

// template<int N>
constexpr int process(int n)
{
	constexpr int doubled{ n * 2 }; // n bukan constexpr param jadi ini error
	return helper(doubled); // tetep gak bisa karena helper non constexpr function
}

int main()
{
	int a{ 3 };
	constexpr int r1{ process(a) }; // error, a variabel non-constexpr
	int r2{ process(5) };

	return 0;
}