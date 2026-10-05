#include <iostream>

void printElementZero(int arr[1000])
{
	std::cout << arr[0]; // print nilai pertama element
}

int main()
{
	int x[1000]{ 5 }; // definisikan array dengan 1000 element, x[0] is init to 5
	printElementZero(x);

	int y[7]{ 9 };
	printElementZero(y); // ini bisa

	return 0;
}