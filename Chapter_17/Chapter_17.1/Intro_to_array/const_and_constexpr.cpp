#include <array>

int main()
{
    const std::array<int, 5> prime{ 2, 3, 5, 7, 11 };

    constexpr std::array<int, 5> primes{ 2, 3, 5, 7, 11 };

    return 0;
}