#include "printString.h"
#include <iostream>
#include <string>
#include <string_view>

int main()
{
	std::string_view sv{ "Hello" };

	// We want to print sv using printString() function

//	printString(sv); // compile error: a std::string_view won't implicitly convert to a std::string

	// Case 1: static_cast returns a temp std::string direct-initialized with sv
	printString(static_cast<std::string>(sv));

	// Case 2: explicitly creates a temp std::string list-initialized with sv
	printString(std::string{sv});

	// Case 3: C-style cast returns temp std::string direct-initialized with sv (avoid this one!)
	printString(std::string(sv));

	return 0;
}