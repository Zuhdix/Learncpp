#include <iostream>
#include <string>

const int& getNextId()
{
	static int s_x{ 0 }; // variable is non-const
	++s_x; // generate the next id
	return s_x;
}

int main()
{
	const int& id1{ getNextId() }; // id1 is a reference
	const int& id2{ getNextId() }; // id2 is a reference
	// pake variable biasa solusinya 
	const int id3{ getNextId() }; // variable biasa
	std::cout << id1 << id2 << '\n';
	std::cout << id3 << '\n';

	return 0;
}