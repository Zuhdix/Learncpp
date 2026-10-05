#include <array>
#include <iostream>

template <typename T, std::size_t N>
void printElement3(const std::array<T, N>& arr)
{
    std::cout << std::get<3>(arr) << '\n'; // checks that index 3 is valid at compile-time

    /* Bisa pake static_assert juga */
    static_assert(N > 3);

    std::cout << arr[3] << '\n';
}

int main()
{
    std::array arr{ 9, 7, 5, 3, 1 };
    printElement3(arr); // okay

    std::array arr2{ 9, 7 };
    printElement3(arr2); // compile error

    return 0;
}