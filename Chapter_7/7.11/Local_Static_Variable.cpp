//#include <iostream>
///* variable statis memiliki scope blok seperti local
//   tapi hidup lifetime sampai akhir program, variable statis juga bisa
//   const atau constexpr, umum untuk inisialisasi objek yang mahal (rumit)*/
//void incrementAndPrint()
//{
//	// static local variable di inisialisasi hanya saat pertama kali. (prefer s_ prefix)
//	static int s_val{ 1 }; // dengan keyword static, variable local ini jadi statis (tidak otomatis lagi)
//	++s_val;
//	std::cout << s_val << '\n';
//}
//
//int main()
//{
//	incrementAndPrint();
//	incrementAndPrint();
//	incrementAndPrint();
//
//	return 0;
//}