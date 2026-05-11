#include <iostream>


// sangat direkomendasikan menggunakan block
void ifelse(bool a, bool b, bool c)
{
	if (a)
		std::cout << "a";
	else if (b)
		std::cout << "b";
	else if (c)
		std::cout << "c";
}

void ifif(bool a, bool b, bool c)
{
	if (a)
		std::cout << "a";
	if (b)
		std::cout << "b";
	if (c)
		std::cout << "c";
}

int main()
{
	ifelse(false, true, true); // true hanya muncul 1 kali
	std::cout << '\n';
	ifif(false, true, true);  // true muncul b dan c karena if if


	return 0;
}