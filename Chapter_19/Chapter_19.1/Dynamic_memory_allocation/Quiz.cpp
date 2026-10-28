#include <iostream>

void process()
{
    int* data{ new int{100} };
    std::cout << *data << '\n';
}

int main()
{
    int* ptr{ new int{10} };
    int* alias{ ptr };

    delete ptr;
    ptr = nullptr;

    std::cout << *alias << '\n'; // dangling, ptr sudah di delete

    process(); // memori leak, gak sempet di delete

    return 0;
}