#include <iostream>

/*		Cara biasa		*/
//struct Employee
//{
//	int id{};
//	int age{};
//	double wage{};
//};
//
//struct Company
//{
//	int numberOfEmployees{};
//	Employee CEO{}; // Employee is a struct within the Company struct
//};

// Clean code
struct Company
{
	struct Employee // accessed via Company::Employee
	{
		int id{};
		int age{};
		double wage{};
	};
	
	int numberOfEmployees{};
	Employee CEO{};
};

int main()
{
	Company myCompany{ 7, {1,32,55000.0} }; // Nested initialization list to initialize Employee
	std::cout << myCompany.CEO.wage << '\n';

	return 0;
}