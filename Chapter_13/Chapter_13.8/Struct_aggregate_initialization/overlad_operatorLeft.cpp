#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
};

std::ostream& operator<<(std::ostream& os, const Employee& emp)
{
	os << "Employee ID: " << emp.id << ", Age: " << emp.age << ", Wage: " << emp.wage;
	return os;
}

int main()
{
	Employee joe{ 2, 28 }; // joe.wage will be default-initialized to 0.0
	std::cout << joe << '\n';

	return 0;
}