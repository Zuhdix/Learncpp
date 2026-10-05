#include <iostream>

void readPerCharacter(const char* c)
{
	for (; c != '\0'; ++c)
	{
		std::cout << *c << ' ';
	}
}

int main()
{
	readPerCharacter("Hello, World!");

	return 0;
}