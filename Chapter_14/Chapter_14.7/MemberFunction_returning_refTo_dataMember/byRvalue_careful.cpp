#include <iostream>
#include <string>
#include <string_view>

class Employee
{
	std::string m_name{};

public:
	void setName(std::string_view name) { m_name = name; }
	const std::string& getName() const { return m_name; } // getter returns by const ref
};

// createEmployee() returns an Employee by value (which means the returned value is an rvalue)
Employee createEmployee(std::string_view name)
{
	Employee e;
	e.setName(name);
	return e;
}

int main()
{
	// Case 1: aman: full expression
	std::cout << createEmployee("Frank").getName();

	// Case 2: bad: save returned reference to member of rvalue class object for use later
	const std::string& ref{ createEmployee("Garbot").getName() }; // reference becoming dangling when return value of createEmployee() is destroyed
	std::cout << ref; // UB

	// Case 3: okay: copy ref value to local variabel for use later
	std::string val{ createEmployee("Blempo").getName() }; // makes copy of reference member
	std::cout << val; // okay: val is independent of referenced member

	return 0;
}