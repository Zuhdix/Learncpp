int main()
{
    int arr[]{ 1, 2, 3 }; // okay: initialization is fine
    arr[0] = 4;            // assignment to individual elements is fine
    arr = { 5, 6, 7 };     // compile error: array assignment not valid

    return 0;
}

// pake copy
#include <algorithm> // for std::copy

int main()
{
    int arr[]{ 1, 2, 3 };
    int src[]{ 5, 6, 7 };

    // Copy src into arr
    std::copy(std::begin(src), std::end(src), std::begin(arr));

    return 0;
}