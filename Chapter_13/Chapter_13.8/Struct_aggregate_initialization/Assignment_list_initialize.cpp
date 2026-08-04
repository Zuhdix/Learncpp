#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
};

int main()
{
	Employee joe{ 1, 32, 50000.0 }; 

	joe.age = 33; // joe had a birthday, so we update his age
	joe.wage = 55000.0; // joe got a raise, so we update his wage

	// ideal in the same line syntax

	Employee frank{ 2, 28, 60000.0 };
	frank = { frank.id, 33, 65000.0 }; // frank had a birthday and got a raise, so we update his age and wage
	std::cout << "Frank's ID: " << frank.id << ", Age: " << frank.age << ", Wage: " << frank.wage << '\n';

	// Assignment with designed initializer syntax (C++20)

	Employee aqiel{ 3, 25, 70000.0 };
	aqiel = { .id = aqiel.id, .age = 26, .wage = 75000.0 }; // aqiel had a birthday and got a raise, so we update his age and wage
	std::cout << "Aqiel's ID: " << aqiel.id << ", Age: " << aqiel.age << ", Wage: " << aqiel.wage << '\n';

	return 0;
}