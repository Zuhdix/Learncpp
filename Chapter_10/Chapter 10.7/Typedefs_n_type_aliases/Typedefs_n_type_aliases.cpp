#include <iostream>

int main()
{
    using Distance = double; // define Distance as an alias for type double

    Distance milesToDestination{ 3.4 }; // defines a variable of type double

    std::cout << milesToDestination << '\n'; // prints a double value

    return 0;
}

// bahaya
int main()
{
    using Miles = long; // define Miles as an alias for type long
    using Speed = long; // define Speed as an alias for type long

    Miles distance{ 5 }; // distance is actually just a long
    Speed mhz{ 3200 };  // mhz is actually just a long

    // The following is syntactically valid (but semantically meaningless)
    distance = mhz;

    return 0;
}

// kode untuk independe platform spesifik
#ifdef INT_2_BYTES
using int8_t = char;
using int16_t = int;
using int32_t = long;
#else
using int8_t = char;
using int16_t = short;
using int32_t = int;
#endif

// sebenernya int8_t adalah alias(typedef) signed char

#include <cstdint> // for fixed-width integers
#include <iostream>

int main()
{
    std::int8_t x{ 97 }; // int8_t is usually a typedef for signed char
    std::cout << x << '\n';

    return 0;
}