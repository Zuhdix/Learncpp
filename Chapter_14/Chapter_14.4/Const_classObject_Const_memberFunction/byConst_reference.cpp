#include <iostream>

struct Date
{
	int year{};
	int month{};
	int day{};

	void print() const // non-const
	{
		std::cout << year << '/' << month << '/' << day;
	}
};

void doSomething(const Date& date)
{
	date.print(); // print non-const tadinya error
}

int main()
{
	Date today{ 2026, 6,8 }; // non-const
	today.print();

	doSomething(today);
}

