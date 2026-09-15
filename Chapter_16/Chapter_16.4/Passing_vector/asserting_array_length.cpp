#include <iostream>
#include <vector>

template<typename T>
void printElement3(const std::vector<T>& arr)
{
	std::cout << arr[3] << '\n';
}

int main()
{
	std::vector arr{ 9,7,5,3,1 };
	printElement3(arr);

	std::vector ubArr{ 9,7 }; // a 2-element
	printElement3(ubArr);

	return 0;
}