#include <iostream>
#include <string>
#include <string_view>

class Employee
{
private:
	std::string m_name{ "???" };
	int m_id{ 0 };

public:
	Employee(std::string_view name)
		: Employee{ name, 0 } // delegate init to Employee(std::string_view, int) constructor
	{}

	Employee(std::string_view name, int id)
		: m_name{ name }, m_id{ id } // actually init the members
	{
		std::cout << "Employee " << m_name << " created\n";
	}
};

int main()
{
	Employee e1{ "James" };
	Employee e2{ "Dave", 55 };

	return 0;
}