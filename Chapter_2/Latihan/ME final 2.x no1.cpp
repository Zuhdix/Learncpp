#include<iostream>

int readNumber()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	return input;
}

void writeAnswer(int num)
{
	std::cout << "Hasil dari dua angka: " << num << '\n';
}

int main()
{
	int x {readNumber()};
	std::cout << x << '\n';

	int y{ readNumber() };
	std::cout << y << '\n';

	//int sum{ x + y };

	writeAnswer(x + y);


	return 0;
}
