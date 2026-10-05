#include <iostream>

void printElementZero(const int* arr) // pass by const address
{
    std::cout << arr[0];
}

void printElemetZero(const int arr[]) // sama aja kaya diatas (prefer ini)
{
    std::cout << arr[0];
}

int main()
{
    const int prime[]{ 2, 3, 5, 7, 11 };
    const int squares[]{ 1, 4, 9, 25, 36, 49, 64, 81 };

    printElementZero(prime);   // prime decays to an const int* pointer
    printElementZero(squares); // squares decays to an const int* pointer

    return 0;
}