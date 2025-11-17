#include <iostream>

int main () {
    // Loop 'i' dari 99 turun ke 1
    for (int i {99}; i > 0; i--) {
        // Baris pertama selalu menggunakan 'i'
        std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer.\n";
        
        // Baris kedua HANYA menampilkan (i - 1),
        // tanpa mengubah 'i' itu sendiri.
        std::cout << "Take one down and pass it around, " << (i - 1) << " bottles of beer on the wall.\n\n"; // Tambah baris baru
    }
    return 0;
}
