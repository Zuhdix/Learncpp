#include <iostream>

int main () {
    // Solusi 1: Mulai dari 1, berhenti di 50 (inklusif)
    // Ini adalah perbaikan paling langsung untuk instruksi.
    for (int i {1}; i <= 50; i++) {
        std::cout << i << " Sheep \n";
    }

    /*
    // Solusi 2: Pola "0-indexed" yang umum di C++
    // (Mulai dari 0, berhenti sebelum 50, cetak i+1)
    for (int i {0}; i < 50; i++) {
        std::cout << (i + 1) << " Sheep \n";
    }
    */
    
    std::cout << "😴💭\n"; // Tambahkan emoji akhir

    return 0;
}
