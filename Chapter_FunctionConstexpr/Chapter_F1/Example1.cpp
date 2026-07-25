#include <iostream>

constexpr int greater(int x, int y)
{
	return (x > y ? x : y);
}

int main()
{
	int x{ 5 }; // bukan constexpr
	int y{ 6 };

	std::cout << greater(x, y) << " is greater!\n"; // bisa di evaluasi saat runtime juga.
	
	return 0;
}