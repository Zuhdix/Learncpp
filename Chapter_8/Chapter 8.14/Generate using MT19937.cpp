#include <iostream>
#include <random> // for std::mt19937

int main()
{
	std::mt19937 mt{}; // menginstansiasi 32 bit mt

	for (int count{ 1 }; count <= 40; ++count)
	{
		std::cout << mt() << '\t'; // membuat angka acak

		// jika sudah print 5 angka, buat barisan baru
		if (count % 5 == 0)
			std::cout << '\n';
	}

	return 0;
}