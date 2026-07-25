#include <iostream>

int main()
{
	short value{ 7 }; // &value = 0012FF60
	short otherValue{ 3 }; // &otherValue = 0012FF54
	
	short* ptr{ &value };

	std::cout << &value << '\n'; // print 0012FF60
	std::cout << value << '\n'; // print 7
	std::cout << ptr << '\n'; // print 0012FF60
	std::cout << *ptr << '\n'; // print 7
	std::cout << '\n';

	*ptr = 9;

	std::cout << &value << '\n'; // print 0012FF60
	std::cout << value << '\n'; // print 9
	std::cout << ptr << '\n'; // print 0012FF60
	std::cout << *ptr << '\n'; // print 9
	std::cout << '\n';

	ptr = &otherValue; // pindah pointing ke otherValue

	std::cout << &otherValue << '\n'; // print 0012FF54
	std::cout << otherValue << '\n'; // print 3
	std::cout << ptr << '\n'; // print 0012FF54
	std::cout << *ptr << '\n'; // 3
	std::cout << '\n';

	std::cout << sizeof(ptr) << '\n'; // karena saya 64 bit mencetak 8 jadi harusnya dalam 32 bit mencetak 4 byte (ptr disini kayaknya pointer itu sendiri, karena pointer itu juga objek tersendiri beda dengan reference koreksi bro)
	std::cout << sizeof(*ptr) << '\n'; // ini tipe data shortnya 2 byte

	return 0;
}

// QuizTime#2

int v1{ 45 };
int* ptr{ &v1 }; // initialize ptr with address of v1

int v2{ 78 };
*ptr = &v2; // ptr gak boleh ada de-ref-nya, karena *ptr itu seolah" v1 = v2; jadi ya salah (koreksi)