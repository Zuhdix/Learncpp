// kategori
/*
	// regular types
	int        // a normal int type (not an reference)
	int&       // an lvalue reference to an int object
	double&    // an lvalue reference to a double object
	const int& // an lvalue reference to a const int object
*/

#include <iostream>

int main()
{
	int x{ 5 };		// x nilai variabel normal integer
	// dibaca 'referensi lvalue ke x' bukan alamat dari
	int& ref{ x };	// ref  lvalue reference variable yang bisa jadi alias x
	// reference harus di inisialisasi

	// bisa juga pake
	// int &ref{x}; // rekomendasi pake gaya atas

	std::cout << "ini ref " << ref << '\n'; // sama sama print 5
	std::cout << "ini x " << x << '\n';

	x = 6;

	std::cout << "ini ref " << ref << '\n'; // sama sama print 6
	std::cout << "ini x " << x << '\n';

	ref = 7;

	std::cout << "ini ref " << ref << '\n'; // sama sama print 7
	std::cout << "ini x " << x << '\n'; // bisa ubah pake x ataupun ref.

	return 0;
}

int main()
{
	int x{ 5 };
	int& ref{ x };         // okay: non-const lvalue reference bound to a modifiable lvalue

	const int y{ 5 };
	int& invalidRef{ y };  // invalid: non-const lvalue reference can't bind to a non-modifiable lvalue
	int& invalidRef2{ 0 }; // invalid: non-const lvalue reference can't bind to an rvalue
	// gak bisa bind ke rvalue {harus ke lvalue}

	return 0;
}