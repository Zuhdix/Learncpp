#include <iostream>

// Dua overload dengan parameter berbeda
void print(int x) {
    std::cout << "int: " << x << '\n';
}
void print(double d) {
    std::cout << "double: " << d << '\n';
}

// Overload multi-argumen untuk lihat prioritas
void print(char c, int i) {
    std::cout << "char+int: " << c << i << '\n';
}
void print(char c, double d) {
    std::cout << "char+double: " << c << d << '\n';
}

int main() {
    print(0);            // exact match → print(int)
    print(3.14);         // exact match → print(double)
    print('a');          // 'a' adalah char, tidak exact match,
    // promotion: char → int, panggil print(int)
    print(true);         // bool promotion ke int → print(int)
    print('x', 'a');     // arg1 exact char, arg2 char dipromosikan ke int
    // promotion mengalahkan conversion, jadi panggil print(char,int)
}