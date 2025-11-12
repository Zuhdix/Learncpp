#include <iostream>
#include <random>

int main () {
     // 1. Buat "seed" (benih) acak yang berkualitas tinggi
    std::random_device rd;  // std::random_device adalah generator non-deterministik (jika didukung)

    // 2. Buat "mesin" generator angka, berikan seed dari rd
    std::mt19937 gen(rd());  // std::mt19937 adalah generator standar yang sangat bagus

    // 3. Buat "distribusi" yang Anda inginkan
    std::uniform_int_distribution<> distrib(0, 5);   // Ini untuk mendapatkan angka antara 0 dan 5 (inklusif)

    // 4. Hasilkan angka Anda
    int fortune = distrib(gen); // Panggil 'distrib' seolah-olah itu adalah fungsi, dengan 'gen' sebagai argumen
  
    if (fortune == 0) {
        std::cout << "Don't pursue happiness - create it.\n";
    }else if (fortune == 1) {
        std::cout << "All things are difficult before they are easy.\n";
    }else if (fortune == 2) {
        std::cout << "The early bird gets the worm, but the second mouse gets the cheese.\n";
    }else if (fortune == 3) {
        std::cout << "Someone in your life needs a letter from you.\n";
    }else if (fortune == 4) {
        std::cout << "The fortune you search is in another cookie.\n";
    }else if (fortune == 5) {
        std::cout << "Help! I'm being held prisoner in a Chinese bakery!.\n";
    }else {
        std::cout << "You're not lucky, sorry!.\n";
    }

    std::cout << "Your lucky number is: " << fortune << '\n';


    return 0;
}

