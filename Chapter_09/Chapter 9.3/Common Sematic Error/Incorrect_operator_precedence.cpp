#include <iostream>

int main()
{
    int x{ 5 };
    int y{ 7 };

    if (!(x > y)) // oops: operator precedence issue
        std::cout << x << " is not greater than " << y << '\n';
    else
        std::cout << x << " is greater than " << y << '\n';

    return 0;
}