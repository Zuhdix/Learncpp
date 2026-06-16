

// NOMOR #1

//
//template<typename T>
//T add(T x, T y)
//{
//	return x + y;
//}
//
//int main()
//{
//	std::cout << add(2, 3) << '\n';
//	std::cout << add(1.2, 3.4) << '\n';
//}

// NOMOR #2

//#include <iostream>
//
//template<typename T>
//T mult(T x, int y)
//{
//	return x * y;
//}
//
//int main()
//{
//	std::cout << mult(2, 3) << '\n';
//	std::cout << mult(1.2, 3) << '\n';
//
//	return 0;
//}

// NOMOR #3

#include <iostream>

template<typename T, typename V>
auto dub(T x, V y)
{
	return x - y;
}

// cara modern (C++20)
auto sub(auto x, auto y)
{
	return x - y;
}

int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << dub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}
