#include<iostream>

// meminta sebuah nilai
double value()
{
	std::cout << "Enter a double value: ";
	double x{};
	std::cin >> x;

	return x;
}

// meminta simbol aritmatika
char getSymbol()
{
	std::cout << "Enter +, -, *, or /: ";
	char symbol{};
	std::cin >> symbol;
	return symbol;
}

// mencetak hasil
void print (double x)
{
	std::cout << x;
}

int main()
{
	double x{ value() };
	double y{ value() };
	char op{ getSymbol() };
	
	double hasil{};

	if (op == '+')
		hasil = x + y;
	else if (op == '-')
		hasil = x - y;
	else if (op == '*')
		hasil = x * y;
	else if (op == '/')
		hasil = x / y;
	else
		std::cout << "invalid! \n";
	print(hasil);
	
	return 0;
}
