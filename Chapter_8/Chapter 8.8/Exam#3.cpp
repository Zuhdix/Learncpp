//#include <iostream>
//
//int main()
//{
//	int outer{ 5 };
//	while (outer > 0) // true, body akan di eksekusi
//	{
//		int inner{outer}; // cek nilai, inner di inisialisasi dengan outer {5}
//			while (inner >= 1) // karena nilai inner 5, body nya di eksekusi
//			{
//				std::cout << inner << ' '; // ini cetak nya 5 4 3 2 1 kan? disini gw bingung
//				--inner;		// ini decrement nilai, iterasi selanjutnya 4
//			}
//
//		std::cout << '\n'; // baris baru
//		--outer; // outer 5, berkurang jadi 4 di iterasi selanjutnya
//	}
//	return 0;
//}