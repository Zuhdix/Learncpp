#include <iostream>

int main()
{
    const int& ref{ 5 }; // okay: 5 is an rvalue

    std::cout << ref << '\n'; // prints 5

    return 0;
}