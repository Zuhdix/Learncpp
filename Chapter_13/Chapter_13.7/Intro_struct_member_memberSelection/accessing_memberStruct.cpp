#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
};

int main()
{
	Employee joe{};
	joe.id = 1; // use member selection operator (.) to access the member variable id of joe
	joe.age = 32; // use member selection operator (.) to access the member variable age of joe
	joe.wage = 60000.0;

	Employee frank{};
	frank.id = 2;
	frank.age = 28;
	frank.wage = 50000.0;

	int totalAge = joe.age + frank.age; // access member variables of joe and frank
	std::cout << "Joe and Frank have lived " << totalAge << "Total years\n";

	if (joe.wage > frank.wage)
		std::cout << "Joe makes more money than Frank\n";
	else if (joe.wage < frank.wage)
		std::cout << "Frank makes more money than Joe\n";
	else
		std::cout << "Joe and Frank make the same amount of money\n";

	// Frank got a promotion
	frank.wage += 11000.0;

	// Today is Joe's birthday
	++joe.age; // use pre-increment operator to increment joe's age by 1

	return 0;
}