int main()
{
    const int prime1[5]{ 2, 3, 5, 7, 11 }; // prime1 explicitly defined to have length 5
    const int prime2[]{ 2, 3, 5, 7, 11 };  // prime2 deduced by compiler to have length 5

    return 0;
}