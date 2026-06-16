#include <iostream>

void greet(std::string name = "World", int times = 1)
{
    for (int i = 0; i < times; ++i)
        std::cout << "Hello, " << name << "!\n";
}
// kesalahan pertama compiler gak bisa liat definisi fungsinya jika fungsinya di taro di bawah (bisa dalam kasus non-default) ini linker error, redefiniton.

// kesalahan kedua argumen default paling kiri gak bisa dan menyebabkan compiler error (harus paling kanan dulu di isi)

int main()
{
    greet("Alice", 3);
    greet(); // kesalahan ketiga int gak bisa di konversi ke string.
    return 0;
}
