#include <iostream>

int main () {
    int answer {}; // Sesuai learncpp, 'answer' diinisialisasi ke 0

    // Pengecekan pertama: while (0 != 64)
    // Kondisi ini TRUE, jadi loop dimulai.
    while (answer != 64) {
        std::cout << "guess the number? ";
        std::cin >> answer;
    } 
    
    // Ini akan dieksekusi HANYA SETELAH
    // loop di atas selesai (yaitu, saat answer == 64)
    std::cout << "You guessed it correct! ";  
    
    return 0;
}
