//// Contoh tanpa non-type template param
//#include <cassert>
//#include <cmath> // for std::sqrt
//#include <iostream>
//
//double getSqrt(double d)
//{
//    assert(d >= 0.0 && "getSqrt(): d must be non-negative");
//
//    // The assert above will probably be compiled out in non-debug builds
//    if (d >= 0)
//        return std::sqrt(d);
//
//    return 0.0;
//}
//
//int main()
//{
//    std::cout << getSqrt(5.0) << '\n';
//    std::cout << getSqrt(-5.0) << '\n';
//
//    return 0;
//}

// pake non-type template param
#include <cmath> // for std::sqrt
#include <iostream>

template <double D> // requires C++20 for floating point non-type parameters
double getSqrt()
{
    static_assert(D >= 0.0, "getSqrt(): D must be non-negative");

    if constexpr (D >= 0) // ignore the constexpr here for this example
        return std::sqrt(D); // strangely, std::sqrt isn't a constexpr function (until C++26)

    return 0.0;
}

int main()
{
    std::cout << getSqrt<5.0>() << '\n';
    std::cout << getSqrt<-5.0>() << '\n';

    return 0;
}