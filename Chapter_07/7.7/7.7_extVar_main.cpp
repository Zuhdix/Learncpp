#include <iostream>
// g_x dan g_y dari 7.7_ext_var
extern int g_x;       // this extern is a forward declaration of a variable named g_x that is defined somewhere else
extern const int g_y; // this extern is a forward declaration of a const variable named g_y that is defined somewhere else

int main()
{
    std::cout << g_x << ' ' << g_y << '\n'; // prints 2 3

    return 0;
}

// extern memiliki beberapa makna, baca 7.12


// variable global tidak perlu pake extern, karena external by default.
// non-constant
int g_x;        // variable definition (no initializer)
int g_x{ 1 };  // variable definition (w/ initializer)
extern int g_x; // forward declaration (no initializer)

// constant
extern const int g_y{ 1 }; // variable definition (const requires initializers)
extern const int g_y;       // forward declaration (no initializer)