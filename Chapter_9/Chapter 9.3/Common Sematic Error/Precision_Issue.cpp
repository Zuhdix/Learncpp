#include <iostream>

int main()
{
    float f{ 0.123456789f }; // harusnya pake double aja
    std::cout << f << '\n';

    return 0;
}

#include <iostream>

int main()
{
    double d{ 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 }; // should sum to 1.0

    if (d == 1.0)
        std::cout << "equal\n";
    else
        std::cout << "not equal\n"; // ini yang akan di eksekusi, karna loss precision.

    return 0;
}