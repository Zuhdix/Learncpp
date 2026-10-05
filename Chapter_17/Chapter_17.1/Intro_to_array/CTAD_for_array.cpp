#include <array>
#include <iostream>

int main()
{
    /* REKOMENDASI init array (daripada int,angka) C++17 */
    constexpr std::array a1{ 9, 7, 5, 3, 1 }; // The type is deduced to std::array<int, 5>
    constexpr std::array a2{ 9.7, 7.31 };     // The type is deduced to std::array<double, 2>

    /* GAK BISA SETENGAH - SETENGAH */
    constexpr std::array<int> a2{ 9, 7, 5, 3, 1 };     // error: too few template arguments (length missing)
    constexpr std::array<5> a2{ 9, 7, 5, 3, 1 };       // error: too few template arguments (type missing)

    return 0;
}