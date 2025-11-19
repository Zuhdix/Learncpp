#include <iostream>
#include <vector>
#include <string>

int main () {

    // Inisialisasi List Initialization (Praktik terbaik LearnCPP: Pakai kurung kurawal {})
    std::vector<std::string> alat {
        "baju",
        "starlink",
        "hp",
        "laptop",
        "sabun mandi",
        "sendal",
        "satu truk makanan kaleng",
        "rolan",
        "charger",
        "bebas"
    };

    std::cout << "--- Survival Gear Saya ---\n";

    // CARA 1: Menggunakan For Loop Biasa (Yang baru Anda pelajari)
    // Kita loop dari index 0 sampai kurang dari alat.size()
    for (int i = 0; i < alat.size(); i++) {
        // Mengakses elemen vector menggunakan index [i]
        std::cout << i + 1 << ". " << alat[i] << "\n";
    }

    /* // CARA 2: "Range-based For Loop" (Cara Modern & Paling Disukai LearnCPP)
    // Bacanya: "Untuk setiap 'item' di dalam 'alat'..."
    for (std::string item : alat) {
        std::cout << "- " << item << "\n";
    }
    */

    return 0;
}
