#include <cstddef>
#include <iostream>

int main()
{
	std::cout << "Enter a positive integer: ";
	std::size_t length{};
	std::cin >> length;

	int* array{ new int[length] }; // pake array new. length gak harus constatns

	std::cout << "I just allocated an array of integers of length " << length << '\n';

	array[0] = 5; // set element 0 to value 5

	delete[] array; // use array delete[] to deallocate array, beda sama delete doang karena array berisi elements

	// gak harus nullptr/0 karena langsung keluar scope

	return 0;
}