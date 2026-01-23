#include <iostream>

int main()
{
	std::cout << "iterasi while .... \n";
	int i{ 0 }; // while harus di inisialisasi

	while (i < 20)
	{
		std::cout << i << '\n'; // statement
		i += 2; // iterasi
	}
	std::cout << "while berakhir disini.\n\n";

	std::cout << "sekarang do dan while \n\n";
	int x{ 1 }; // inisialisasi
	do
	{
		std::cout << x << '\n'; // statement yang pasti di eksekusi 1 kali
		x += 2;					// iterasi
	} while (x <= 10);
		std::cout << '\n';

	return 0;

}
