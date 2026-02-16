#include<iostream>

int main()
{ // block 1, nesting 1
	std::cout << "Enter an integer: ";
	int value{};
	std::cin >> value;

	// if blok standar
	/*if (value >= 0)
	{
		std::cout << value << " is a positive integer (or zero) \n";
		std::cout << "Double This value is " << value * 2 << '\n';
	}
	else
	{
		std::cout<< value << " is a negarive integer\n";
		std::cout << "The positive of this number is " << -value << '\n';
	}*/

	// if nested block
	if (value > 0)
	{ // block 2, nesting 2
		if ((value % 2) == 0)
		{ //block 3, nesting 3
			std::cout << value << " is a positive and even\n";
		}
		else
		{ //block 4, nesting 3
			std::cout << value << " is positive and odd\n";
		}
	}


	return 0;
}