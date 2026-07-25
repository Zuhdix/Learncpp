#include <iostream>

void printVal(double d)
{
	std::cout << d << '\n';
}

void printRef(const double& d)
{
	std::cout << d << '\n';
}

int main()
{
	printVal(5); // 5 converted to temporary double, copied to param d
	printRef(5); // 5 ------""-------------, bound to param d

	// warn!!! tipe nya harus sama, bisa jadi konversi tak terduga (dan mungkin mahal)

	return 0;
}