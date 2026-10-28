// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic main.cpp

#include <algorithm>
#include <array>
#include <iostream>

bool more50(int a)
{
    return (a > 50);
}

int main()
{
    std::array arr{ 13, 90, 99, 5, 40, 80 };

    // TODO: panggil algoritma yang tepat
    auto fifty{ std::count_if(arr.begin(), arr.end(), more50) };

    std::cout << "Count: " << fifty << '\n';
    // Expected output: Count: 3
    // Nah gw kira harus 2 param, ternyata 1 juga bisa dan jika pake std::count malah error, gak ngerti gw.

    return 0;
}