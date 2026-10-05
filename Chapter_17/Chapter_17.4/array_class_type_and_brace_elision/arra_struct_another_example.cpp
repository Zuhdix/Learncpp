#include <array>
#include <iostream>
#include <string_view>

// tiap murid punya id dan nama
struct Student
{
	int id{};
	std::string_view name{};
};

constexpr std::array students{ Student{0,"Alex"}, Student{1,"Joe"}, Student{2,"Aqiel"} };

const Student* findStudentById(int id)
{

	// look through all the students
	for (auto& s : students)
	{
		// Return student with matching id
		if (s.id == id) return &s;
	}

	// No matching id found
	return nullptr;
}

int main()
{
	constexpr std::string_view nobody{ "nobody" };

	const Student* s1{ findStudentById(1) };
	std::cout << "You found: " << (s1 ? s1->name : nobody) << '\n';

	const Student* s2{ findStudentById(3) };
	std::cout << "You found: " << (s2 ? s2->name : nobody) << '\n';

	return 0;
}