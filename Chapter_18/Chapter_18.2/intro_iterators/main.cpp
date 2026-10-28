// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic main.cpp

#include<array>
#include<iostream>

int main()
{
    std::array arr{ 0, 1, 2, 3, 4, 5, 6 };

    auto begin{ &arr[0] };                     // nunjuk ke elemen pertama
    auto end{ begin + std::size(arr) };        // satu posisi SETELAH elemen terakhir

    for (auto ptr{ begin }; ptr != end; ++ptr) // ptr != end, bukan ptr < end
    {
        std::cout << *ptr << ' ';              // dereference untuk ambil nilai
    }
    std::cout << '\n';

    return 0;
}