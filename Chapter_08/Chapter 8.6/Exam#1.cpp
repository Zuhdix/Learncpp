#include <iostream>


int calculate(int x, int y, char ops)
{
	switch (ops)
	{
	case '-':
		return x - y;
	case '+':
		return x + y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	case '%':
		return x % y;
	default:
		std::cout << "Operator isn't valid symbol ";
		return 1;
	}

	
}


int main()
{
	std::cout << "Masukkan bilangan: ";
	int x{};
	std::cin >> x;

	std::cout << "Masukkan bilangan lainnya: ";
	int y{};
	std::cin >> y;

	std::cout << "Masukkan operatornya: ";
	char z{};
	std::cin >> z;

	std::cout << "result : " <<  calculate(x, y, z) << '\n';

	return 0;
}