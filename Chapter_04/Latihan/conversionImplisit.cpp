#include<iostream>

int main()
{
	std::cout << "Enter a character: ";

	char c{};
	std::cin >> c;

	int imp{ c }; // konversi implisit ke integer dari char

	std::cout << "you enter '" << c << "' which has ASCII " << imp << '\n';

	return 0;
}
