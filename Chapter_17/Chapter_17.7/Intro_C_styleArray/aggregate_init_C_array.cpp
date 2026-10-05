int main()
{
    int fibonnaci[6] = { 0, 1, 1, 2, 3, 5 }; // copy-list initialization using braced list
    int prime[5]{ 2, 3, 5, 7, 11 };         // list initialization using braced list (preferred)

    // Cara init array C
    int arr1[5];    // Members default initialized int elements are left uninitialized)
    int arr2[5]{}; // Members value initialized (int elements are zero uninitialized) (preferred)

    // kebanyakan = error, kurang = value init
    int a[4]{ 1, 2, 3, 4, 5 }; // compile error: too many initializers
    int b[4]{ 1, 2 };          // arr[2] and arr[3] are value initialized

    // gak bisa CTAD dan auto (warisan C dan bukan STL)
    auto squares[5]{ 1, 4, 9, 16, 25 };


    return 0;
}