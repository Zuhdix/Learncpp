#include <algorithm>
#include <array>
#include <iostream>

int main()
{
	std::array arr{ 13, 90, 99, 5, 40, 80 };

	std::cout << "Enter a value to search for and replace with: ";
	int search{};
	int replace{};
	std::cin >> search >> replace;

	// Input validasi dihilangkan

	// std::find return iterator yang di pointing untuk menemukan elemen (atau akhir container)
	// simpan ke variabel pake type inference to deduce the type of
	// The iterator (since we don't care)
	auto found{ std::find(arr.begin(), arr.end(), search) };

	// Algoritma yang gak nemu return iterator akhir
	// Akses via end() mem-function
	if (found == arr.end())
	{
		std::cout << "Could not find " << search << '\n';
	}
	else
	{
		// Override the found element
		*found = replace;
	}

	for (int i : arr)
	{
		std::cout << i << ' ';
	}

	std::cout << '\n';

	return 0;
}