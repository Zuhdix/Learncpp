//// Implicit conversions for non-type template arguments
//#include <iostream>
//
//template <int N> // int non-type template parameter
//void print()
//{
//    std::cout << N << '\n';
//}
//
//int main()
//{
//    print<5>();   // no conversion necessary
//    print<'c'>(); // 'c' converted to type int, prints 99
//
//    return 0;
//}

#include <iostream>

template <int N> // int non-type template parameter
void print()
{
    std::cout << N << '\n';
}

template <char N> // char non-type template parameter
void print()
{
    std::cout << N << '\n';
}

int main()
{
    print<5>();   // ambiguous match with int N = 5 and char N = 5
    print<'c'>(); // ambiguous match with int N = 99 and char N = 'c'

    // char bisa ke int atau ke char, ini seimbang jadi ambigu.
    return 0;
}