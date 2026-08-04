#include<iostream>

int main()
{
	std::cout << "enter a number beetween 0 - 9: ";
	int x{};
	std::cin >> x;

	if (x == 2)
		std::cout << " prime number is 2 \n";
	else if (x == 3)
		std::cout << " prime number is 3 \n";
	else if (x == 5)
		std::cout << " prime number is 5 \n";
	else if (x == 7)
		std::cout << " prime number is 7 \n";
	else
		std::cout << " is not prime number: \n";


	return 0;
}
