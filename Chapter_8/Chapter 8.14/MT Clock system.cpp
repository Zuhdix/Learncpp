#include <iostream>
#include <random> // for std::mt19937
#include <chrono> // for std::chrono

int main()
{
	// Seed mt pake steady_clock
	//std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::chrono::steady_clock::now().time_since_epoch().count()) };
	// versi high lebih rinci tapi steady juga udah mayan bagus.
	std::mt19937 mt{ static_cast<std::mt19937::result_type>(std::chrono::high_resolution_clock::now().time_since_epoch().count()) };


	// Reusable antara 1 sampe 6
	std::uniform_int_distribution die6{ 1, 6 };

	// Print angka acak
	for (int count{ 1 }; count <= 40; ++count)
	{
		std::cout << die6(mt) << '\t';

		// jika sudah print 10 angka, cetak baris baru
		if (count % 10 == 0)
			std::cout << '\n';
	}
	return 0;
}