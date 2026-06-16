#include <iostream>

void print(int x)
{
	std::cout << "int " << x << '\n'; // promosi (ini yang di cetak)
}

void print(double x)
{
	std::cout << "double " << x << '\n'; // konversi (diabaikan)
}

int main()
{
	short s{ 5 };
	print(s);

	return 0;
}