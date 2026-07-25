#include <iostream>

void checkAddresses(int val,const int& ref)
{
	std::cout << "Alamat val (copy): " << &val << '\n';
	std::cout << "Alamat ref: " << &ref << '\n';
}


int main()
{
	const int x{ 5 };
	std::cout << "Alamat x: " << &x << '\n';

	checkAddresses(x, 5);

	// kode lengkap di notion 12.5 dan 12.6
	return 0;
}