#include <iostream>

int accumulate(int x)
{
	static int s_y{0};
	
	return s_y = s_y + x;
}

int main()
{
	std::cout << accumulate(4) << '\n';
	std::cout << accumulate(3) << '\n';

	return 0;
}