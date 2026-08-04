#include <iostream>

// Membaca inputan pengguna
int readNumber()
{	
	std::cout << "Please enter a number: ";
	int x{};
	std::cin >> x;
	return x;
}

// Menampilkan Output
void writeAnswer(int x)
{
	std::cout << "The sum is: " << x << '\n';
}

int main()
{
	int x{ readNumber() };

	x = x + readNumber();

	writeAnswer(x);

	return 0;
}
