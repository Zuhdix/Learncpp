#include <iostream>

constexpr int getValue(int x)
{
    return x;
}

int main()
{
    // as if rule (chapter 5.5)
    int x{ getValue(5) }; // may evaluate at runtime or compile-time

    return 0;
}