//#include <iostream>
//
//int main()
//{
//	int apples{ 5 }; // blok luar
//
//	{
//		std::cout << apples << '\n'; // mencetak blok luar
//
//		int apples{ 0 }; // blok nested
//
//		apples = 10; // ini merujuk ke blok nested
//
//		std::cout << apples << '\n'; // ini merujuk ke blok dalam
//	} // apples nested di hancurkan
//
//	std::cout << apples << '\n'; // merujuk ke blok luar
//	/* jika apples nested tidak di definisikan nilai 10 nya akan ke outer block bahkan
//	  -jika keluar nested berlaku ke variable global */
//
//	return 0;
//}

