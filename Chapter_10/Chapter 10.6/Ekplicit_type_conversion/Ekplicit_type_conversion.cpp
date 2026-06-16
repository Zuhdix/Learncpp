// nilai yang mau di konversi harus secara eksplisit

double d = 10 / 4; // does integer division, initializes d with value 2.0
// contoh
double d = 10.0 / 4.0; // d di isi 2.5 karena dua literalnya float.

// klo pake dua variable integer harus ekplisit pake cast @
int x{ 10 };
int y{ 4 };
double d = x / y; // sama kaya nomor 1, d jadi 2.0.

// C-style cast
#include <iostream>

int main()
{
    int x{ 10 };
    int y{ 4 };

    std::cout << (double)x / y << '\n'; // C-style cast of x to double

    // gaya c++ mirip fungsi
    std::cout << double(x) / y << '\n'; //  // function-style cast of x to double
    return 0;
}

// terbaik pake static_cast (aman dan eksplisit)
#include <iostream>

int main()
{
    char c{ 'a' };
    std::cout << static_cast<int>(c) << '\n'; // prints 97 rather than a

    return 0;
}

// @ solusi contoh paling atas
#include <iostream>

int main()
{
    int x{ 10 };
    int y{ 4 };

    // static cast x to a double so we get floating point division
    std::cout << static_cast<double>(x) / y << '\n'; // prints 2.5

    return 0;
}