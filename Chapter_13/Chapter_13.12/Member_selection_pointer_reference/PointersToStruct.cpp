#include <iostream>

struct Employee
{
	int id{};
	int age{};
	double wage{};
};

int main()
{
	Employee joe{ 1, 34, 65000.0 };

	++joe.age;
	joe.wage = 68000.0;

	Employee* ptr{ &joe };

	// std::cout << ptr.id << '\n'; // Compile error: can't use operator. with pointers
	std::cout << (*ptr).id << '\n'; // Not great but works: First dereference ptr, then use member selection

	// Prefer
	std::cout << ptr->id << '\n'; // sama seperti versi kedua yang jalan tapi lebih gampang
	return 0;
}