#include <array>
#include <iostream>

void foo(const int length) // length is a runtime constant
{
	std::array<int, length> e{}; // error: length is not a constant expression
}

int main()
{
	std::array<int, 7> a{}; // Using a literal constant

	constexpr int len{ 8 };
	std::array<int, len> b{}; // using a constexpr var

	enum Colors
	{
		red,
		green,
		blue,
		max_colors
	};

	std::array<int, max_colors> c{}; // pake enum unscoped

#define DAYS_PER_WEEK 7
	std::array<int, DAYS_PER_WEEK> d{}; // pake macro (jangan pake, mending pake variabel constexpr)

	
	// gak bisa (harus constant expression)
	// using a non-const variable
	int numStudents{};
	std::cin >> numStudents; // numStudents is non-constant
	std::array<int, numStudents> {}; // error: numStudents is not a constant expression

	foo(7);

	/* WARNING */
	std::array<int, 0> arr{}; // creates a zero-length std::array
	std::cout << arr.empty();  // true if arr is zero-length

	return 0;
}