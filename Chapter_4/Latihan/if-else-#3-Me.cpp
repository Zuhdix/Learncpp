#include<iostream>

bool isAllowedToTakeFunRide(double height)
{
	if (height >= 140.0)
		return true;
	else
		return false;
}

int main()
{
	std::cout << "How tall are you (cm)\n";

	double x{};
	std::cin >> x;
	
	if (isAllowedToTakeFunRide(x))
		std::cout << " Have fun\n";
	else
		std::cout << " sorry, you're to short.\n";

	return 0;
}
