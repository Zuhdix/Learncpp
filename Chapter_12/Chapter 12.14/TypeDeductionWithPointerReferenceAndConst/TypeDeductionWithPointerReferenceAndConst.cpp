#include <iostream>

std::string& getRef();

int main()
{
	auto ref1{ getRef() }; // std::string (reference dropped)
	auto& ref2{ getRef() }; // std::string& (reference dropped, referencee reapplied)

	return 0;
}