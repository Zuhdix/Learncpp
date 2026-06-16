int add(int x, int y)
{
    return x + y;
}

int main()
{
    auto sum{ add(5, 6) }; // add() returns an int, so sum's type will be deduced as an int

    return 0;
}

#include <iostream>

void foo()
{
}

int main()
{
    auto a;           // The compiler is unable to deduce the type of a
    auto b{ };       // The compiler is unable to deduce the type of b
    auto c{ foo() }; // Invalid: c can't have type incomplete type void

    return 0;
}