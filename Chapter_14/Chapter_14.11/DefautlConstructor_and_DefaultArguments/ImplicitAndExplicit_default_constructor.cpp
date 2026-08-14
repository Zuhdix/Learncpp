#include <iostream>

class Foo
{
private:
    int m_x{};
    int m_y{};

    // Note: no constructors declared
//public: kira kira kaya gitu
//    Foo() // implicitly generated default constructor
//    {
//    }

    /* versi explicit lebih di rekomendasikan */
// Foo() = default; // generates an explicitly defaulted default constructor
};

int main()
{
    Foo foo{};

    return 0;
}