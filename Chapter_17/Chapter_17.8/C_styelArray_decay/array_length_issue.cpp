#include <cassert>
#include <iostream>

void printElement2(const int arr[], int length)
{
	assert(length > 2 && "printElement 2: Array to short"); // gak bisa pake static_assert di length

	std::cout << arr[2] << '\n';
}

int main()
{
	constexpr int a[]{ 3, 2, 1 };
	printElement2(a, static_cast<int>(std::size(a))); // aman

	constexpr int b[]{ 1, 9 };
	printElement2(b, static_cast<int>(std::size(b))); // trigger assert

	return 0;
}