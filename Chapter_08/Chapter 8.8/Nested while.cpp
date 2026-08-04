//#include <iostream>
//
//void printUpto(int outer)
//{
//	// loop antara 1 dan outer
//	// note: inner akan dibuat dan di hancurkan di akhir blok.
//
//	int inner{ 1 };
//	while (inner <= outer)
//	{
//		std::cout << inner << ' ';
//		++inner;
//	}
//} // inner dihancurkan disini
//
//int main()
//{
//	int outer{ 1 };
//	while (outer <= 5)
//	{
//		// setiap iterasi outer, code di body loop akan di eksekusi 1 kali.
//
//		// fungsi mencentak antara 1 and outer
//		printUpto(outer);
//
//		// print newline tiap row
//		std::cout << '\n';
//		++outer;
//	}
//
//	return 0;
//}