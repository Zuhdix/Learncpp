#include <iostream>
#include <string>

void printByValue(std::string val) // The function param is a copy of str
{
	std::cout << val << '\n'; // print the value via the copy
}

void printByReference(const std::string& ref) // The function param is a reference that binds to str
{
	std::cout << ref << '\n'; // print the value via the reference
}

void printByAddress(const std::string* ptr) // The function param is a pointer that holds the address of str
{
	std::cout << *ptr << '\n'; // print the value via the dereferenced pointer
}

int main()
{
	std::string str{ "Hello, World!" };

	printByValue(str);	// pass str by value, makes a copy of str
	printByReference(str); // pass str by reference, doesn't make a copy of str
	printByAddress(&str);  // pass str by address, doesn't make a copy of str


	return 0;
}

/* Cara Lain pake variabel
int main()
{
	std::string str{ "Hello, world!" };

	printByValue(str); // pass str by value, makes a copy of str
	printByReference(str); // pass str by reference, does not make a copy of str
	printByAddress(&str); // pass str by address, does not make a copy of str

	std::string* ptr { &str }; // define a pointer variable holding the address of str
	printByAddress(ptr); // pass str by address, does not make a copy of str

	return 0;
}

*/