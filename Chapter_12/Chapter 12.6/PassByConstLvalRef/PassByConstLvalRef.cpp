#include <iostream>

void printRef(const int& y) // y is a const-ref
{
	std::cout << y << '\n';
}

//void addOne(const int& y)
//{
//	++y; // haram, y adalah const
//}


int main()
{
	int x{ 5 };
	printRef(x);	// x is modifable lvalue, y binds to x

	const int z{ 5 };
	printRef(z);	// z i non-modifable lvalue, y binds to x

	printRef(5);	// 5 is rvalue literal, y binds to temporary int objcet
	

	return 0;
}