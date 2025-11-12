#include <iostream>

int main () {

    std::cout << "Enter your age: ";
    int age {};
    std::cin >> age;

    std::cout << "Are you a citizen (1 = yes or 0 = no): ";
    bool citizen {};
    std::cin >> citizen;

    std::cout << "Have you registered (1 = yes or 0 = no): ";
    bool registered {};
    std::cin >> registered;

    std::cout << "\n--- Result ---\n"; // Memberi pemisah agar rapi

    // 1. Guard Clause: Periksa kegagalan yang paling umum/penting dulu.
    // Ini adalah prioritas #1.
    if (age < 18) {
        std::cout << "You are not old enough to vote.\n";
    }
    // 2. Jika lolos cek usia, periksa kewarganegaraan.
    // Kita bisa pakai !citizen (not citizen) yang ekuivalen dengan citizen == false
    else if (!citizen) {
        std::cout << "You are not eligible to vote (must be a citizen).\n";
    }
    // 3. Jika lolos dua cek di atas, periksa registrasi.
    else if (!registered) {
        std::cout << "You must register first.\n";
    }
    // 4. Jika mereka lolos SEMUA cek kegagalan di atas,
    //    maka mereka PASTI memenuhi syarat.
    else {
        // Kita tidak perlu mengecek (age >= 18 && citizen && registered) lagi.
        // Logikanya sudah menjamin itu di sini.
        std::cout << "You can vote!\n";
    }

    /*
    // --- Alternatif: Nested If (Sama bagusnya, beda gaya) ---
    // Ini mungkin lebih mudah dibaca untuk beberapa orang

    if (age >= 18) {
        if (citizen) {
            if (registered) {
                std::cout << "You can vote!\n";
            } else {
                std::cout << "You must register first.\n";
            }
        } else {
            std::cout << "You are not eligible to vote (must be a citizen).\n";
        }
    } else {
        std::cout << "You are not old enough to vote.\n";
    }
    */

    return 0;
}
