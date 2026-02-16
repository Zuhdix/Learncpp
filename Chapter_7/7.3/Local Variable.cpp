//#include <iostream>
//// beda bahasa tujuannya sama semua
//
//int max(int x, int y) // x dan y masuk scope
//{
//
//	// int foo{}; ini variable fungsi
//
//	int max{ (x > y) ? x : y }; // max masuk scope
//	// nama variable fungsi dan parameter fungsi harus unik (beda)
//
//	return max;
//} // max, y dan x keluar scope (mati)
//
//int main()
//{
//	int i{ 5 };			// i masuk scope ini juga di sebut varible local
//	double d{ 4.0 };	// d masuk scope
//
//	{
//		
//		//deklarasi ini mereferensikan ke object yang beda dari i diatas(jgn dipake, variable shadowing, variable harus unik).
//		// int i {3}; 
//		
//		// foo bisa liat i dan d
//		int foo{1}; // foo dibuat disini
//	} // foo mati disini
//
//	// make foo disini = compiler error
//	
//	return 0;
//}	// i dan d mati disini (out of scope)