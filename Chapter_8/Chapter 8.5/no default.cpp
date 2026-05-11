#include <iostream>

void printDigitName(int x)
{
    switch (x) // x is evaluated to produce value 5
    {
    case 1:
        std::cout << "One";
        return;
    case 2:
        std::cout << "Two";
        return;
    case 3:
        std::cout << "Three";
        return;
        // no matching case exists and there is no default case
    }

    // so execution continues here
    std::cout << "Hello";
}

int main()
{
    printDigitName(5);
    std::cout << '\n';

    return 0;
}