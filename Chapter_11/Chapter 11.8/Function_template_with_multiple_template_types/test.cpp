#include <iostream>

template <typename T, typename U>
T mystery(T x, U y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << mystery(2, 3.9) << '\n'; // baris 1
    std::cout << mystery(2.0, 3) << '\n'; // baris 2
    std::cout << mystery(5, 3) << '\n'; // baris 3
    return 0;
}