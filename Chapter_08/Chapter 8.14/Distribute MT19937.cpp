#include <iostream>
#include <random> // for std::mt19937

int main()
{
	std::mt19937 mt{}; // menginstantiasi 32 bit mt

	// reusable random generator antara 1 sampe 6
	std::uniform_int_distribution die6{ 1, 6 };

	for (int count{ 1 }; count <= 40; ++count)
	{
		std::cout << die6(mt) << '\t'; // membuat die6 disini

		// jika sudah print 10 angka, buat barisan baru
		if (count % 10 == 0)
			std::cout << '\n';
	}

	return 0;
}