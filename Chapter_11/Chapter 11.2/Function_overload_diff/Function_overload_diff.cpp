#include <iostream>

//using Age = int;   // Type Alias (Cuma nama samaran buat int)
//typedef int Score; // Typedef (Sama kayak using, gaya lama)
//
//// Valid 1: Sidik jari = (int) -> Mangled name: _Z5printi
//void print(int x) { std::cout << "Int: " << x << '\n'; }
//
//// Valid 2: Sidik jari = (double) -> Mangled name: _Z5printd
//void print(double x) { std::cout << "Double: " << x << '\n'; }
//
//// Valid 3: Sidik jari = (int, int) -> Beda JUMLAH parameter
//void print(int x, int y) { std::cout << "2x Int: " << x << ", " << y << '\n'; }
//
//// ❌ ERROR 1: Type Alias BUKAN tipe baru. Ini menabrak Valid 1.
//// void print(Age x) {} 
//
//// ❌ ERROR 2: 'const' pada Pass-by-Value diabaikan di sidik jari. Menabrak Valid 1.
//// void print(const int x) {} 

void serang(float damage)
{
    std::cout << "ini float...... \n";
}

void serang(double damage)
{
    std::cout << "ini double........";
}
int main()
{
    //Age myAge = 30;
    //print(myAge); // Lari ke Valid 1.

    serang(2.3f);

    serang(3.0);

    return 0;
}