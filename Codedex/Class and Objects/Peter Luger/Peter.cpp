#include <iostream>
#include <string>

/**
 * @class Restaurant
 * @brief Merepresentasikan entitas restoran tunggal.
 * * Class ini bertindak sebagai blueprint. Variabel di dalamnya
 * adalah atribut yang akan dimiliki oleh setiap objek restoran.
 */
class Restaurant {
public: // Access Modifier: Mengizinkan akses langsung dari luar class (main).
    
    /// @brief Nama restoran.
    std::string name{};
    
    /// @brief Jenis masakan (Cuisine type).
    std::string category{};
    
    /// @brief Rating restoran (0.0 - 5.0).
    double rating{};
    
    /// @brief Simbol harga.
    std::string price{};
    
    /// @brief Status delivery (true = tersedia).
    // NOTE: Kamu lupa inisialisasi {} di sini, saya tambahkan agar konsisten.
    bool delivery{false}; 
};

int main()
{
    // --- Instansiasi Objek 1 ---
    Restaurant peter_luger;
    
    // BAD PRACTICE: Menyimpan karakter format '\n' di dalam data mentah.
    // Data seharusnya bersih. Format tampilan urusan std::cout.
    peter_luger.name = "Peter Luger Steak House \n"; 
    peter_luger.category = "American \n";
    peter_luger.rating = 4.4;
    peter_luger.price = "$$$$ \n";
    peter_luger.delivery = false;

    // Output Objek 1
    std::cout << "The Restaurant name is: " << peter_luger.name;
    std::cout << "Category: " << peter_luger.category;
    std::cout << "Rating is " << peter_luger.rating << '\n';
    std::cout << "The Price: " << peter_luger.price;
    // Bool akan mencetak 0 (false) atau 1 (true) secara default.
    std::cout << "Delivery: " << peter_luger.delivery << '\n';

    // --- Instansiasi Objek 2 ---
    Restaurant katz;
    katz.name = "Katz's Delicatessen";
    katz.category = "Deli";
    katz.rating = 4.5;
    katz.price = "$$";
    katz.delivery = false;

    // NOTE: Objek 'katz' diisi tapi tidak pernah digunakan/ditampilkan.
    // Ini disebut "Dead Code" atau "Unused Variable".

    return 0;
}
