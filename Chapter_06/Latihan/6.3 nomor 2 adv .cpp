#include <iostream>

// [[nodiscard]] -> Compiler akan teriak jika kamu panggil fungsi ini tapi return value-nya dicuekin.
[[nodiscard]] constexpr bool isEven(int x)
{
    return (x % 2) == 0;
}

int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    
    // Periksa apakah input valid SEBELUM diproses
    if (!(std::cin >> x)) 
    {
        // Error handling standar
        std::cerr << "Error: Input bukan integer yang valid.\n";
        return 1; // Return non-zero untuk sinyal error ke OS
    }

    // CARA BENAR 1: Handle positif dulu (Lebih mudah dibaca)
    if (isEven(x))
    {
        std::cout << x << " is even\n";
    }
    else
    {
        std::cout << x << " is odd\n";
    }

    /* CARA BENAR 2 (Jika kamu ngotot mau cek ganjil duluan):
    Gunakan operator NOT (!) logis.
    
    if (!isEven(x)) { ... }
    
    JANGAN PAKAI '== 0' ATAU '== false'. Itu amatir.
    */

    return 0;
}
