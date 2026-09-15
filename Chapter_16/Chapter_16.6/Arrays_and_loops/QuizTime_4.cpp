#include <cmath>
#include <iostream>
#include <limits>
#include <vector>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

template <typename T>
T getInput(T min, T max)
{
    while (true)
    {
        std::cout << "Enter a number between " << min << " and " << max << ": ";
        T input{};
        std::cin >> input;

        bool success{ std::cin };
        std::cin.clear();
        ignoreLine();

        if (success && input >= min && input <= max)
            return input;
    }
}

template <typename T>
void printArray(const std::vector<T>& arr)
{
    for (std::size_t index{ 0 }; index < arr.size(); ++index)
        std::cout << arr[index] << ' ';
    if (arr.size() > 0)
        std::cout << '\n';
}

template <typename T>
std::size_t findValue(const std::vector<T>& arr, T input, double epsilon = 0.0001)
{
    for (std::size_t i{ 0 }; i < arr.size(); ++i)
    {
        if (std::abs(arr[i] - input) < epsilon)  // aman untuk double
            return i;
    }
    return arr.size();
}

int main()
{
    std::vector arrIn{ 4, 6, 7, 3, 8, 2, 1, 9 };
    int input{ getInput(1, 9) };       // T = int
    printArray(arrIn);

    std::size_t found{ findValue(arrIn, input) };
    if (found != arrIn.size())
        std::cout << "The number " << input << " has index " << found << '\n';
    else
        std::cout << "The number " << input << " was not found\n";

    std::vector arrDb{ 1.2, 5.6, 7.9, 3.3 };   // nilai dalam rentang 1-9
    double inputDb{ getInput(1.0, 9.0) };       // T = double
    printArray(arrDb);

    std::size_t foundDb{ findValue(arrDb, inputDb) };
    if (foundDb != arrDb.size())
        std::cout << "The number " << inputDb << " has index " << foundDb << '\n';
    else
        std::cout << "The number " << inputDb << " was not found\n";

    return 0;
}