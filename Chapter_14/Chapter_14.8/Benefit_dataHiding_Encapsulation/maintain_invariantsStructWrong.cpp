#include <iostream>
#include <string>

struct Employee // members are public by default
{
	std::string name{ "John" };
	char firstInitial{ 'J' }; // should match first initial of name

	void print() const
	{
		std::cout << "Employee " << name << " has first initial " << firstInitial << '\n';
	}
};

int main()
{
	Employee e{}; // default to "John" adn 'J'
	e.print();

	e.name = "Mark"; // change employee's name to "Mark"
	e.print(); // print wrong initial
	return 0;
}