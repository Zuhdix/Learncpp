#include <vector>
#include <iostream>

namespace Students
{	// implicit constexpr jadi aman konversi (tadinya gak ekplisit type)
	enum Names : unsigned int // untuk menghindari signed conversion di testScores[name]
	{
		kenny, // 0
		kyle,
		stan,
		butters,
		cartman, // 4
		wendy, // 5 (added)
		// add future enumerators here
		max_students // 6 , ini count enumerator
	};
}

int main()
{
	std::vector testScores{ 78, 92, 66, 77, 18 };

	testScores[Students::Names::stan] = 76; // we are now updating the test score belonging to stan

	Students::Names name{ Students::kenny }; // non-constexpr

	testScores[name] = 99; // may trigger a sign conversion warning if Student::Names defaults to a signed underlying type

	std::cout << "The class has " << Students::Names::max_students << " students\n";

	return 0;
}