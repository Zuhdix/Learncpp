/**
 * Program: Sum of Even & Product of Odd
 * Deskripsi: Menghitung jumlah total bilangan genap dan hasil kali bilangan ganjil dari sebuah vector.
 */

#include <iostream>
#include <vector>

int main() {

    // 1. Persiapan Data
    // Vector berisi sekumpulan angka acak (campuran ganjil dan genap)
    std::vector<int> num{2, 4, 3, 6, 1, 9, 8, 0, 8, 5, 7, 3, 3};

    // 2. Inisialisasi Variabel Penampung (Scope Main)
    // Trik Modulus/Identitas:
    // - sum_even mulai dari 0: Karena 0 adalah identitas penjumlahan (dan sisa bagi genap adalah 0)
    // - product_odd mulai dari 1: Karena 1 adalah identitas perkalian (dan sisa bagi ganjil adalah 1)
    int sum_even{0};
    int product_odd{1};

    // 3. Proses Loop (Iterasi)
    // Menggunakan std::size_t agar tipe datanya kompatibel dengan .size() (unsigned)
    // Mencegah warning/error dari compiler flag agresif.
    for (std::size_t i = 0; i < num.size(); i++) {

        // Cek Apakah Angka Genap? (Sisa bagi 0)
        if (num[i] % 2 == 0) {
            // Logika Akumulasi Penjumlahan:
            // Update nilai sum_even dengan menambahkan angka saat ini
            sum_even = sum_even + num[i];
        }

        // Jika BUKAN Genap, PASTI Ganjil.
        // Tidak perlu 'else if', langsung 'else' saja biar efisien.
        else {
            // Logika Akumulasi Perkalian:
            // Update nilai product_odd dengan mengalikan angka saat ini
            product_odd = product_odd * num[i];
        }

    } // <--- Akhir dari Scope Loop (Variabel 'i' mati di sini)

    // 4. Output Hasil Akhir
    // Mencetak isi variabel penampung yang sudah selesai dihitung
    std::cout << "Sum even: " << sum_even << "\n";
    std::cout << "Product odd: " << product_odd << "\n";

    return 0;
}
