#include <iostream>

int main()
{
	int arr[5]; // define an array of 5 int values

	arr[1] = 7; // use subscript operator to index array element 1
	std::cout << arr[1]; // print 7

	const int arr2[]{ 9, 8, 7, 6, 5 };

	int s{ 2 };
	std::cout << arr[s] << '\n'; // bisa pake signed index

	unsigned int u{ 3 };
	std::cout << arr[u] << '\n'; // bisa juga pake unsigned

	return 0;
}