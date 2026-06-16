// ada lima jenis konversi tipe (beda sama promosi)

// integral ke integral
short s = 3; // convert int to short
long l = 3; // convert int to long
char ch = s; // convert short to char
unsigned int u = 3; // convert int to unsigned int

// float ke float
float f = 3.0; // convert double to float
long double ld = 3.0; // convert double to long double

// float ke integer apapun
int i = 3.5; // convert double to int

// integer ke float apapun
double d = 3; // convert int to double

// konversi integer/float ke boolean
bool b1 = 3; // convert int to bool
bool b2 = 3.0; // convert double to bool

// note: karena {} melarang konversi maka diatas pake asssign (copy initialization)

// 1. konversi aman (karena rentangnya bisa menampung) yang mempertahankan nilai.
int main()
{
    int n{ 5 };
    long l = n; // okay, produces long value 5

    short s{ 5 };
    double d = s; // okay, produces double value 5.0

    return 0;
}

// contoh lain
#include <iostream>

int main()
{
    int n = static_cast<int>(static_cast<long>(3)); // convert int 3 to long and back
    std::cout << n << '\n';                         // prints 3

    char c = static_cast<char>(static_cast<double>('c')); // convert 'c' to double and back
    std::cout << c << '\n';                               // prints 'c'

    return 0;
}


// 2. konversi reinterpretatif (tidak aman), tapi tidak kehilangan data.
int main()
{
    int n1{ 5 };
    unsigned int u1{ n1 }; // okay: will be converted to unsigned int 5 (value preserved)

    int n2{ -5 };
    unsigned int u2{ n2 }; // bad: will result in large integer outside range of signed int

    return 0;
}

// contoh lain
#include <iostream>

int main()
{
    int u = static_cast<int>(static_cast<unsigned int>(-5)); // convert '-5' to unsigned and back
    std::cout << u << '\n'; // prints -5

    return 0;
}


// 3. konversi lossy (sangat tidak aman, kehilangan data)
//      double ke int
int i = 3.0; // okay: will be converted to int value 3 (value preserved)
int j = 3.5; // data lost: will be converted to int value 3 (fractional value 0.5 lost)

//      double ke float
int i = 3.0; // okay: will be converted to int value 3 (value preserved)
int j = 3.5; // data lost: will be converted to int value 3 (fractional value 0.5 lost)

// akibatnya nilai akan berbeda saat di konversi lagi ke sumber
#include <iostream>

int main()
{
    double d{ static_cast<double>(static_cast<int>(3.5)) }; // convert double 3.5 to int and back
    std::cout << d << '\n'; // prints 3

    double d2{ static_cast<double>(static_cast<float>(1.23456789)) }; // convert double 1.23456789 to float and back
    std::cout << d2 << '\n'; // prints 1.23457

    return 0;
}