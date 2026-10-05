#include <iostream>
#include <utility>

void printArray(int &array[])
{
	for (int element : array)
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