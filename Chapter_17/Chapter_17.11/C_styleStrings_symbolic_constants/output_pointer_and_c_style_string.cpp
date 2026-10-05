#include <iostream>

int main()
{
    int narr[]{ 9, 7, 5, 3, 1 };
    char carr[]{ "Hello!" };
    const char* ptr{ "Alex" };

    std::cout << narr << '\n'; // narr will decay to type int*
    std::cout << carr << '\n'; // carr will decay to type char*
    std::cout << ptr << '\n'; // name is already type char*

    return 0;
}