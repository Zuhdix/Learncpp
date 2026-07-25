#include <iostream>

int main()
{
	int x{ 4 };
	int y{ 6 };

	int& ref{ x };
	++ref; // x + 1 jadi 5
	std::cout << x << '\n'; // ini bener 5
	ref = y; // lvalue (5) menginisialisasi y (6) jadi 5 di timpa
	std::cout << x << '\n'; // disini gw kebalik ternyata salah besar
	// karena sering pake {} jadi keblinger, ref lvalue dan y lvalue, tapi operand kanan butuh rvalue untuk inisialisasi ke operand kiri lvalue, maka mengambil ekpresi rvaluenya 6 untuk diinisialisasi ke lvalue (ref). 
	++ref;// x tadinya 5 di tambah lagi + 1 jadi 6

	std::cout << x << ' ' << y;

	return 0;
}