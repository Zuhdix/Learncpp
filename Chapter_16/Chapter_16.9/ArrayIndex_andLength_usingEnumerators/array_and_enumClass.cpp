#include <iostream>
#include <vector>

enum class StudentNames // now an enum class
{
    kenny, // 0
    kyle, // 1
    stan, // 2
    butters, // 3
    cartman, // 4
    max_students // 5
};

// Overload the unary + operator to convert StudentsNames to the underlying type
constexpr auto operator+(StudentNames a) noexcept
{
    return static_cast<std::underlying_type_t<StudentNames>>(a);
}

int main()
{
    // compile error: no conversion from StudentNames to std::size_t
    std::vector<int> testScores(+StudentNames::max_students); // kasih +

    // compile error: no conversion from StudentNames to std::size_t
    testScores[+StudentNames::stan] = 76; // kasih +

    // compile error: no conversion from StudentNames to any type that operator<< can output
    std::cout << "The class has " << +StudentNames::max_students << " students\n"; // kasih + juga

    return 0;
}