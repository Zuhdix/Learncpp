#include <array>

int main()
{
    std::array<int, 6> fibonnaci = { 0, 1, 1, 2, 3, 5 }; // copy-list initialization using braced list
    std::array<int, 5> prime{ 2, 3, 5, 7, 11 };         // list initialization using braced list (preferred)

    std::array<int, 5> a;   // Members default initialized (int elements are left uninitialized)
    std::array<int, 5> b{}; // Members value initialized (int elements are zero initialized) (preferred)

    std::vector<int> v(5);  // Members value initialized (int elements are zero initialized) (for comparison)

    // awas error, melebihi length
    std::array<int, 4> a{ 1, 2, 3, 4, 5 }; // compile error: too many initializers

    // 0 untuk b2 dan b3 nya (val init)
    std::array<int, 4> b{ 1, 2 };          // b[2] and b[3] are value initialized

    return 0;
}