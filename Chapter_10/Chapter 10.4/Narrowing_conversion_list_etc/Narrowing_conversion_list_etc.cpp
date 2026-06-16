void someFcn(int i)
{
}

int main()
{
    double d{ 5.0 };

    someFcn(d); // bad: implicit narrowing conversion will generate compiler warning
    // gunakan static_cast secara eksplisit.
    // good: we're explicitly telling the compiler this narrowing conversion is intentional
    someFcn(static_cast<int>(d)); // no warning generated

    return 0;
}

// brace initialization melarang narrowing
int main()
{
    int i{ 3.5 }; // won't compile

    return 0;
}

// cara menghindarinya
int main()
{
    double d{ 3.5 };

    // static_cast<int> converts double to int, initializes i with int result
    int i{ static_cast<int>(d) };

    return 0;
}

// beberapa constexpr tidak dianggap narrowing (compiler gak tau)
#include <iostream>

void print(unsigned int u) // note: unsigned
{
    std::cout << u << '\n';
}

int main()
{
    std::cout << "Enter an integral value: ";
    int n{};
    std::cin >> n; // enter 5 or -5
    print(n);      // conversion to unsigned may or may not preserve value

    return 0;
}

// contoh lain
#include <iostream>

int main()
{
    constexpr int n1{ 5 };   // note: constexpr
    unsigned int u1{ n1 };  // okay: conversion is not narrowing due to exclusion clause

    constexpr int n2{ -5 }; // note: constexpr
    unsigned int u2{ n2 };  // compile error: conversion is narrowing due to value change

    return 0;
}

// kasus aneh dan berbahaya
int n{ 5.0 }; // compile error: narrowing conversion

constexpr double d{ 0.1 };
float f{ d }; // not narrowing, bahkan ini kehilangan presisi