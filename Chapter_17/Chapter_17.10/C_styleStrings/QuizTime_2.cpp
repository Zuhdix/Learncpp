#include <iostream>
#include <cstring>

void readPerCharacter(const char* c)
{
	const char* endChar{ c + std::strlen(c) -1};

	for (; endChar >= c; --endChar)
	{
		std::cout << *endChar << ' ';
	}
}

int main()
{
	readPerCharacter("Hello, World!");

	return 0;
}