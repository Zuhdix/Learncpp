#include <iostream>
#include <random> // for std::mt19937 dan std::random_device

int main()
{
	// random_device dapet angka dari os
	std::mt19937 mt{ std::random_device{}() };

	// angka antara 1 sampe 6
	std::uniform_int_distribution die6{ 1, 6 };

	for (int count{ 1 }; count <= 40; ++count)
	{
		std::cout << die6(mt) << '\t'; // generatenya disini

		// jika sudah 10 angka, buat baris baru
		if (count % 10 == 0)
			std::cout << '\n';
	}
	// std::random_device paling direkomendasikan (kecuali implementasinya tidak tepat)
	// std::random_device bagus buat seed jangan jadi PRNG (karena implementasinya)
	return 0;
}

// jangan re seeding karena kemungkinan bakal rusak acakannya.

// contoh buruk 

//#include <iostream>
//#include <random>
//
//int getCard()
//{
//	std::mt19937 mt{ std::random_device{}() }; // this gets created and seeded every time the function is called
//	std::uniform_int_distribution card{ 1, 52 };
//	return card(mt);
//}
//
//int main()
//{
//	std::cout << getCard() << '\n';
//
//	return 0;
//}