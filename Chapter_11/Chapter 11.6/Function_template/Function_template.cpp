#include <iostream>

// huruf T sebagai parameter template
template <typename T> // this is the template parameter declaration defining T as a type template parameter
T max(T x, T y) // this is the function template definition for max<T>
{
	return (x < y) ? y : x;
}

template <typename TMin> // huruf T menandakan tipe parameter template
TMin min(TMin x, TMin y)
{
	return (x > y) ? y : x;
}

int foo(int x, int y)
{
	return x + y;
}

int main()
{
	std::cout << max(1, 3) << '\n'; // harus tipe yang sama
	std::cout << max(1.0, 3.9) << '\n';
	std::cout << max('a', 'c') << '\n';

	foo(1, 3);
	return 0;
}