#include <iostream>

int main() {
    // Loop dari 1 sampai 100
    for (int i = 1; i <= 100; i++) {

        // PRIORITAS 1: Cek kondisi paling spesifik dulu (KPK dari 3 dan 5)
        // Jika i = 15, 30, 45... ini akan TRUE.
        if (i % 15 == 0) {
            std::cout << "FizzBuzz\n";
            // Karena ini if/else if, jika ini TRUE, sisanya DILEWATI (skip).
        }
        // PRIORITAS 2: Cek kelipatan 3
        // Jika i = 3, 6, 9... (tapi bukan 15), ini TRUE.
        else if (i % 3 == 0){
            std::cout << "Fizz\n";
        }
        // PRIORITAS 3: Cek kelipatan 5
        // Jika i = 5, 10, 20... (tapi bukan 15), ini TRUE.
        else if (i % 5 == 0){
            std::cout << "Buzz\n";
        }
        // PRIORITAS TERAKHIR: Jika bukan kelipatan 3 ataupun 5
        else {
            std::cout << i << '\n';
        }
    }

    return 0;
}
