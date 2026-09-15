#include <iostream>
#include <vector>
#include "SignedArrayView.h"

int main()
{
	std::vector arr{ 9,7,5,3,1 };
	SignedArrayView sarr{ arr }; // Create a signed view of oour std::vector

	for (auto index{ sarr.ssize() - 1 }; index >= 0; --index)
		std::cout << sarr[index] << ' '; // index using a signed type

	// index array C-style
		std::vector arr{ 9, 7, 5, 3, 1 };

		auto length{ static_cast<Index>(arr.size()) };  // in C++20, prefer std::ssize()
		for (auto index{ length - 1 }; index >= 0; --index)
			std::cout << arr.data()[index] << ' ';       // use data() to avoid sign conversion warning


	return 0;
}