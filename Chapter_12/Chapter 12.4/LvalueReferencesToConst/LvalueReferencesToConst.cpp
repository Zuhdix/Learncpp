#include <iostream>

int main()
{
	const int x{ 5 }; // x is non-modifable 
	int& ref{ x }; // ilegal

	const int y{ 6 };
	const int& refY{ y }; // ini baru boleh

	std::cout << refY << '\n'; // bisa aksesk
	// refY = 7; // error karena y itu sendiri const 

	return 0;
}