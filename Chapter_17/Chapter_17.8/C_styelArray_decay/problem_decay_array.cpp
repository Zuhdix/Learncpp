#include <iostream>

void printArraySize(int arr[])
{
    std::cout << sizeof(arr) << '\n'; // prints 4 (assuming 32-bit addresses)
    // std::cout << size(arr) << '\n'; // error, gak bisa berfungsi pada pointer
}

// gak bisa cek panjang C array karena bentuknya pointer
void printElement2(int arr[])
{
    // gimana cara kasih tau array minimal 3 elemetn?
    std::cout << arr[2];
}


int main()
{
    int arr[]{ 3, 2, 1 };

    std::cout << sizeof(arr) << '\n'; // prints 12 (assuming 4 byte ints)
    // std::cout << size(arr) << '\n'; // sama kaya diatas


    printArraySize(arr); // ukurannya beda, padalah array yang sama 

    int a[]{ 3,2,1 };
    printElement2(a); // aman

    int b[]{ 3,1 };
    printElement2(b); // compile but UB

    int c[]{ 1 };
    printElement2(c); // compiler but UB

    return 0;
}