#include <iostream>
#include <string>

int main () {
    for (int i {99}; i > 0; i--) {
        
        // --- Bagian Pertama: Tentukan 'i' botol ---
        std::string bottles_now = " bottles"; // Default
        if (i == 1) {
            bottles_now = " bottle"; // Perbaikan untuk '1 bottle'
        }
        
        std::cout << i << bottles_now << " of beer on the wall, " << i << bottles_now << " of beer.\n";
        std::cout << "Take one down and pass it around, ";

        // --- Bagian Kedua: Tentukan 'i - 1' botol ---
        std::string bottles_next = " bottles"; // Default
        int next_count = i - 1;

        if (next_count == 1) {
            bottles_next = " bottle"; // Perbaikan untuk '1 bottle'
        }
        
        // Cetak jumlah berikutnya
        if (next_count == 0) {
            std::cout << "no more bottles of beer on the wall.\n\n";
        } else {
            std::cout << next_count << bottles_next << " of beer on the wall.\n\n";
        }
    }
    
    // Ayat terakhir (setelah loop selesai)
    std::cout << "No more bottles of beer on the wall, no more bottles of beer.\n";
    std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.\n";
    
    return 0;
}
