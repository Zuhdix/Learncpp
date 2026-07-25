#include <iostream>

int main()
{
	const int a{ 10 };
	int b{ 20 };

	const int* p{ &a };

	p = &b; // valid ubah alamat ke b
	*p = 99; // error gak bisa re assignment const
	b = 99; // valid, b non const

	int* q{ &a }; // error, non-const pointer gak bisa pointing ke objek const
	return 0;
}