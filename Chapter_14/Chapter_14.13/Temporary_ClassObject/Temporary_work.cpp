#include <iostream>

int add(int x, int y)
{
	//int sum{ x + y }; // simpan disini (gak efisien)
	//return sum;

	return x + y;
}

void print(int value)
{
	std::cout << value;
}

int main()
{
	std::cout << add(7, 8) << '\n';

	//int sum{ 5 + 3 };
	//print(sum); // gak efisien

	print(5 * 9); // better

	return 0;
}

/* CAREFUL GAK BISA */
#include <iostream>

void addOne(int& value) // pass by non-const references requires lvalue
{
	++value;
}

int main()
{
	int sum{ 5 + 3 };
	addOne(sum);   // okay, sum is an lvalue

	addOne(5 + 3); // compile error: not an lvalue

	return 0;
}