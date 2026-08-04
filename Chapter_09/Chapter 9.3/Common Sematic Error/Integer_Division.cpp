#include <iostream>

int main()
{   
    // harusnya pake float/double atau static cast
    int x{ 5 };
    int y{ 3 };

    std::cout << x << " divided by " << y << " is: " << x / y << '\n'; // integer division

    return 0;
}