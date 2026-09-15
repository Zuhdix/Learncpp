#include <iostream>
#include <vector>
#include <limits>

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


template <typename T>
T getInput()
{
    while (true)
    {
        std::cout << "Enter a number beetween 1 and 9: ";
        T input{};
        std::cin >> input;

        bool success{ std::cin };
        std::cin.clear();
        ignoreLine();

        if(success && input >=1 && input <= 9)
            return input;
    }
}

template <typename T>
void printArray(const std::vector<T>& arr)
{
    std::size_t length{ arr.size() };

    for (std::size_t index{ 0 }; index < length; ++index)
    {
        std::cout << arr[index] << " ";
    }

    if (arr.size() > 0)
        std::cout << '\n';
}

template <typename T>
std::size_t findValue(const std::vector<T>& arr, T input)
{
    for (std::size_t i{ 0 }; i < arr.size(); ++i)
    {
        if (arr[i] == input)
            return i;
    }

    return arr.size();

}

//std::size_t found(std::size_t value, std::vector arr)
//{
//    if(found !=)
//}

int main()
{
    std::vector arrIn{ 4, 6, 7, 3, 8, 2, 1, 9 };
    
    int input{ getInput() };
    printArray(arrIn);
    
    std::size_t found{ findValue(arrIn, input) };
    if (found != arrIn.size())
        std::cout << "The number " << input << " has index " << found << '\n';
    else
        std::cout << "The number " << input << " was not found\n";

    std::vector arrDb{ 39.2, 88.3, 67.1, 92.8 };

    double input{ getInput() };
    printArray(arrDb);

    std::size_t found{ findValue(arrDb, input) };
    if (found != arrDb.size())
        std::cout << "The number " << input << " has index " << found << '\n';
    else
        std::cout << "The number " << input << " was not found\n";



    return 0;
}