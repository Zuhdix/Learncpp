#include <iostream>

constexpr bool isEven(int x)
{
	return (x % 2) == 0;
}

int main()
{
	std::cout << "Enter an integer: ";
	int x{};

	if (!(std::cin >> x))
	{
		std::cerr << "Error: Input bukan Integer. \n";
		return 1;
	}

	std::cout << x << " adalah " << (isEven(x) ? "Genap" : "Ganjil") << '\n';

	return 0;
}
