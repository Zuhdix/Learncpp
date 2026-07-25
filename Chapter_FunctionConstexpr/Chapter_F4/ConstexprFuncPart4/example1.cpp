#include <iostream>

constexpr int goo(int c) // goo() is now constexpr, jika ini fungsi biasa maka compiler error
{
    return c;
}

constexpr int foo(int b) // b is not a constant expression within foo()
{
    return goo(b);       // if foo() is resolved at compile-time, then `goo(b)` can also be resolved at compile-time
}

int main()
{
    std::cout << foo(5);

    return 0;
}