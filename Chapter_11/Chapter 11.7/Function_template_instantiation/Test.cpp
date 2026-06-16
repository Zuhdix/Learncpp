//#include <iostream>
//
//template <typename T>
//T addOne(T x)
//{
//    return x + 1;
//}
//
//int main()
//{
//    std::cout << addOne("Hello, world!") << '\n';
//    // di bahas di chapter 17.9 pointer arithmetic
//
//    return 0;
//}
//
//#include <iostream>
//
//// T adalah template parameter (bisa tipe apapun)
//// int times adalah parameter biasa dengan default argument
//template <typename T>
//void print(T val, int times = 1) // [C++11] default argument di template, valid
//{
//    while (times--)
//        std::cout << val;
//    std::cout << '\n';
//}
//
//int main()
//{
//    print(42);        // T=int,  times pakai default → 1
//    print("Hi", 3);   // T=const char*, times=3 → "HiHiHi"
//    print(3.14, 2);   // T=double, times=2 → "3.143.14"
//    return 0;
//}


//#include <iostream>
//
//template <typename T>
//void counter(T val)
//{
//    static int count = 0;
//    ++count;
//    std::cout << count << ": " << val << '\n';
//}
//
//int main()
//{
//    counter(10);
//    counter(20);
//    counter(3.14);
//    counter(30);
//    counter(2.71);
//    return 0;
//}


#include <iostream>

// T adalah template parameter (bisa tipe apapun)
// int times adalah parameter biasa dengan default argument
template <typename T>
void print(T val, int times = 1) // [C++11] default argument di template, valid
{
    while (times--)
        std::cout << val;
    std::cout << '\\n';
}

int main()
{
    print(42);        // T=int,  times pakai default → 1
    std::cout << '\n';
    print("Hi", 3);   // T=const char*, times=3 → "HiHiHi"
    std::cout << '\n';
    print(3.14, 2);   // T=double, times=2 → "3.143.14"
    return 0;
}