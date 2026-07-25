#include <iostream>
#include <string>

void printValue(std::string& y) // type changed to std::string&
{
	std::cout << y << '\n';
} // y destroy

int main()
{
	std::string x{ "Hello, world!" };
	printValue(x); // x passed by ref into ref param y

	std::string y{ "hulla huu" };
	printValue(y);

	return 0;
}