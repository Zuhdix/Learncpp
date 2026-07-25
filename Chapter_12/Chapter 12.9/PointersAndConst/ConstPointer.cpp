#include <iostream>

int main()
{
	int x{ 5 };
	//int y{ 8 };
	int* const ptr{ &x }; // const after the asterisk means this is a const pointer

	std::cout << *ptr << " x awal \n";
	// ptr = &y; // error: sekali inisialisasi, pointer const gak bisa diubah.

	*ptr = 6; // bisa, karena x (yang di pointing) non-const

	std::cout << *ptr << " x diubah\n";

	return 0;
}