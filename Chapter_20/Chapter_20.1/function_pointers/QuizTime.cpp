#include <iostream>
#include <functional>

int getInteger()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
    return x;
}

char getOperation()
{
    char op{};

    do
    {
        std::cout << "Enter an operation ('+', '-', '*', '/'): ";
        std::cin >> op;
    } while (op != '+' && op != '-' && op != '*' && op != '/');

    return op;
}

int add(int x, int y)
{
    return x + y;
}

int substract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int divide(int x, int y)
{
    return x / y;
}

int main()
{
    int x{ getInteger() };
    char op{ getOperation() };
    int y{ getInteger() };

    return 0;
}