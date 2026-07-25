#include <iostream>

int main()
{
    int x{ 5 };
    int& ref{ x };            // okay: referenced type (int) matches type of initializer

    double d{ 6.0 };
    int& invalidRef{ d };     // invalid: conversion of double to int is narrowing conversion, disallowed by list initialization
    double& invalidRef2{ x }; // invalid: non-const lvalue reference can't bind to rvalue (result of converting x to double)

    return 0;
}

int main()
{
    int x{ 5 };
    int y{ 6 };

    int& ref{ x };

    ref = y; // memasukkan nilai y 6 ke x (ref)
    // reference diatas tidak berpindah ke y

    std::cout << x << '\n'; // print 6
}