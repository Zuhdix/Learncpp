#include <iostream>

int getValue(int x)
{
    return x;
}

// This function can be evaluated at runtime
// When evaluated at compile-time, the function will produce a compilation error
// because the call to getValue(x) cannot be resolved at compile-time
constexpr int foo(int x)
{
    if (x < 0) return 0; // needed prior to adoption of P2448R1 in C++23 (see note below)
    return getValue(x);  // call to non-constexpr function here
}

int main()
{
    int x{ foo(5) };           // okay: will evaluate at runtime
    //constexpr int y{ foo(5) }; // compile error: foo(5) can't evaluate at compile-time
    int z{ 7 };
    foo(z);

    return 0;
}

// jika butuh param constexpr pake non tipe template

consteval int goo(int c)    // c is not constexpr, and cannot be used in constant expressions
{
    return c;
}

constexpr int foo(int b)    // b is not constexpr, and cannot be used in constant expressions
{
    constexpr int b2{ b }; // compile error: constexpr variable requires constant expression initializer

    return goo(b);          // compile error: consteval function call requires constant expression argument
}

int main()
{
    constexpr int a{ 5 };

    std::cout << foo(a); // okay: constant expression a can be used as argument to constexpr function foo()

    return 0;
}