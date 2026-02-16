#include"pi.h" // berisi inline function.
#include<iostream>

double circumference(double radius); // forward declaration

int main()
{
	std::cout << pi() << '\n';
	std::cout << circumference(2.0) << '\n';

	return 0;
}