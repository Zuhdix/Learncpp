#include <array>
#include <iostream>

template <typename T, std::size_t N> // note that this template param declaration matches the one for std::array
void passByRef(const std::array<T, N>& arr)
{
	static_assert(N != 0); // fail if this is a zero length std::array

	std::cout << arr[0] << '\n';
}

// bisa juga cuma template tipe doang
template <std::size_t N> // note: only the length has been templated here
void passByRef(const std::array<int, N>& arr) // we've defined the element type as int
{
	static_assert(N != 0); // fail if this is a zero-length std::array

	std::cout << arr[0] << '\n';
}

int main()
{
	std::array arr{ 9,7,5,3,1 }; // use CTAD to infer std::array<int, 5>
	passByRef(arr);

	std::array arr2{ 1,2,3,4,5,6 }; // CTAD std::array<int, 6>
	passByRef(arr2);

	std::array arr3{ 1.2, 3.4, 5.6, 7.8, 9.9 }; // std::array<double, 5>
	passByRef(arr3);

	return 0;
}