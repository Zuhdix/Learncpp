#include <iostream>
#include <string>

class Student {
public:
	std::string name{};
	int year{};
	double gpa{};
	bool enrolled{};
};

int main()
{
	Student Aqiel;

	Aqiel.name = "Aqiel";
	Aqiel.year = 22;
	Aqiel.gpa = 3.82;
	Aqiel.enrolled = true;

	std::cout << "Name: " << Aqiel.name << '\n';
	std::cout << "Year: " << Aqiel.year << '\n';
	std::cout << "GPA: " << Aqiel.gpa << '\n';
	std::cout << "Enrolled: " << Aqiel.enrolled << '\n';


	return 0;
}
