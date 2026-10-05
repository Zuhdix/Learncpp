#include <iostream>

namespace ProgramData
{
    constexpr int squares[5]{ 1, 4, 9, 16, 25 }; // an array of constexpr int
}

int main()
{
    const int prime[5]{ 2, 3, 5, 7, 11 }; // an array of const int
    prime[0] = 17; // compile error: can't change const int

    std::cout << sizeof(prime); // print 20 (misal 4 byte int)

    return 0;
}