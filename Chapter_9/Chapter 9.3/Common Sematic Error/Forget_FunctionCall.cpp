#include <iostream>

int getValue()
{
    return 5;
}

int main()
{
    std::cout << getValue << '\n'; // getValue() harusnya.

    return 0;
}