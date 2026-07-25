#include <iostream>

const std::string& getConstRef(); // some function that returns a reference to const

int main()
{
	auto ref1{ getConstRef() }; // std::string (reference dropped, then top-level const dropped from result)

	return 0;
}

// constoh reapplied

#include <string>

const std::string& getConstRef(); // somee function that returns a const reference

int main()
{
	auto ref1{ getConstRef() }; // std::string (reference and top-level const dropped)
	const auto ref2{ getConstRef() }; // const std::string (reference dropped, const dropped, const reapplied)

	auto& ref3{ getConstRef() }; // const std::string& (reference dropped and reapplied, low-level const not dropped)
	const auto& ref4{ getConstRef() }; // const std::string& (reference dropped and reapplied, low-level const not dropped)

	return 0;
}