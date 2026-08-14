#include <iostream>
#include <string>

int main()
{
	std::string str{ "I saw a red car yesterday" };

	str.replace(str.find("red"), 3, "blue");
	
	// cara lain yang lebih gampang
	str.replace(8, 3, "blue");

	std::cout << str << '\n';

	return 0;
}