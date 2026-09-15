#include <iostream>
#include <vector>

// copy semantic not optimal
std::vector<int> generate()
{
	std::vector arr1{ 1,2,3,4,5 };
	return arr1;
}

int main()
{
	std::vector arr1{ 1,2,3,4,5 }; // copies {1 - 5} into arr1
	std::vector arr2{ arr1 };

	arr1[0] = 6; // We can continue to use arr1
	arr2[0] = 7; // and we can continue to use arr2

	std::cout << arr1[0] << arr2[0] << '\n';
	std::cout << arr2[3] << '\n';
	std::cout << arr1[3] << '\n';

	std::vector arr3{ generate() }; // return generate mati di akhir ekspresi

	// gak bisa pake generate()
	arr3[0] = 9; // cuma bisa akses arr3

	return 0;
}