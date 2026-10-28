// C++20
// Compile: g++ -std=c++20 -Wall -Wextra -Werror -pedantic main.cpp

#include <iostream>

int main()
{
    constexpr int rows{ 5 };

    int** array{ new int* [rows] };

    for (int r{ 0 }; r < rows; ++r)
    {
        array[r] = _______________; // tiap row punya (r+1) elemen

        for (int c{ 0 }; c <= r; ++c)
            array[r] = new int[r + 1];
            array[r][c] = r * c;
    }

    // print & cleanup di sini...
    // Cleanup:
    for (int r{ 0 }; r < rows; ++r)
        delete[] array[r];
    delete[] array;

    return 0;
}