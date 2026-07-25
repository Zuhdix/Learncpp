#include <iostream>

int main()
{
	int* ptr{}; // ptr is now a null pointer, and is not holding an address
	
//	std::cout << ptr << '\n';	// isinya variable ptr adalah 0 (blum nunjuk kemanapun)
//	std::cout << *ptr << '\n'; // null karena blum pointing kemanapun (UB poten)

	int x{ 5 };
	ptr = &x; // ptr now pointing at object x (no longger a null pointer)

	std::cout << *ptr << '\n'; // print value of x through dereferenced ptr

	return 0;
}