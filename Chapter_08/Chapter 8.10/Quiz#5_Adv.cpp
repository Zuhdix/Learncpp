#include <iostream>

void fizzBuzz(int input) {
    for (int i{ 1 }; i <= input; ++i) {
        // Flag: "Apakah kita sudah mencetak sebuah kata di putaran ini?"
        // Di-reset menjadi false setiap kali pindah ke angka (iterasi) baru.
        bool printed_word{ false };

        if (i % 3 == 0) {
            std::cout << "fizz";
            printed_word = true; // Tandai!
        }
        if (i % 5 == 0) {
            std::cout << "buzz";
            printed_word = true; // Tandai!
        }
        if (i % 7 == 0) {
            std::cout << "pop";
            printed_word = true; // Tandai!
        }

        // Lihat betapa bersihnya ini!
        // "Jika belum ada kata yang dicetak, maka cetak angkanya"
        if (!printed_word) {
            std::cout << i;
        }

        std::cout << '\n';
    }
}

int main() {
    fizzBuzz(150);
    return 0;
}

/*  Kasus i = 3: Masuk ke fizz, alarm menyala(true).Di bawah, !true jadi false.Angka 3 tidak dicetak
    Kasus i = 2: Tidak masuk ke fizz, alarm tetap mati (false). Di bawah, !false jadi true. Angka 2 dicetak
*/

