#include <iostream>

template<int N>
constexpr int factorial()
{
	static_assert(N >= 0 && "N gak boleh negatif");

	int temp{ 1 };
	for (int i{ 2 }; i <= N; ++i) {
		temp *= i;
	}
	
	return temp;

}

int main()
{
	static_assert(factorial<5>() == 120);

	return 0;
}

