#include <iostream>

// harus dengan operator =, () dan {} compiler error.
void print(int x, int y = 4) // 4 is the default argument
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}

void prints(std::string_view sv = "Hello", double d = 10.0);

int main()
{
    prints();           // okay: both arguments defaulted
    prints("Macaroni"); // okay: d defaults to 10.0
    prints(20.0);       // error: does not match above function (cannot skip argument for sv)

    return 0;
}

int main()
{
    print(1, 2); // y will use user-supplied argument 2
    print(3); // y will use default argument 4, as if we had called print(3, 4)

    return 0;
}

// harus di deklarasi sebelum digunakan.

#include <iostream>
void print(int x, int y); // forward declaration, no default argument
int main()
{
    print(3); // compile error: default argument for y hasn't been defined yet

    return 0;
}
void print(int x, int y = 4)
{
    std::cout << "x: " << x << '\n';
    std::cout << "y: " << y << '\n';
}