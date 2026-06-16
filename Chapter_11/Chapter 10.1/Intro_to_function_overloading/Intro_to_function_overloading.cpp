#include <iostream>

int add(int x, int y) // int version
{
	return x + y;
}

double add(double x, double y) // float version
{
	return x + y;
}

int main()
{

	std::cout << "Hello, bitch, this function is int so yeah: ";
	std::cout << add(20, 30) << '\n';

	std::cout << "Hello darling, this function is Double: ";
	std::cout << add(2.9, 93.2) << '\n';

	// compiler otomatis tau dan membedakan berdasarkan argumen yang diberikan.
	return 0;
}