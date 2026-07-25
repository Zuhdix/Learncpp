#include <iostream>

int main()
{
    int x{ 5 }; // normal integer
    int& ref{ x }; // reference to variable value

    return 0;
} // x and ref die here



#include <iostream>

int main()
{
    int x{ 5 };

    {
        int& ref{ x };   // ref is a reference to x
        std::cout << ref << '\n'; // prints value of ref (5)
    } // ref is destroyed here -- x is unaware of this

    std::cout << x << '\n'; // prints value of x (5)

    return 0;
} // x destroyed here