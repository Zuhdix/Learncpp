#include <iostream>

int main()
{
    const char name[]{ "Alex" };        // case 1: const C-style string initialized with C-style string literal
    const char* const color{ "Orange" }; // case 2: const pointer to C-style string literal
    // case 1 dua kali alokasi memori, pas pesen memori (read-only) dan saat proses init
    // case 2 bergantung implementasi, pesen memori (read-only) kemudian init pointer dgn address string

    // type deduction
    auto s1{ "Alex" };  // type deduced as const char*
    auto* s2{ "Alex" }; // type deduced as const char*
    auto& s3{ "Alex" }; // type deduced as const char(&)[5]

    std::cout << name << ' ' << color << '\n';

    return 0;
}