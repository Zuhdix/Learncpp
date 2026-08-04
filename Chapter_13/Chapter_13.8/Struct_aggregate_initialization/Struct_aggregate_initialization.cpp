#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
	double whatever{}; // C++20 allows you to use the designated initializer syntax to initialize specific members of a struct or class. This can be useful when you want to initialize only certain members and leave others with their default values.
};

int main()
{
	Employee frank = { 1, 25, 50000.0 }; // copy-list-initialization using brace list

	Employee joe{ 2, 30, 60000.0 }; // list-initialization using brace list

	Employee kila{}; // value-initialie all members

	return 0;
}