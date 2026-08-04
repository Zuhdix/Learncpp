#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
};

void printEmployee(const Employee& e)
{
	// Use member selection operator (.) to select member from references to struct
	std::cout << "Id: " << e.id << '\n';
	std::cout << "Age: " << e.age << '\n';
	std::cout << "Wage: " << e.wage << '\n';
}

int main()
{
	Employee joe{ 1, 24, 74000.0 };

	++joe.age;
	joe.wage = 80000.0;

	printEmployee(joe);


	return 0;
}