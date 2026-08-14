#include <iostream>
#include <string>

int main()
{
	std::string str{ "The rice is cooking" };

	str.erase(4, 11);
	// str.erase (index, count) 
	//           (mulai dari mana, hapus berapa karakter)

	std::cout << str << '\n';

	return 0;
}