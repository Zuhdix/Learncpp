/**
 * Program: Order Cart Simulator
 * Deskripsi: Demonstrasi penggunaan std::vector untuk menambah dan menghapus elemen
 * dalam simulasi keranjang belanja sederhana.
 * Konsep: Vector Initialization, push_back(), pop_back(), .size()
 */

#include <iostream>
#include <vector> // Diperlukan untuk container std::vector
#include <string> // Diperlukan untuk tipe data std::string

int main () {

    // 1. Inisialisasi Vector (List Initialization)
    // Membuat vector string dengan 3 item awal.
    // Index: 0="Pizza", 1="Salad", 2="Coke"
    std::vector<std::string> cart {"🍕Pepperoni pizza" , "🥗Garden salad", "🥤Diet Coke"};

    // Menampilkan item pertama (Index 0)
    // Output: 🍕Pepperoni pizza
    std::cout << "Item pertama: " << cart[0] << '\n';

    // Menampilkan ukuran awal vector
    // Output: 3
    std::cout << "Ukuran awal: " << cart.size() << '\n';

    // 2. Menambah Elemen (.push_back)
    // Menambahkan "Marinara sauce" ke posisi PALING BELAKANG (akhir vector).
    // Vector sekarang menjadi: {Pizza, Salad, Coke, Sauce}
    cart.push_back("🥫 Marinara sauce");

    // Ukuran bertambah menjadi 4
    std::cout << "Ukuran setelah push_back: " << cart.size() << '\n';

    // 3. Menghapus Elemen (.pop_back)
    // Menghapus elemen PALING BELAKANG (elemen terakhir yang masuk).
    // "Marinara sauce" dihapus. Vector kembali menjadi: {Pizza, Salad, Coke}
    cart.pop_back();

    // Ukuran kembali menjadi 3
    std::cout << "Ukuran setelah pop_back: " << cart.size() << '\n';

    return 0;
}
