#include <iostream>

void printDouble(double d)
{
    std::cout << d << '\n';
}

int main()
{
    // Paling simple, float di promosi ke double udah gitu doang.
    printDouble(5.0); // no conversion necessary
    printDouble(4.0f); // numeric promotion of float to double
    return 0;
}

#include <iostream>

void printInt(int x)
{
    std::cout << x << '\n';
}

int main()
{

    // jika int mampu menampung semua tipe data rentang, maka semua bisa di promosi ke integer.
    printInt(2);

    short s{ 3 }; // there is no short literal suffix, so we'll use a variable for this one
    printInt(s); // numeric promotion of short to int

    printInt('a'); // numeric promotion of char to int
    printInt(true); // numeric promotion of bool to int

    return 0;
}