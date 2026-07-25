#include <iostream>

void increment(int& x) { ++x; }
void print(int& x) { std::cout << x << '\n'; }

int main()
{
	int a{ 3 };
	[[maybe_unused]]const int b{ 7 };

	increment(a);
	std::cout << a << '\n'; // 4

	increment(b);	// error, argumen harus modifable
	print(5);		// error karena rvalue

	int c{ a };
	increment(c);

	std::cout << a << '\n'; // masih 4
	std::cout << c << '\n'; // buat ref baru ke c itu sendiri
}