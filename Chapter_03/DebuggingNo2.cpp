#include<iostream>

int readNumber()
{
	std::cout << "Enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

void writeAnswer(int x)
{
	std::cout << "The answer is: " << x << '\n';
}

int main()
{
	int x{};
	int y{};
	x = readNumber();
	y = readNumber();
	writeAnswer(x / y);
}
