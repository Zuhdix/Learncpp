// a)
std::cout << 5; // rvalue

// b)
int x{ 5 };
std::cout << x; // lvalue

// c)
int x{ 5 };
std::cout << x + 1; // rvalue

// d)
int foo() { return 5; }
std::cout << foo(); // rvalue

// e)
int& max(int& x, int& y)
{
	return  x > y ? x : y;
}

int x{ 5 };
int y{ 6 };
std::cout << max(x, y);
// rvalue, oke ini salah, argumen gw adalah bahwa output me return yang merupakan nilai rvalue, tapi salah karena sebenernya itu cuma reference ke x dan y yang lvalue maka ya itu lvalue 