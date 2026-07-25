#include <iostream>

int main()
{
	int value{ 5 };
	const int* const ptr{ &value }; // a const pointer to a const value

	return 0;
}