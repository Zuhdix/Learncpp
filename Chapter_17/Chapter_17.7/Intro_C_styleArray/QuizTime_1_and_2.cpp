// 1. konseptual
array bisa decay klo jadi pointer (blum dijelasin)

// 1. konversi
constexpr std::array<int, 3> a{};

constexpr int arr[3]{};

// 2. 3 hal salah

#include <iostream>

int main()
{
    int length{ 5 };
    const int arr[length]{ 9, 7, 5, 3, 1 }; // array const, jadi length nya juga harus const

    std::cout << arr[length]; // subscript buat akses element only jadi ini gagal
    arr[0] = 4; // gak bisa re assignment

    return 0;
}