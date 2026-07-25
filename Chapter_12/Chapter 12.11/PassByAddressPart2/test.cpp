#include <iostream>

void changePtr(int* p)
{
	int y{ 99 };
	p = &y; // copy local
}

void changeVal(int* p)
{
	*p = 99; // langsung timpa aslinya
}

int main()
{
	int x{ 5 };
	int* ptr{ &x };

	changePtr(ptr);
	std::cout << x << '\n'; // 5 masih print variable biasa
	std::cout << *ptr << '\n'; // yang berubah hanya copyannya makannya output tetep 5 (ori)
	// tadinya gw berpikir p = &y; ngubah output *ptr, tapi klo begitu kenapa juga compiler bikin sintaks int*& kan ye? jadi kesimpulan ada miskonsepsi dan gw baca ulang.

	changeVal(ptr);
	std::cout << x << '\n'; // 99 
	std::cout << *ptr << '\n'; // 99
	return 0;
}