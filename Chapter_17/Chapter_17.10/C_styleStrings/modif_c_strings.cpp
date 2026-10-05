#include <iostream>

int main()
{
    // sama kaya array c, gak bisa re assignment
    // char str[]{ "string" }; // ok
    // str = "rope";           // not ok!

    char str[]{ "string" };
    std::cout << str << '\n';
    str[1] = 'p';
    std::cout << str << '\n';

    return 0;
}