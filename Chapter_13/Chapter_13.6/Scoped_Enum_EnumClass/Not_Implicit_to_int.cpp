//#include <iostream>
//
//int main()
//{
//	enum class Color
//	{
//		red,
//		blue,
//	};
//
//	Color shirt{ Color::red };
//
//	if (shirt == Color::red) // bisa compare ke scope sendiri
//		std::cout << "The shirt is red!\n";
//	else if (shirt == Color::blue)
//		std::cout << "The shirt is blue!\n";
//
//	return 0;
//}

//// cara ubah ke integral
//#include <iostream>
//#include <utility> // for std::to_underlying() C++23
//
//int main()
//{
//	enum class Color
//	{
//		red,
//		blue
//	};
//
//	Color color{ Color::blue };
//
//	// std::cout << color << '\n'; // gak bisa (gak implisit ke int)
//	std::cout << static_cast<int>(color) << '\n'; // explicit ke int
//	std::cout << std::to_underlying(color) << '\n';
//
//	return 0;
//}

// bisa masukkan int pake static_cast
#include <iostream>

int main()
{
	enum class Pet
	{
		cat,	// assigned 0
		dog,	// assigned 1
		pig,	// assigned 2
		whale,	// assigned 3
	};
	
	std::cout << "Enter a pet (0=cat, 1=dog, 2=pig, 3=whale): ";

	int input{};
	std::cin >> input; // input int

	Pet pet{ static_cast<Pet>(input) }; // static_cast our integer to a Pet
	Pet pet{ 2 }; // C++17 dan tanpa basis seperti unscoped enum
	return 0;
}