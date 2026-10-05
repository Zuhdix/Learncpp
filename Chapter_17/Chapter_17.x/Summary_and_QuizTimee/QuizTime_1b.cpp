// 1b
#include <iostream>

template <typename T, std::size_t N>
void printArray(T (&array)[N])
{
	for (T element : array)
	{
		std::cout << element << ' ';
	}
}

int main()
{
	int array[]{ 9, 7, 5, 3, 1 };

	printArray(array);

	std::cout << '\n';

	return 0;
}