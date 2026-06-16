#include <iostream>

template<int N>
constexpr int factorial()
{

	static_assert(N >= 0 && "N tidak boleh negatif");

		if constexpr (N > 1)
			return N * factorial<N - 1>();

	return 1;
}
int main()
{
	//std::cout << factorial<5>() << '\n';
	//std::cout << factorial<-3>() << '\n';

	static_assert(factorial<0>() == 1);
	static_assert(factorial<3>() == 6);
	static_assert(factorial<5>() == 120);

	std::cout << factorial<3>();

	return 0;
}

//#include <iostream>
//
//template <auto N>
//void printTwice()
//{
//	std::cout << N << " " << N << '\n';
//}
//
//template <char N>
//void printTwice()
//{
//	std::cout << N << " " << N << '\n';
//}
//
//int main()
//{
//	constexpr int x{7};
//	printTwice<x>(); // tetep ambigu
//	printTwice<65>(); // lebih parah
//	return 0;
//}