// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic main.cpp

#include <iostream>

int main()
{
    const char* ptr{ "Belajar" };

    std::cout << ptr << '\n'; // (a) print isi: "Belajar"
    std::cout << static_cast<const void*>(ptr) << '\n'; // (b) print alamat pointer

    return 0;
}