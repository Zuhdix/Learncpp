#include <iostream>

int main()
{
	const int& ref{ 5 }; // temporary object
	// The temporary object holding value 5 has its lifetime extended to match ref

	std::cout << ref << '\n'; // aman di pake disini

	return 0;
} // ref dan temp object mati disini