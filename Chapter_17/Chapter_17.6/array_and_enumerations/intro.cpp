#include <array>
#include <iostream>

enum StudentNames
{
	kenny,
	kyle,
	stan,
	butters,
	cartman,
	max_students
};

int main()
{
	constexpr std::array testScores{ 78, 94, 66, 77 }; // oops, hanya 4 nilai

	// Ensure the number of test scores is the same as the number of students
	static_assert(std::size(testScores) == max_students);

	std::cout << "Cartman got a score of " << testScores[StudentNames::cartman] << '\n'; // UB karena invalid index

	return 0;
}