#include <iostream>
#include <string>

const int& getNextId()
{
	static int s_x{ 0 };
	++s_x;
	return s_x;
}

int main()
{
	const int id1{ getNextId() };// id1 is a normal variable now and receives a copy of the value returned by reference from getNextId()
	const int id2{ getNextId() };// id2 is a normal variable now and receives a copy of the value returned by reference from getNextId()

	std::cout << id1 << id2 << '\n';

	return 0;
}

// UB Version
#include <iostream>
#include <string>

const std::string& getProgramName() // will return a const reference
{
	const std::string programName{ "Calculator" };

	return programName;
}

int main()
{
	std::string name{ getProgramName() }; // makes a copy of a dangling reference
	std::cout << "This program is named " << name << '\n'; // undefined behavior

	return 0;
}