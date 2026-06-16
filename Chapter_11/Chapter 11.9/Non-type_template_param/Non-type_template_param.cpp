#include <iostream>

template <int N> // declare a non-type template parameter of type int named N
void print()
{
	std::cout << N << '\n'; // use value of N here
}

int main()
{
	print<5>(); // 5 adalah non-type template argument

	// sama kaya 
	/*
	template <>
	void print<5>()
	{
		std::cout << 5 << '\n';
	}
	*/
	return 0;
}