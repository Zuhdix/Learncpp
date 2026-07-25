#include <iostream>

int main()
{
	int x{ 10 };
	const int& r1{ x }; // 10

	x = 20;

	std::cout << r1 << '\n'; // 20

	const int& r2{ 42 }; // 42 disimpan ke temp object dan ref terikat ke temp nya
	std::cout << r2 << '\n'; // output 42

	char c{ 'A' };
	const int& r3{ c }; // ubah A (65) ke temp int dan r3 ref ke temp int
	c = 'Z';
	std::cout << r3 << '\n'; // ini tipuan, ref nya tetep ke temp int yaitu value 65 tadi

	r1 = 99; // jelas error karena r1 adalah lvalue ref to const jadi yah const gak bisa diubah, klo mau ya lewat x (baris 8).
	return 0;
}