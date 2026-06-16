#include <iostream>
#include <typeinfo> // for typeid()

int main()
{
    int i{ 2 };
    std::cout << typeid(i).name() << '\n'; // show us the name of the type for i

    double d{ 3.5 };
    std::cout << typeid(d).name() << '\n'; // show us the name of the type for d

    std::cout << typeid(i + d).name() << ' ' << i + d << '\n'; // show us the type of i + d

    return 0;
}

#include <iostream>
#include <typeinfo> // for typeid()

int main()
{
    short a{ 4 };
    short b{ 5 };
    std::cout << typeid(a + b).name() << ' ' << a + b << '\n'; // show us the type of a + b

    return 0;
}

// issue
#include <iostream>
#include <typeinfo> // for typeid()

int main()
{
    std::cout << typeid(5u - 10).name() << ' ' << 5u - 10 << '\n'; // 5u means treat 5 as an unsigned integer

    return 0;
}
// contoh lain
#include <iostream>

int main()
{
    std::cout << std::boolalpha << (-3 < 5u) << '\n';

    return 0;
}