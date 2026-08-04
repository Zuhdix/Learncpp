#include <iostream>

struct Foo1
{
    short a{};
    int b{};
    double c{};
};

struct Foo2
{
    short a{};
    int b{};
    short c{};
};

struct Foo3
{
    int a{};
    short b{};
    short c{};
};

struct A { char x; double y; int z; };
struct B { double y; int z; char x; };

int main()
{
    std::cout << "The size of short is " << sizeof(short) << " bytes\n";
    std::cout << "The size of int is " << sizeof(int) << " bytes\n";
    std::cout << "The size of double is " << sizeof(double) << " bytes\n";
    std::cout << "\n\n";
    std::cout << "The size of Foo is " << sizeof(Foo1) << " bytes\n";
    std::cout << "The size of Foo2 is " << sizeof(Foo2) << " bytes\n";
    std::cout << "The size of Foo3 is " << sizeof(Foo3) << " bytes\n";
    std::cout << "The size of A is " << sizeof(A) << " bytes\n";
    std::cout << "The size of B is " << sizeof(B) << " bytes\n";

    return 0;
}