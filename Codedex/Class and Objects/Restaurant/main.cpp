#include <iostream>
#include <string>

/**
 * @class Restaurant
 * @brief Blueprint untuk merepresentasikan data sebuah restoran.
 * * Class ini menyimpan atribut dasar yang diperlukan untuk
 * fitur "Restaurant Finder".
 */
class Restaurant {
    // PERINGATAN: Di C++, anggota class secara default adalah PRIVATE.
    // Tanpa label 'public:', variabel di bawah ini TIDAK BISA diakses dari main().
public: 
    /// @brief Nama lengkap restoran.
    std::string name{};

    /// @brief Kategori makanan (misal: "Fast Food", "Italian").
    std::string category{};

    /// @brief Rating restoran (skala 0.0 - 5.0).
    double rating{};

    /// @brief Indikator harga (misal: "$", "$$", "$$$").
    std::string price{};

    /// @brief Status ketersediaan layanan pesan antar.
    bool delivery{};
};

int main()
{
    // Kode belum melakukan apa-apa, sesuai instruksi.
    return 0;
}
