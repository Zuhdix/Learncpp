#include <iostream>
#include <string>

// T& is an lvalue reference, so this overload will be preferred for lvalues
template <typename T>
constexpr bool is_lvalue(T&)
{
    return true;
}

// T&& is an rvalue reference, so this overload will be preferred for rvalues
template <typename T>
constexpr bool is_lvalue(T&&)
{
    return false;
}

#define PRINTVCAT(expr) { std::cout << #expr << " is an " << (is_lvalue(expr) ? "lvalue\n" : "rvalue\n"); }

int getint() { return 5; }

int main()
{
    int x{ 5 };
    int y{ 3 };
    const int z{ 10 };

    PRINTVCAT(x);   // lvalue      
    PRINTVCAT(5);   // rvalue
    PRINTVCAT(x + y);   // rvalue
    PRINTVCAT(++x); // lvalue (karena nilainya sudah disimpan ke identifier)
    PRINTVCAT(x++); // rvalue karena nilainya blum di simpan langsung seperti diatas (masih ada proses tukeran nilai)
    PRINTVCAT(z); // lvalue
    PRINTVCAT(x + y = 10); // gak valid, operand kiri harus lvalue, sedangkan x + y sudah di ganti ke rvalue. 
}


// (x + y) = 10   // [G] — apakah ini valid?