#include <iostream>

int foo(int x, int y)
{
	int z{ y };
	if (x > y)
	{
		z = x;
	}
	return z;
}

void compare(int x, int y)
{
	if (x > y)
		std::cout << x << " is greater than " << y << '\n';
	else if (x < y)
		std::cout << x << " is lower than " << y << '\n';
	else
	{
		std::cout << x << " is equal to " << y << '\n';
	}
}

int main()
{
	std::cout << foo(1, 0) << '\n';
	std::cout << foo(0, 1) << '\n';

	std::cout << '\n';

	compare(1, 0);
	compare(0, 1);
	compare(0, 0);

	return 0;
}

// contoh test looping coverage
/*
#include <iostream>

void spam(int timesToPrint)
{
	for (int count{ 0 }; count < timesToPrint; ++count)
		 std::cout << "Spam! ";
}


*/