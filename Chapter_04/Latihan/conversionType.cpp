#include<iostream>

int main()
{
	std::cout << "Enter a character: ";
	char ch1{};
	std::cin >> ch1;

	std::cout << "you enter '" << ch1 << "' which has ASCII " << static_cast<int>(ch1) << '\n'; // konversi tipe explisit

	return 0;
}
