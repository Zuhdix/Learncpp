#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
};

void printEmployee(const Employee& employee) // pass by reference to avoid copying
{
	std::cout << "ID: " << employee.id << "\n";
	std::cout << "Age: " << employee.age << "\n";
	std::cout << "Wage: " << employee.wage << "\n";
}

int main()
{
	Employee joe{ 14, 32, 45.19 };
	Employee frank{ 15, 28, 51.18 };

	// Print Joe's information
	printEmployee(joe);

	std::cout << "\n";

	// Print Frank's information
	printEmployee(frank);

	// temporary object Joe's lebih baik jika penggunaanya cuma sekali
	printEmployee(Employee{ 16, 24, 55.55 }); // construct a temporary Employee to pass to function (type explicitly specified)(preferred)

	// another exapmle temporary object
	printEmployee({ 17, 30, 60.00 }); // construct a temporary Employee to pass to function (type deduced from parameter)


	return 0;
}