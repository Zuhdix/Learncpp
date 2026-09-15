#include <iostream>
#include <vector>

//void passByRef(const std::vector<int>& arr) // we must explicitly specify <int> here
//{
//    std::cout << arr[0] << '\n';
//}
//
//void passByRefCTAD(const std::vector& arr) // gak bisa CTAD
//{
//    std::cout << arr[0];
//}

// pake template
template<typename T>
void passByRef(const std::vector<T>& arr)
{
    std::cout << arr[0] << '\n';
}

int main()
{
    // pake template bisa
    std::vector primes{ 2, 3, 5, 7, 11 };
    passByRef(primes); // ok: this is a std::vector<int>

    // pake template jadi bisa
    std::vector dbl{ 1.3, 3.9, 4.2 };
    passByRef(dbl); // compile error: vector<double> is not convertible to vector<int> (tadinya non-template)


    return 0;
}