#include <iostream>

int readNumber()
{
    std::cout << "Please enter a number: ";
    int x{};      // Tadinya ini bertipe char dan salah
    std::cin >> x;

    return x;
}

void writeAnswer(int x)
{
    std::cout << "The sum is: " << x << '\n';
}

int main()
{
    int x { readNumber() };
    int y { readNumber() };
    writeAnswer(x + y);

    return 0;
}
