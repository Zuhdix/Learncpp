#include <array>
#include <iostream>

int main()
{
    constexpr auto myArray1{ std::to_array<int, 5>({ 9, 7, 5, 3, 1 }) }; // Specify type and size
    constexpr auto myArray2{ std::to_array<int>({ 9, 7, 5, 3, 1 }) };    // Specify type only, deduce size
    constexpr auto myArray3{ std::to_array({ 9, 7, 5, 3, 1 }) };         // Deduce type and size


    // cara buat array tipe short
    constexpr auto shorArray{ std::to_array({9,7,1,8,1}) };
    std::cout << sizeof(shorArray[0]) << '\n';
    return 0;
}