#include <array>
#include <iostream>

/* WARNING PARAH LANJUT BAWAH */
void printLength(const std::array<int, 5>& arr)
{
	constexpr int length{ std::size(arr) }; // compile error!
	std::cout << "length: " << length << '\n';
}

// caranya pake template non tipe (chapter 17.3)
template <auto Length>
void printLength(const std::array<int, Length>& arr)
{
	std::cout << "length: " << Length << '\n';
}


int main()
{
	constexpr std::array arr{ 9.0, 7.2, 5.4, 3.6, 1.8 };
	std::cout << "length: " << arr.size() << '\n';		// returns length as type `size_type` (alias for `std::size_t`)
	std::cout << "length: " << std::size(arr) << '\n'; // C++17, returns length as type `size_type` (alias for `std::size_t`)
	std::cout << "length: " << std::ssize(arr) << '\n'; // C++20, returns length as a large signed integral type

	std::array nonConst{ 9,7,5,3,1 }; // non const

	constexpr int length{ std::size(arr) }; // ok: aman narrowing karena constexpr size_t
	
	//
	/* WARNING PARAH */
	//
	constexpr std::array arrInt{ 9, 2, 5, 3, 8 };
	constexpr int length1{ std::size(arrInt) }; // works just fine
	std::cout << "length: " << length << '\n';

	printLength(arrInt);


	return 0;
}